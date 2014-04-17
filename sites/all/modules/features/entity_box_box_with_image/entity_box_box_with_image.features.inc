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
