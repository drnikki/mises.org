<?php
/**
 * @file
 * legacy_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function legacy_book_ctools_plugin_api($module = NULL, $api = NULL) {
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
function legacy_book_node_info() {
  $items = array(
    'legacy_book' => array(
      'name' => t('Legacy Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
