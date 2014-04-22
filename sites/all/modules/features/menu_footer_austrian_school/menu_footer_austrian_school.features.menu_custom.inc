<?php
/**
 * @file
 * menu_footer_austrian_school.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_footer_austrian_school_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-austrian-school.
  $menus['menu-austrian-school'] = array(
    'menu_name' => 'menu-austrian-school',
    'title' => 'Austrian School',
    'description' => 'Used for Menu Footer Right',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Austrian School');
  t('Used for Menu Footer Right');


  return $menus;
}
