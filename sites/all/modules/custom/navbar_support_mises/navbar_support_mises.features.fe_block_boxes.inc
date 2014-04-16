<?php
/**
 * @file
 * navbar_support_mises.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function navbar_support_mises_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Support Mises header';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'support_mises';
  $fe_block_boxes->body = '<button class="support-mises"><a href="support">Support Mises</a></button>';

  $export['support_mises'] = $fe_block_boxes;

  return $export;
}
