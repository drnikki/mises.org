<?php
/**
 * @file
 * mises_popular_content_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mises_popular_content_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mises_popular_content-mises_most_popular'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'mises_most_popular',
    'module' => 'mises_popular_content',
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
    'title' => 'Most Popular Posts',
    'visibility' => 0,
  );

  return $export;
}
