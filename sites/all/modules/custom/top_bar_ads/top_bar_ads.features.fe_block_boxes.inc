<?php
/**
 * @file
 * top_bar_ads.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function top_bar_ads_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Left Ad placeholder';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'top_left_ad';
  $fe_block_boxes->body = 'Top left ad placeholder FPO';

  $export['top_left_ad'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Right Ad placeholder';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'top_right_ad';
  $fe_block_boxes->body = 'Top right ad placeholder FPO';

  $export['top_right_ad'] = $fe_block_boxes;

  return $export;
}
