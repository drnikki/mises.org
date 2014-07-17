<?php
/**
 * @file
 * resources_for_economist.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function resources_for_economist_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-economist-resources-sub-men'] = array(
    'cache' => -1,
    'css_class' => 'border-secondary',
    'custom' => 0,
    'delta' => 'menu-economist-resources-sub-men',
    'module' => 'menu',
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
