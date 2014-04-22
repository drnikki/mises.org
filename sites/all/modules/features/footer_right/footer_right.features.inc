<?php
/**
 * @file
 * footer_right.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footer_right_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
