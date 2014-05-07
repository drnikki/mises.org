<?php
/**
 * @file
 * footer_browser_library.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function footer_browser_library_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-browse-library.
  $menus['menu-browse-library'] = array(
    'menu_name' => 'menu-browse-library',
    'title' => 'Browse Library',
    'description' => 'Used for Footer Left',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Library');
  t('Used for Footer Left');


  return $menus;
}
