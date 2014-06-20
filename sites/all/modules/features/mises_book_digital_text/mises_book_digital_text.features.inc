<?php
/**
 * @file
 * mises_book_digital_text.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_book_digital_text_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function mises_book_digital_text_node_info() {
  $items = array(
    'book_digital_text' => array(
      'name' => t('Book / Digital Text'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
