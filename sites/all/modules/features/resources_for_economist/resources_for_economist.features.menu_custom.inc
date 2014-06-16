<?php
/**
 * @file
 * resources_for_economist.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function resources_for_economist_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-economist-resources-sub-men.
  $menus['menu-economist-resources-sub-men'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'title' => 'Economist Resources sub-menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Economist Resources sub-menu');


  return $menus;
}
