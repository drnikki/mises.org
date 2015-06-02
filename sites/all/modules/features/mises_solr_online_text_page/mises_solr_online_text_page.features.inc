<?php
/**
 * @file
 * mises_solr_online_text_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_solr_online_text_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_solr_online_text_page_node_info() {
  $items = array(
    'solr_online_text_chapter' => array(
      'name' => t('Online Text Chapter'),
      'base' => 'node_content',
      'description' => t('Defines a content type for the purpose of indexing and facilitating results click-thru to a given Online Text node\'s Chapter entity\'s HTML page.'),
      'has_title' => '1',
      'title_label' => t('Chapter Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function mises_solr_online_text_page_weight_features_default_settings() {
  $settings = array();

  $settings['solr_online_text_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
