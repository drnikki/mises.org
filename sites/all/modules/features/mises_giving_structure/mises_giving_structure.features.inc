<?php
/**
 * @file
 * mises_giving_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_giving_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mises_giving_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mises_giving_structure_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: areas_to_support
  $nodequeues['areas_to_support'] = array(
    'name' => 'areas_to_support',
    'title' => 'Areas to Support',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to Support Areas list',
    'link_remove' => 'Remove from Support Areas list',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'campaign_',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: giving_feature_blocks
  $nodequeues['giving_feature_blocks'] = array(
    'name' => 'giving_feature_blocks',
    'title' => 'Guide to Giving Feature Blocks',
    'subqueue_title' => '',
    'size' => 3,
    'link' => 'Feature on Giving Homepage',
    'link_remove' => 'Remove from Giving Homepage',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'giving_feature_block',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: membership_levels
  $nodequeues['membership_levels'] = array(
    'name' => 'membership_levels',
    'title' => 'Membership Levels',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to Membership Levels list',
    'link_remove' => 'Remove from Membership Levels list',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'membership_level',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
