<?php
/**
 * @file
 * mises_solr_online_text_chapter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_solr_online_text_chapter_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_solr_online_text_chapter_node_info() {
  $items = array(
    'solr_online_text_page' => array(
      'name' => t('Solr Online Text Page'),
      'base' => 'node_content',
      'description' => t('Defines a content type for the purpose of indexing and facilitating results click-thru to a given Online Text node\'s Chapter entity\'s Page entity\'s HTML page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
