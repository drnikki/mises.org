<?php
/**
 * @file
 * mises_flex_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_flex_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_flex_block_node_info() {
  $items = array(
    'flex_block' => array(
      'name' => t('Flex Block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Descriptive Title (not displayed)'),
      'help' => '',
    ),
  );
  return $items;
}
