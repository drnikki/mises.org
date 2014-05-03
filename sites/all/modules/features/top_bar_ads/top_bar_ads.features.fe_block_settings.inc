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

  $export['nodeblock-739'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 739,
    'module' => 'nodeblock',
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

  $export['nodeblock-740'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 740,
    'module' => 'nodeblock',
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
