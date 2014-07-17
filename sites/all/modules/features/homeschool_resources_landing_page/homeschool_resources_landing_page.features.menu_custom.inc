<?php
/**
 * @file
 * homeschool_resources_landing_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function homeschool_resources_landing_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-homeschool-sub-menu.
  $menus['menu-homeschool-sub-menu'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'title' => 'Homeschool Sub-Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Homeschool Sub-Menu');


  return $menus;
}
