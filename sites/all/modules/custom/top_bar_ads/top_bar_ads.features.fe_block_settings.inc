<?php
/**
 * @file
 * top_bar_ads.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function top_bar_ads_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-top_left_ad'] = array(
    'cache' => -1,
    'css_class' => 'top-ad',
    'custom' => 0,
    'machine_name' => 'top_left_ad',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-top_right_ad'] = array(
    'cache' => -1,
    'css_class' => 'top-ad',
    'custom' => 0,
    'machine_name' => 'top_right_ad',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
