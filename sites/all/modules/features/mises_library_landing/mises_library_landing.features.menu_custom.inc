<?php
/**
 * @file
 * mises_library_landing.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mises_library_landing_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-library-sub-menu.
  $menus['menu-library-sub-menu'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'title' => 'Library Sub-menu',
    'description' => 'Menu for sidebar of Library items',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Library Sub-menu');
  t('Menu for sidebar of Library items');


  return $menus;
}
