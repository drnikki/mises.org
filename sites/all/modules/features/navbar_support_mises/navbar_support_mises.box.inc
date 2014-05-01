<?php
/**
 * @file
 * navbar_support_mises.box.inc
 */

/**
 * Implements hook_default_box().
 */
function navbar_support_mises_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'support_mises_header';
  $box->plugin_key = 'box_with_image';
  $box->title = '';
  $box->description = 'Support Mises header';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['support_mises_header'] = $box;

  return $export;
}
