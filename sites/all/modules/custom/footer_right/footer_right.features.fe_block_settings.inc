<?php
/**
 * @file
 * footer_right.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function footer_right_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_contact'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'footer_contact',
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
    'title' => 'Contact Us',
    'visibility' => 0,
  );

  return $export;
}
