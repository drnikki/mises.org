<?php
/**
 * @file
 * mises_giving_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_giving_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_giving_story_node_info() {
  $items = array(
    'giving_story' => array(
      'name' => t('Giving Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
