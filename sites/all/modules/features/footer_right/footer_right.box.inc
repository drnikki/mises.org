<?php
/**
 * @file
 * footer_right.box.inc
 */

/**
 * Implements hook_default_box().
 */
function footer_right_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_right';
  $box->plugin_key = 'box_with_image';
  $box->title = 'Contact Us';
  $box->description = 'Footer Right: Contact block';
  $box->options = array(
    'entity_boxes_id' => '4',
    'additional_classes' => '',
  );
  $export['footer_right'] = $box;

  return $export;
}
