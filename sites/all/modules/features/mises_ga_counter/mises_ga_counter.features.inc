<?php
/**
 * @file
 * mises_ga_counter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_ga_counter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
