<?php
/**
 * @file
 * mises_cors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_cors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
