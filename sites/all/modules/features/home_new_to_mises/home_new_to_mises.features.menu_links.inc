<?php
/**
 * @file
 * home_new_to_mises.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function home_new_to_mises_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-new-to-mises_spani-amspan-a-homeschoooler:taxonomy/term/51
  $menu_links['menu-new-to-mises_spani-amspan-a-homeschoooler:taxonomy/term/51'] = array(
    'menu_name' => 'menu-new-to-mises',
    'link_path' => 'taxonomy/term/51',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '<span>I am</span> a Homeschoooler',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-new-to-mises_spani-amspan-a-homeschoooler:taxonomy/term/51',
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-new-to-mises_spani-amspan-a-journalist:taxonomy/term/17
  $menu_links['menu-new-to-mises_spani-amspan-a-journalist:taxonomy/term/17'] = array(
    'menu_name' => 'menu-new-to-mises',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '<span>I am</span> a Journalist',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-new-to-mises_spani-amspan-a-journalist:taxonomy/term/17',
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-new-to-mises_spani-amspan-a-student:search
  $menu_links['menu-new-to-mises_spani-amspan-a-student:search'] = array(
    'menu_name' => 'menu-new-to-mises',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => '<span>I am</span> a Student',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-new-to-mises_spani-amspan-a-student:search',
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-new-to-mises_spani-amspan-an-economistresearcher:taxonomy/term/18
  $menu_links['menu-new-to-mises_spani-amspan-an-economistresearcher:taxonomy/term/18'] = array(
    'menu_name' => 'menu-new-to-mises',
    'link_path' => 'taxonomy/term/18',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '<span>I am</span> an Economist/Researcher',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-new-to-mises_spani-amspan-an-economistresearcher:taxonomy/term/18',
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-new-to-mises_spani-amspan-new-to-austrian-economics:<front>
  $menu_links['menu-new-to-mises_spani-amspan-new-to-austrian-economics:<front>'] = array(
    'menu_name' => 'menu-new-to-mises',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '<span>I am</span> new to Austrian Economics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'identifier' => 'menu-new-to-mises_spani-amspan-new-to-austrian-economics:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<span>I am</span> a Homeschoooler');
  t('<span>I am</span> a Journalist');
  t('<span>I am</span> a Student');
  t('<span>I am</span> an Economist/Researcher');
  t('<span>I am</span> new to Austrian Economics');


  return $menu_links;
}
