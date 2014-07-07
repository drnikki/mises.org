<?php
/**
 * @file
 * mises_giving_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mises_giving_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fieldblock-e32400f688b5b1150d46199e8c938d47'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e32400f688b5b1150d46199e8c938d47',
    'module' => 'fieldblock',
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
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
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
