<?php
/**
 * @file
 * menu_footer_topics.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_footer_topics_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-topics.
  $menus['menu-topics'] = array(
    'menu_name' => 'menu-topics',
    'title' => 'Topics',
    'description' => 'Used for Menu Footer Left',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Topics');
  t('Used for Menu Footer Left');


  return $menus;
}
