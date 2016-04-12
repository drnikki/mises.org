<?php
/**
 * @file
 * mises_clicky.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_clicky_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
