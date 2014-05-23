<?php
/**
 * @file
 * mises_seo_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_seo_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_schema_installed';
  $strongarm->value = TRUE;
  $export['metatag_schema_installed'] = $strongarm;

  return $export;
}
