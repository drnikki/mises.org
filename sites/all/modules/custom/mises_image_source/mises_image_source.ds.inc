<?php
/**
 * @file
 * mises_image_source.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function mises_image_source_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'image_source';
  $ds_field->label = 'image_source';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|image_source-block',
    'block_render' => '3',
  );
  $export['image_source'] = $ds_field;

  return $export;
}
