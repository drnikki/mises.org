<?php
/**
 * @file
 * top_bar_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function top_bar_ads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}
