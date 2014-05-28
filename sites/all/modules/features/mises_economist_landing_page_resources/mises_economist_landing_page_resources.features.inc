<?php
/**
 * @file
 * mises_economist_landing_page_resources.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mises_economist_landing_page_resources_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: economist_recommended_resources_
  $nodequeues['economist_recommended_resources_'] = array(
    'name' => 'economist_recommended_resources_',
    'title' => 'Economist LP Recommended Resources Nodequeued',
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
