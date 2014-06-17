<?php
/**
 * @file
 * resources_for_economist.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function resources_for_economist_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-economist-resources-sub-men_being-a-professional-austrian-economist:<front>
  $menu_links['menu-economist-resources-sub-men_being-a-professional-austrian-economist:<front>'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Being a Professional Austrian Economist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_being-a-professional-austrian-economist:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_blog:search/blog
  $menu_links['menu-economist-resources-sub-men_blog:search/blog'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'search/blog',
    'router_path' => 'search',
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
      'identifier' => 'menu-economist-resources-sub-men_blog:search/blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_fellowships:search/fellowships
  $menu_links['menu-economist-resources-sub-men_fellowships:search/fellowships'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'search/fellowships',
    'router_path' => 'search',
    'link_title' => 'Fellowships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_fellowships:search/fellowships',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_independent-research:search/independent-research
  $menu_links['menu-economist-resources-sub-men_independent-research:search/independent-research'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'search/independent-research',
    'router_path' => 'search',
    'link_title' => 'Independent Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_independent-research:search/independent-research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_job-postings:search/job-postings
  $menu_links['menu-economist-resources-sub-men_job-postings:search/job-postings'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'search/job-postings',
    'router_path' => 'search',
    'link_title' => 'Job Postings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_job-postings:search/job-postings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_qjae:taxonomy/term/151
  $menu_links['menu-economist-resources-sub-men_qjae:taxonomy/term/151'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
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
      'identifier' => 'menu-economist-resources-sub-men_qjae:taxonomy/term/151',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_upcoming-events:events
  $menu_links['menu-economist-resources-sub-men_upcoming-events:events'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_upcoming-events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-economist-resources-sub-men_working-papers:search/working-papers
  $menu_links['menu-economist-resources-sub-men_working-papers:search/working-papers'] = array(
    'menu_name' => 'menu-economist-resources-sub-men',
    'link_path' => 'search/working-papers',
    'router_path' => 'search',
    'link_title' => 'Working Papers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-economist-resources-sub-men_working-papers:search/working-papers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Being a Professional Austrian Economist');
  t('Blog');
  t('Fellowships');
  t('Independent Research');
  t('Job Postings');
  t('QJAE');
  t('Upcoming Events');
  t('Working Papers');


  return $menu_links;
}
