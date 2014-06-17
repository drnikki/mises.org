<?php
/**
 * @file
 * about_mises.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function about_mises_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-about-mises-sub-menu_add-board-and-finance:<front>
  $menu_links['menu-about-mises-sub-menu_add-board-and-finance:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Add Board and Finance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_add-board-and-finance:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_contact-us:eform/submit/contact-us
  $menu_links['menu-about-mises-sub-menu_contact-us:eform/submit/contact-us'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => 'eform/submit/contact-us',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_contact-us:eform/submit/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 13,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_faculty-and-staff:<front>
  $menu_links['menu-about-mises-sub-menu_faculty-and-staff:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Faculty and Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_faculty-and-staff:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 7,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_fellowships:<front>
  $menu_links['menu-about-mises-sub-menu_fellowships:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fellowships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_fellowships:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_independent-research-visits:<front>
  $menu_links['menu-about-mises-sub-menu_independent-research-visits:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Independent Research Visits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_independent-research-visits:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 5,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_institute-events:<front>
  $menu_links['menu-about-mises-sub-menu_institute-events:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Institute Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_institute-events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_institute-publications:<front>
  $menu_links['menu-about-mises-sub-menu_institute-publications:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Institute Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_institute-publications:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_mapdirections-to-institute:<front>
  $menu_links['menu-about-mises-sub-menu_mapdirections-to-institute:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Map/Directions to Institute',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_mapdirections-to-institute:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_membership:<front>
  $menu_links['menu-about-mises-sub-menu_membership:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Membership',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_membership:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 11,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_photo-gallery:<front>
  $menu_links['menu-about-mises-sub-menu_photo-gallery:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Photo Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_photo-gallery:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_press-room:node/16717
  $menu_links['menu-about-mises-sub-menu_press-room:node/16717'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => 'node/16717',
    'router_path' => 'node/%',
    'link_title' => 'Press Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_press-room:node/16717',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_virtual-tour:<front>
  $menu_links['menu-about-mises-sub-menu_virtual-tour:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Virtual Tour',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_virtual-tour:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
  );
  // Exported menu link: menu-about-mises-sub-menu_what-is-the-mises-institute:<front>
  $menu_links['menu-about-mises-sub-menu_what-is-the-mises-institute:<front>'] = array(
    'menu_name' => 'menu-about-mises-sub-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'What is the Mises Institute?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-about-mises-sub-menu_what-is-the-mises-institute:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Board and Finance');
  t('Contact Us');
  t('Faculty and Staff');
  t('Fellowships');
  t('Independent Research Visits');
  t('Institute Events');
  t('Institute Publications');
  t('Map/Directions to Institute');
  t('Membership');
  t('Photo Gallery');
  t('Press Room');
  t('Virtual Tour');
  t('What is the Mises Institute?');


  return $menu_links;
}
