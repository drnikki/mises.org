<?php
/**
 * @file
 * mises_giving_structure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_giving_structure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_main_links_source';
  $strongarm->value = 'main-menu';
  $export['menu_main_links_source'] = $strongarm;

  return $export;
}
