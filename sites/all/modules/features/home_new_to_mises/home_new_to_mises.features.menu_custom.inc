<?php
/**
 * @file
 * home_new_to_mises.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function home_new_to_mises_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-new-to-mises.
  $menus['menu-new-to-mises'] = array(
    'menu_name' => 'menu-new-to-mises',
    'title' => 'Get Started Here',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Get Started Here');


  return $menus;
}
