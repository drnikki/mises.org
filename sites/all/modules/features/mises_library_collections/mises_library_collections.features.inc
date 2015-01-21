<?php
/**
 * @file
 * mises_library_collections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_library_collections_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_library_collections_node_info() {
  $items = array(
    'library_collection' => array(
      'name' => t('Library Collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
