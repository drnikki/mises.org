<?php
/**
 * @file
 * homepage_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function homepage_hero_node_info() {
  $items = array(
    'homepage_hero' => array(
      'name' => t('Homepage Hero'),
      'base' => 'node_content',
      'description' => t('Blocks for display at the top of the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
