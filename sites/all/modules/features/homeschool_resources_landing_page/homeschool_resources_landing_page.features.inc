<?php
/**
 * @file
 * homeschool_resources_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homeschool_resources_landing_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function homeschool_resources_landing_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function homeschool_resources_landing_page_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homeschool_recommended_resources
  $nodequeues['homeschool_recommended_resources'] = array(
    'name' => 'homeschool_recommended_resources',
    'title' => 'Homeschool LP Recommended Resources Nodequeue',
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
      0 => 'landing_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
