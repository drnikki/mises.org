<?php
/**
 * @file
 * mises_solr_featured_items.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mises_solr_featured_items_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: top_results_list
  $nodequeues['top_results_list'] = array(
    'name' => 'top_results_list',
    'title' => 'Featured Search Results',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'library_item',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
