<?php
/**
 * @file
 * mises_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_image_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'list_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'single_image' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_author' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_image_collection'] = $strongarm;

  return $export;
}
