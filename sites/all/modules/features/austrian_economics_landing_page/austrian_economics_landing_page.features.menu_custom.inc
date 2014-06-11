<?php
/**
 * @file
 * austrian_economics_landing_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function austrian_economics_landing_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-austrian-economics-sub-menu.
  $menus['menu-austrian-economics-sub-menu'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'title' => 'Austrian Economics Sub-menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Austrian Economics Sub-menu');


  return $menus;
}
