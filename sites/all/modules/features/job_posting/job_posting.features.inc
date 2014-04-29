<?php
/**
 * @file
 * job_posting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function job_posting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function job_posting_node_info() {
  $items = array(
    'job_posting_' => array(
      'name' => t('Job Posting'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
