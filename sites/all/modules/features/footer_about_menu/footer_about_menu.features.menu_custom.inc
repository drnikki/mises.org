<?php
/**
 * @file
 * footer_about_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_about_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-the-mises-institute.
  $menus['menu-about-the-mises-institute'] = array(
    'menu_name' => 'menu-about-the-mises-institute',
    'title' => 'About the Mises Institute',
    'description' => 'Used for Footer Center',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About the Mises Institute');
  t('Used for Footer Center');


  return $menus;
}
