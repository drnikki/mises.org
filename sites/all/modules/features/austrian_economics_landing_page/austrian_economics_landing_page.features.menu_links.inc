<?php
/**
 * @file
 * austrian_economics_landing_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function austrian_economics_landing_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-austrian-economics-sub-menu_articles:taxonomy/term/150
  $menu_links['menu-austrian-economics-sub-menu_articles:taxonomy/term/150'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_articles:taxonomy/term/150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_audio--video:taxonomy/term/144
  $menu_links['menu-austrian-economics-sub-menu_audio--video:taxonomy/term/144'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_audio--video:taxonomy/term/144',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_austrian-school-topics:<front>
  $menu_links['menu-austrian-economics-sub-menu_austrian-school-topics:<front>'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Austrian School Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_austrian-school-topics:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_blog:<front>
  $menu_links['menu-austrian-economics-sub-menu_blog:<front>'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_blog:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_books:taxonomy/term/170
  $menu_links['menu-austrian-economics-sub-menu_books:taxonomy/term/170'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_books:taxonomy/term/170',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_bookstore:http://store.mises.org/
  $menu_links['menu-austrian-economics-sub-menu_bookstore:http://store.mises.org/'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => 'http://store.mises.org/',
    'router_path' => '',
    'link_title' => 'Bookstore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_bookstore:http://store.mises.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_giants-of-the-austrian-school:<front>
  $menu_links['menu-austrian-economics-sub-menu_giants-of-the-austrian-school:<front>'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Giants of the Austrian School',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_giants-of-the-austrian-school:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_itunes-u:http://itunesu.mises.org/
  $menu_links['menu-austrian-economics-sub-menu_itunes-u:http://itunesu.mises.org/'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => 'http://itunesu.mises.org/',
    'router_path' => '',
    'link_title' => 'iTunes U',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_itunes-u:http://itunesu.mises.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_major-works-of-the-austrian-school:<front>
  $menu_links['menu-austrian-economics-sub-menu_major-works-of-the-austrian-school:<front>'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Major Works of the Austrian School',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_major-works-of-the-austrian-school:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_mises-wiki:http://wiki.mises.org/
  $menu_links['menu-austrian-economics-sub-menu_mises-wiki:http://wiki.mises.org/'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => 'http://wiki.mises.org/',
    'router_path' => '',
    'link_title' => 'Mises Wiki',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_mises-wiki:http://wiki.mises.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_online-texts:taxonomy/term/167
  $menu_links['menu-austrian-economics-sub-menu_online-texts:taxonomy/term/167'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
    'link_path' => 'taxonomy/term/167',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Online Texts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-austrian-economics-sub-menu_online-texts:taxonomy/term/167',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_qjae:taxonomy/term/151
  $menu_links['menu-austrian-economics-sub-menu_qjae:taxonomy/term/151'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_qjae:taxonomy/term/151',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_search-library:search
  $menu_links['menu-austrian-economics-sub-menu_search-library:search'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_search-library:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-austrian-economics-sub-menu_what-is-the-austrian-economics:node/776
  $menu_links['menu-austrian-economics-sub-menu_what-is-the-austrian-economics:node/776'] = array(
    'menu_name' => 'menu-austrian-economics-sub-menu',
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
      'identifier' => 'menu-austrian-economics-sub-menu_what-is-the-austrian-economics:node/776',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Audio & Video');
  t('Austrian School Topics');
  t('Blog');
  t('Books');
  t('Bookstore');
  t('Giants of the Austrian School');
  t('Major Works of the Austrian School');
  t('Mises Wiki');
  t('Online Texts');
  t('QJAE');
  t('Search Library');
  t('What is the Austrian Economics?');
  t('iTunes U');


  return $menu_links;
}
