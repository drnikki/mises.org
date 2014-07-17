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
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_audio--video:search/audio-video
  $menu_links['menu-library-sub-menu_audio--video:search/audio-video'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/audio-video',
    'router_path' => 'search',
    'link_title' => 'Audio & Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_audio--video:search/audio-video',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_author:search/author
  $menu_links['menu-library-sub-menu_author:search/author'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/author',
    'router_path' => 'search',
    'link_title' => 'Author',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_author:search/author',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
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
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_blog:<front>
  $menu_links['menu-library-sub-menu_blog:<front>'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_blog:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
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
    'weight' => 6,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_bookstore:http://store.mises.org
  $menu_links['menu-library-sub-menu_bookstore:http://store.mises.org'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'http://store.mises.org',
    'router_path' => '',
    'link_title' => 'Bookstore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_bookstore:http://store.mises.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 18,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_current-topics:search/topics
  $menu_links['menu-library-sub-menu_current-topics:search/topics'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/topics',
    'router_path' => 'search',
    'link_title' => 'Current Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_current-topics:search/topics',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_homeschool-resources:node/818
  $menu_links['menu-library-sub-menu_homeschool-resources:node/818'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'node/818',
    'router_path' => 'node/%',
    'link_title' => 'Homeschool Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_homeschool-resources:node/818',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_interviews:search/interviews
  $menu_links['menu-library-sub-menu_interviews:search/interviews'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/interviews',
    'router_path' => 'search',
    'link_title' => 'Interviews',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_interviews:search/interviews',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 11,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_itunes-u:http://itunesu.mises.org/
  $menu_links['menu-library-sub-menu_itunes-u:http://itunesu.mises.org/'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'http://itunesu.mises.org/',
    'router_path' => '',
    'link_title' => 'iTunes U',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_itunes-u:http://itunesu.mises.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 21,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_journals--periodicals:search/journals-periodicals
  $menu_links['menu-library-sub-menu_journals--periodicals:search/journals-periodicals'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/journals-periodicals',
    'router_path' => 'search',
    'link_title' => 'Journals & Periodicals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_journals--periodicals:search/journals-periodicals',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 15,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_lectures:search/lectures
  $menu_links['menu-library-sub-menu_lectures:search/lectures'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/lectures',
    'router_path' => 'search',
    'link_title' => 'Lectures',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_lectures:search/lectures',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_mises-view:search/mises-view
  $menu_links['menu-library-sub-menu_mises-view:search/mises-view'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/mises-view',
    'router_path' => 'search',
    'link_title' => 'Mises View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_mises-view:search/mises-view',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_mises-wiki:http://wiki.mises.org
  $menu_links['menu-library-sub-menu_mises-wiki:http://wiki.mises.org'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'http://wiki.mises.org',
    'router_path' => '',
    'link_title' => 'Mises Wiki',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_mises-wiki:http://wiki.mises.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 19,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_online-texts:<front>
  $menu_links['menu-library-sub-menu_online-texts:<front>'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Online Texts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_online-texts:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
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
    'weight' => 14,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_quotes:search/quotes
  $menu_links['menu-library-sub-menu_quotes:search/quotes'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/quotes',
    'router_path' => 'search',
    'link_title' => 'Quotes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_quotes:search/quotes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 13,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_resources-for-the-economist:node/16721
  $menu_links['menu-library-sub-menu_resources-for-the-economist:node/16721'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'node/16721',
    'router_path' => 'node/%',
    'link_title' => 'Resources for the Economist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_resources-for-the-economist:node/16721',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 17,
    'customized' => 1,
  );
  // Exported menu link: menu-library-sub-menu_working-papers:search/working-papers
  $menu_links['menu-library-sub-menu_working-papers:search/working-papers'] = array(
    'menu_name' => 'menu-library-sub-menu',
    'link_path' => 'search/working-papers',
    'router_path' => 'search',
    'link_title' => 'Working Papers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-sub-menu_working-papers:search/working-papers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 16,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Article');
  t('Audio & Video');
  t('Author');
  t('Biography');
  t('Blog');
  t('Books');
  t('Bookstore');
  t('Current Topics');
  t('Homeschool Resources');
  t('Interviews');
  t('Journals & Periodicals');
  t('Lectures');
  t('Mises View');
  t('Mises Wiki');
  t('Online Texts');
  t('QJAE');
  t('Quotes');
  t('Resources for the Economist');
  t('Working Papers');
  t('iTunes U');


  return $menu_links;
}
