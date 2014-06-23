<?php
/**
 * @file
 * giving.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function giving_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sidebar_player';
  $ds_view_mode->label = 'Sidebar Player';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'file' => 'file',
  );
  $export['sidebar_player'] = $ds_view_mode;

  return $export;
}
