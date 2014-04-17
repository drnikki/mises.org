<?php
/**
 * @file
 * navbar_support_mises.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function navbar_support_mises_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-support_mises_header'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'support_mises_header',
    'module' => 'boxes',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
