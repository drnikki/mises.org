<?php

function phone_int_metadata() {
  // These strings are translated using t() on output.
  return array(
    'error' => '"%value" is not a valid international phone number',
  );
}

/**
 * Verifies that $phonenumber is a valid international phone number as per ITU or,
 * if a default country code is specified, a valid subscriber number.
 *
 * @see http://www.itu.int/rec/T-REC-E.123/en
 *
 * @param $phonenumber
 *   International phone number to validate
 * @return
 *   TRUE if valid, FALSE if otherwise.
 */
function valid_int_phone_number($phonenumber) {
  $phonenumber = trim($phonenumber);
  if ($phonenumber === '') {
    return FALSE;
  }
  $phonenumber = _normalize_country_code($phonenumber);
  $base_phonenumber = str_replace(array('.', '(', ')', '[', ']', '-', '+', ' '), '', $phonenumber);
  if (!isset($field['phone_int_max_length'])) {
    $field['phone_int_max_length'] = 15;
  }
  if (strlen($base_phonenumber) > $field['phone_int_max_length']) {
    $error = t('Invalid international phone number: Phone number is too long; international phone numbers are limited to 15 digits.');
    return FALSE;
  }
  // Check if digits are used in the base_phonenumber
  if (!ctype_digit($base_phonenumber)) {  
    $error = t('Invalid international phone number: Phone number contains invalid characters; only allowed characters are numbers and punctuation.');
    return FALSE;
  }

  if ($phonenumber[0] !== '+') {
    return FALSE;
  }
  // Check for correct country code.
  // TODO: Fix problems with shared country codes. For instance, $countrycode is
  //       never 'ca' (but always 'us'). One of the following things needs done:
  //       - all countries sharing the same area need to be validated in the
  //         same .inc file (e.g. phone.1.inc or phone.61.inc)
  //       - there will need to be a separate 'pre-validate' function that
  //         determines which country a phone number belongs to.
  $codes = array_flip(array_unique(phone_country_codes()));
  foreach (array(1, 2, 3) as $length) {
    $nr_start = substr($phonenumber, 1, $length);
    if (isset($codes[$nr_start])) {
      $countrycode = $codes[$nr_start];
      break;
    }
  }

  // TODO: Check if parentheses/brackets add up.
  // For now, validate only against a limited number of countries.

  if (!empty($countrycode)) {
      $valid_phone_function = 'valid_'. $countrycode . '_phone_number';
      module_load_include('inc', 'phone', 'include/phone.' . $countrycode);
      if (function_exists($valid_phone_function)) {
        return $valid_phone_function($phonenumber, $field);
      }
      else {
        // Check for any illegal dialing codes, which the 'format' call would
        // strip.
        $check = str_replace(array('.', '(', ')', '[', ']', '-', '+', ' '), '', format_int_phone_number($phonenumber));
        return $check == $base_phonenumber;
      }
  }
  
  return FALSE;
}

/**
 * Formats $phonenumber into the standard representation of international
 * numbers as per E.123.
 *
 * @param $phonenumber
 *   International phone number to format
 * @return
 *   Formatted international phone number
 */
function format_int_phone_number($phonenumber, $field = array()) {
  $phonenumber = trim($phonenumber);
  if ($phonenumber === '') {
    return '';
  }
  $phonenumber = _normalize_country_code($phonenumber, $field);
  $bits = preg_split('/[.()\[\]\- ]/', $phonenumber, -1, PREG_SPLIT_NO_EMPTY);
  // $bits[0] is the country code WITH a plus sign.
  if (isset($bits[1])) {
    // This is the first non-CC segment, so it could have the NDN.
    switch ($bits[1][0]) {
      case 0:
        $bits[1] = substr($bits[1], 1);
        break;
    }
    switch ($bits[1]) {
      case 0:
      case 7:
      case 8:
        array_splice($bits, 1, 1);
        break;
    }
  }
  return implode(' ', $bits);
}

/**
 * Adds a country code to a phone number if necessary.
 *
 * @param $phonenumber
 *   International or local phone number to format
 * @return
 *   International phone number with country code
 */
function _normalize_country_code($phonenumber, $field = array()) {
  if ($phonenumber[0] !== '+') {
    $cc = isset($field['phone_default_country_code']) ? $field['phone_default_country_code'] : '1';
    return "+$cc $phonenumber";
  }
  return $phonenumber;
}

/**
 * Returns the country code in the desired format.
 *
 * @todo Fill in the rest of the country code values.
 *
 * @param $code
 *   Country code to convert (either numeric or 2-letter abbreviation)
 * @param $input_type
 *   Type of country code to convert (either numeric or 2-letter abbreviation)
 * @return
 *   Converted country code
 */
function phone_country_code_convert($code, $input_type = 'digits') {
  $codes = phone_country_codes();

  if ($input_type == 'digits') {
    $codes = array_flip(array_unique($codes));
  }
  return isset($codes[$code]) ? $codes[$code] : FALSE;
}

/**
 * Returns an array of country codes and 2-letter abbreviations for each.
 *
 * @return
 *   An array of country codes.
 */
function phone_country_codes() {
  return array(
    'us' => '1',
    'ca' => '1',
    'ru' => '7',
    'eg' => '20',
    'za' => '27',
    'gr' => '30',
    'nl' => '31',
    'be' => '32',
    'fr' => '33',
    'es' => '34',
    'hu' => '36',
    'it' => '39',
    'va' => '39',
    'ro' => '40',
    'ch' => '41',
    'at' => '43',
    'gb' => '44',
    'dk' => '45',
    'se' => '46',
    'no' => '47',
    'pl' => '48',
    'de' => '49',
    'pe' => '51',
    'mx' => '52',
    'cu' => '53',
    'ar' => '54',
    'br' => '55',
    'cl' => '56',
    'co' => '57',
    've' => '58',
    'my' => '60',
    'au' => '61',
    'cc' => '61',
    'cx' => '61',
    'id' => '62',
    'ph' => '63',
    'nz' => '64',
    'sg' => '65',
    'th' => '66',
    'jp' => '81',
    'kr' => '82',
    'vn' => '84',
    'cn' => '86',
    'tr' => '90',
    'in' => '91',
    'pk' => '92',
    'af' => '93',
    'lk' => '94',
    'mm' => '95',
    'ir' => '98',
    'ma' => '212',
    'dz' => '213',
    'tn' => '216',
    'ly' => '218',
    'gm' => '220',
    'sn' => '221',
    'mr' => '222',
    'ml' => '223',
    'gn' => '224',
    'ci' => '225',
    'bf' => '226',
    'ne' => '227',
    'tg' => '228',
    'bj' => '229',
    'mu' => '230',
    'lr' => '231',
    'sl' => '232',
    'gh' => '233',
    'ng' => '234',
    'td' => '235',
    'cf' => '236',
    'cm' => '237',
    'cv' => '238',
    'st' => '239',
    'gq' => '240',
    'ga' => '241',
    'cg' => '242',
    'cd' => '243',
    'ao' => '244',
    'gw' => '245',
    'io' => '246',
    'sc' => '248',
    'sd' => '249',
    'rw' => '250',
    'et' => '251',
    'so' => '252',
    'dj' => '253',
    'ke' => '254',
    'tz' => '255',
    'ug' => '256',
    'bi' => '257',
    'mz' => '258',
    'zm' => '260',
    'mg' => '261',
    'zw' => '263',
    'na' => '264',
    'mw' => '265',
    'ls' => '266',
    'bw' => '267',
    'sz' => '268',
    'km' => '269',
    'yt' => '269',
    'sh' => '290',
    'er' => '291',
    'aw' => '297',
    'fo' => '298',
    'gl' => '299',
    'gi' => '350',
    'pt' => '351',
    'lu' => '352',
    'ie' => '353',
    'is' => '354',
    'al' => '355',
    'mt' => '356',
    'cy' => '357',
    'fi' => '358',
    'bg' => '359',
    'lt' => '370',
    'lv' => '371',
    'ee' => '372',
    'md' => '373',
    'am' => '374',
    'by' => '375',
    'ad' => '376',
    'mc' => '377',
    'sm' => '378',
    'ua' => '380',
    'rs' => '381',
    'me' => '382',
    'hr' => '385',
    'si' => '386',
    'ba' => '387',
    'mk' => '389',
    'cz' => '420',
    'sk' => '421',
    'li' => '423',
    'fk' => '500',
    'bz' => '501',
    'gt' => '502',
    'sv' => '503',
    'hn' => '504',
    'ni' => '505',
    'cr' => '506',
    'pa' => '507',
    'pm' => '508',
    'ht' => '509',
    'gp' => '590',
    'bo' => '591',
    'gy' => '592',
    'ec' => '593',
    'gf' => '594',
    'py' => '595',
    'mq' => '596',
    'sr' => '597',
    'uy' => '598',
    'an' => '599',
    'tp' => '670',
    'nf' => '672',
    'bn' => '673',
    'nr' => '674',
    'pg' => '675',
    'to' => '676',
    'sb' => '677',
    'vu' => '678',
    'fj' => '679',
    'pw' => '680',
    'wf' => '681',
    'ck' => '682',
    'nu' => '683',
    'ki' => '686',
    'nc' => '687',
    'tv' => '688',
    'pf' => '689',
    'tk' => '690',
    'fm' => '691',
    'mh' => '692',
    'kp' => '850',
    'hk' => '852',
    'mo' => '853',
    'kh' => '855',
    'la' => '856',
    'bd' => '880',
    'tw' => '886',
    'mv' => '960',
    'lb' => '961',
    'jo' => '962',
    'sy' => '963',
    'iq' => '964',
    'kw' => '965',
    'sa' => '966',
    'ye' => '967',
    'om' => '968',
    'ps' => '970',
    'ae' => '971',
    'il' => '972',
    'bh' => '973',
    'qa' => '974',
    'bt' => '975',
    'mn' => '976',
    'np' => '977',
    'tj' => '992',
    'tm' => '993',
    'az' => '994',
    'ge' => '995',
    'kg' => '996',
    'uz' => '998',
  );
}
