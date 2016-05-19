<?php
/**
 * @file
 * mises_blog_twitter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_blog_twitter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
