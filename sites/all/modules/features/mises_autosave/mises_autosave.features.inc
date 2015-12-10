<?php
/**
 * @file
 * mises_autosave.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_autosave_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
