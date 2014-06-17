<?php
/**
 * @file
 * about_mises.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function about_mises_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-mises-sub-menu.
  $menus['menu-about-mises-sub-menu'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'title' => 'About Mises Sub-menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Mises Sub-menu');


  return $menus;
}
