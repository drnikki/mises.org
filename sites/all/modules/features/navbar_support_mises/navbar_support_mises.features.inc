<?php
/**
 * @file
 * navbar_support_mises.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function navbar_support_mises_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
