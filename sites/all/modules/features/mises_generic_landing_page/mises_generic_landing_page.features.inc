<?php
/**
 * @file
 * mises_generic_landing_page.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mises_generic_landing_page_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: generic_lp_recommended_resources
  $nodequeues['generic_lp_recommended_resources'] = array(
    'name' => 'generic_lp_recommended_resources',
    'title' => 'Generic LP Recommended Resources Nodequeue',
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
    'subqueues' => 1,
    'types' => array(
      0 => 'landing_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
