<?php
/**
 * @file
 * landing_page_daily.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landing_page_daily_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['custom_search_blocks-2'] = array(
    'cache' => -1,
    'css_class' => 'border-secondary bg-darkgray search',
    'custom' => 0,
    'delta' => 2,
    'module' => 'custom_search_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Search Mises Daily',
    'visibility' => 0,
  );

  return $export;
}
