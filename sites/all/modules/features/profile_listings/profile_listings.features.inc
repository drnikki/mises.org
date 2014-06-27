<?php
/**
 * @file
 * profile_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profile_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
