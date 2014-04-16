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

  $export['block-support_mises'] = array(
    'cache' => -1,
    'css_class' => 'support-mises',
    'custom' => 0,
    'machine_name' => 'support_mises',
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
