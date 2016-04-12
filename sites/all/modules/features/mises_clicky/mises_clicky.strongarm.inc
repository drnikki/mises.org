<?php
/**
 * @file
 * mises_clicky.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_clicky_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_banner_image_html_code_for_copying';
  $strongarm->value = '<a title="Clicky Web Analytics" href="http://getclicky.com/"><img alt="Clicky Web Analytics" src="http://static.getclicky.com/media/links/badge.gif" border="0" /></a>';
  $export['getclicky_banner_image_html_code_for_copying'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_codesnippet';
  $strongarm->value = '';
  $export['getclicky_codesnippet'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_pass_username';
  $strongarm->value = 0;
  $export['getclicky_pass_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_show_banner_image';
  $strongarm->value = 0;
  $export['getclicky_show_banner_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_site_id_number';
  $strongarm->value = '100939425';
  $export['getclicky_site_id_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_site_key_number';
  $strongarm->value = 'b8c0b319a077c492';
  $export['getclicky_site_key_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_trackfiles';
  $strongarm->value = 'pdf|zip|mp3';
  $export['getclicky_trackfiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_track_admin_pages';
  $strongarm->value = '0';
  $export['getclicky_track_admin_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getclicky_track_roles';
  $strongarm->value = array(
    1 => '1',
    2 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $export['getclicky_track_roles'] = $strongarm;

  return $export;
}
