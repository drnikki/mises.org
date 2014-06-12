<?php
/**
 * @file
 * mises_person_profile_node_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_person_profile_node_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
