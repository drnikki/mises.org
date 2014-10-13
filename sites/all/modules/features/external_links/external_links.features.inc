<?php
/**
 * @file
 * external_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function external_links_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
