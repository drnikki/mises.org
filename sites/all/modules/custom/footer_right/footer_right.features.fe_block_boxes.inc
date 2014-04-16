<?php
/**
 * @file
 * footer_right.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function footer_right_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact Us placeholder';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_contact';
  $fe_block_boxes->body = 'Placeholder for footer right contact us block.';

  $export['footer_contact'] = $fe_block_boxes;

  return $export;
}
