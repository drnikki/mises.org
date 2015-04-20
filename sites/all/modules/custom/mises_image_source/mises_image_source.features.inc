<?php
/**
 * @file
 * mises_image_source.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_image_source_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mises_image_source_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
