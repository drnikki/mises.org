<?php
/**
 * @file
 * mises_node_clone.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_node_clone_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
