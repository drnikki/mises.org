<?php
/**
 * @file
 * mises_causeview_snippet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_causeview_snippet_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_causeview_snippet_node_info() {
  $items = array(
    'causeview_snippet' => array(
      'name' => t('Causeview Snippet'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
