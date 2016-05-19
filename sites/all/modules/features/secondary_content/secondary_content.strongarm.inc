<?php
/**
 * @file
 * secondary_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function secondary_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_legacy_book';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_legacy_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_legacy_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_legacy_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_legacy_book';
  $strongarm->value = array();
  $export['node_options_legacy_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_legacy_book';
  $strongarm->value = '1';
  $export['node_preview_legacy_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_legacy_book';
  $strongarm->value = 0;
  $export['node_submitted_legacy_book'] = $strongarm;

  return $export;
}
