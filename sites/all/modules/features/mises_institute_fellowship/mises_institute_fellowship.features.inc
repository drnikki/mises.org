<?php
/**
 * @file
 * mises_institute_fellowship.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_institute_fellowship_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_institute_fellowship_node_info() {
  $items = array(
    'institute_fellowship' => array(
      'name' => t('Institute Fellowship'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
