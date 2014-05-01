<?php
/**
 * @file
 * top_bar_ads.box.inc
 */

/**
 * Implements hook_default_box().
 */
function top_bar_ads_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'top_left_ad';
  $box->plugin_key = 'box_with_image';
  $box->title = '';
  $box->description = 'Top Left Ad block';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['top_left_ad'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'top_right_ad';
  $box->plugin_key = 'box_with_image';
  $box->title = '';
  $box->description = 'Top Right Ad block';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['top_right_ad'] = $box;

  return $export;
}
