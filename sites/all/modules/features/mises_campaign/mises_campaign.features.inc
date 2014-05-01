<?php
/**
 * @file
 * mises_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_campaign_node_info() {
  $items = array(
    'campaign_' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
