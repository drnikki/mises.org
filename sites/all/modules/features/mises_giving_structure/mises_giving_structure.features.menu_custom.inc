<?php
/**
 * @file
 * mises_giving_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mises_giving_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-giving.
  $menus['menu-giving'] = array(
    'menu_name' => 'menu-giving',
    'title' => 'Giving Menu',
    'description' => 'Menu for the Giving microsite',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Giving Menu');
  t('Menu for the Giving microsite');


  return $menus;
}
