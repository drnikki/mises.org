<?php
/**
 * @file
 * ebook_file_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ebook_file_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
