<?php
/**
 * @file
 * mises_mailchimp_configuration_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_mailchimp_configuration__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
