<?php
/**
 * @file
 * mises_filtered_landing_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_filtered_landing_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
