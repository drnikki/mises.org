<?php
/**
 * @file
 * mises_management_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mises_management_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_manage-content:admin/content/list
  $menu_links['management_manage-content:admin/content/list'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/list',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'management_manage-content:admin/content/list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Content');


  return $menu_links;
}
