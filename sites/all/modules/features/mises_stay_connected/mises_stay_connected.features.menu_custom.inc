<?php
/**
 * @file
 * mises_stay_connected.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mises_stay_connected_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-mises-social-icons.
  $menus['menu-mises-social-icons'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'title' => 'Stay Connected ',
    'description' => 'Custom menu to display social media icons. ',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Custom menu to display social media icons. ');
  t('Stay Connected ');


  return $menus;
}
