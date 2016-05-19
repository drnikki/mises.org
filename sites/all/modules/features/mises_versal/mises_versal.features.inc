<?php
/**
 * @file
 * mises_versal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_versal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
