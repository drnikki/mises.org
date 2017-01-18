<?php
/**
 * @file
 * mises_cors.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_cors_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    '*' => 'https://mises.org/,*|https://www.mises.org/',
  );
  $export['cors_domains'] = $strongarm;

  return $export;
}
