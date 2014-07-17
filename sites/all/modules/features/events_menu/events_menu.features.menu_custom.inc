<?php
/**
 * @file
 * events_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function events_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-event-menu.
  $menus['menu-event-menu'] = array(
    'menu_name' => 'menu-event-menu',
    'title' => 'Event Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Event Menu');


  return $menus;
}
