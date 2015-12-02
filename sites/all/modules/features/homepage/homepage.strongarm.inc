<?php
/**
 * @file
 * homepage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function homepage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_slideshow_cycle2_plugin_effects';
  $strongarm->value = 'a:0:{}';
  $export['views_slideshow_cycle2_plugin_effects'] = $strongarm;

  return $export;
}
