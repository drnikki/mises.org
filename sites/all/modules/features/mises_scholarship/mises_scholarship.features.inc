<?php
/**
 * @file
 * mises_scholarship.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_scholarship_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_scholarship_node_info() {
  $items = array(
    'scholarship_' => array(
      'name' => t('Scholarship'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
