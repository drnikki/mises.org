<?php
/**
 * @file
 * mises_events.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mises_events_menu_default_menu_custom() {
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
