<?php
/**
 * @file
 * homeschool_resources_landing_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function homeschool_resources_landing_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-homeschool-sub-menu'] = array(
    'cache' => -1,
    'css_class' => 'border-secondary',
    'custom' => 0,
    'delta' => 'menu-homeschool-sub-menu',
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
