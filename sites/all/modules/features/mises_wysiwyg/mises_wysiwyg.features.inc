<?php
/**
 * @file
 * mises_wysiwyg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_wysiwyg_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ckeditor_styles" && $api == "ckeditor_style_rules") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
