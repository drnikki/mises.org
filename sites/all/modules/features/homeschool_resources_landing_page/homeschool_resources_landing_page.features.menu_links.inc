<?php
/**
 * @file
 * homeschool_resources_landing_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function homeschool_resources_landing_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-homeschool-sub-menu_articles:taxonomy/term/150
  $menu_links['menu-homeschool-sub-menu_articles:taxonomy/term/150'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => 'taxonomy/term/150',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_articles:taxonomy/term/150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_audio--video:taxonomy/term/144
  $menu_links['menu-homeschool-sub-menu_audio--video:taxonomy/term/144'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => 'taxonomy/term/144',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Audio & Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_audio--video:taxonomy/term/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_books:taxonomy/term/170
  $menu_links['menu-homeschool-sub-menu_books:taxonomy/term/170'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
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
      'identifier' => 'menu-homeschool-sub-menu_books:taxonomy/term/170',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_high-school-seminars:taxonomy/term/138
  $menu_links['menu-homeschool-sub-menu_high-school-seminars:taxonomy/term/138'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => 'taxonomy/term/138',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'High School Seminars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_high-school-seminars:taxonomy/term/138',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_search-library:search
  $menu_links['menu-homeschool-sub-menu_search-library:search'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_search-library:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_what-is-the-austrian-economics:node/776
  $menu_links['menu-homeschool-sub-menu_what-is-the-austrian-economics:node/776'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => 'node/776',
    'router_path' => 'node/%',
    'link_title' => 'What is the Austrian Economics?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_what-is-the-austrian-economics:node/776',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-homeschool-sub-menu_why-home-school:<front>
  $menu_links['menu-homeschool-sub-menu_why-home-school:<front>'] = array(
    'menu_name' => 'menu-homeschool-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Why Home School?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-homeschool-sub-menu_why-home-school:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Audio & Video');
  t('Books');
  t('High School Seminars');
  t('Search Library');
  t('What is the Austrian Economics?');
  t('Why Home School?');


  return $menu_links;
}
