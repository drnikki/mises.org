<?php
/**
 * @file
 * mises_press_room.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mises_press_room_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-press-room'] = array(
    'cache' => -1,
    'css_class' => 'border-contrast',
    'custom' => 0,
    'delta' => 'menu-press-room',
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
