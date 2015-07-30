<?php
/**
 * @file
 * mises_campaign.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_campaign_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_campaign_node_info() {
  $items = array(
    'campaign_' => array(
      'name' => t('Campaign'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<h2>After creating this page, it must be added to the appropriate nodequeue in order to appear on the Areas to Support page. Click on the Nodequeue link next to the Edit link at the top of the page. Then click "Add to queue" on "Areas to Support." </h2>'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
