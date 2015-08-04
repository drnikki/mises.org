<?php
/**
 * @file
 * mises_award_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_award_ct_ctools_plugin_api($module = NULL, $api = NULL) {
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
function mises_award_ct_node_info() {
  $items = array(
    'award' => array(
      'name' => t('Award'),
      'base' => 'node_content',
      'description' => t('An instance of an award, eg. \'2001 Schlarbaum\'.'),
      'has_title' => '1',
      'title_label' => t('Award Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
