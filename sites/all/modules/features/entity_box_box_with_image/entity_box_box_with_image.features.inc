<?php
/**
 * @file
 * entity_box_box_with_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entity_box_box_with_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function entity_box_box_with_image_default_entity_boxes_type() {
  $items = array();
  $items['box_with_image'] = entity_import('entity_boxes_type', '{
    "type" : "box_with_image",
    "label" : "Box with Image",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
