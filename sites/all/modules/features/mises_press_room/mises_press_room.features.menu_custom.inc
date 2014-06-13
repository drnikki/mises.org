<?php
/**
 * @file
 * mises_press_room.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mises_press_room_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-press-room.
  $menus['menu-press-room'] = array(
    'menu_name' => 'menu-press-room',
    'title' => 'Press Room',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Press Room');


  return $menus;
}
