<?php
/**
 * @file
 * mises_library_landing.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mises_library_landing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-library-sub-menu_article:taxonomy/term/150
  $menu_links['menu-library-sub-menu_article:taxonomy/term/150'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'taxonomy/term/150',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-library-sub-menu_article:taxonomy/term/150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_biography:taxonomy/term/141
  $menu_links['menu-library-sub-menu_biography:taxonomy/term/141'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'taxonomy/term/141',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Biography',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-library-sub-menu_biography:taxonomy/term/141',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_books:taxonomy/term/170
  $menu_links['menu-library-sub-menu_books:taxonomy/term/170'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'taxonomy/term/170',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-library-sub-menu_books:taxonomy/term/170',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_qjae:taxonomy/term/151
  $menu_links['menu-library-sub-menu_qjae:taxonomy/term/151'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'taxonomy/term/151',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'QJAE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-library-sub-menu_qjae:taxonomy/term/151',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Article');
  t('Biography');
  t('Books');
  t('QJAE');


  return $menu_links;
}
