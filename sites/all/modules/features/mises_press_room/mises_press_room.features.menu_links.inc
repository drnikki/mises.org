<?php
/**
 * @file
 * mises_press_room.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mises_press_room_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-press-room_browse-experts:<front>
  $menu_links['menu-press-room_browse-experts:<front>'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Browse Experts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_browse-experts:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_browse-topics:search
  $menu_links['menu-press-room_browse-topics:search'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Browse Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_browse-topics:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_find-an-expert-in-austrian-economics:<front>
  $menu_links['menu-press-room_find-an-expert-in-austrian-economics:<front>'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Find an Expert in Austrian Economics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_find-an-expert-in-austrian-economics:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_mises-view:taxonomy/term/185
  $menu_links['menu-press-room_mises-view:taxonomy/term/185'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => 'taxonomy/term/185',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Mises View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_mises-view:taxonomy/term/185',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_past-interviews:taxonomy/term/172
  $menu_links['menu-press-room_past-interviews:taxonomy/term/172'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => 'taxonomy/term/172',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Past Interviews',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_past-interviews:taxonomy/term/172',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_pre-recorded-topics:search
  $menu_links['menu-press-room_pre-recorded-topics:search'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Pre-recorded Topics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_pre-recorded-topics:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-press-room_request-a-speaker--media-inquiry:eform/submit/contact-us
  $menu_links['menu-press-room_request-a-speaker--media-inquiry:eform/submit/contact-us'] = array(
    'menu_name' => 'menu-press-room',
    'link_path' => 'eform/submit/contact-us',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Request a Speaker / Media Inquiry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-press-room_request-a-speaker--media-inquiry:eform/submit/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Experts');
  t('Browse Topics');
  t('Find an Expert in Austrian Economics');
  t('Mises View');
  t('Past Interviews');
  t('Pre-recorded Topics');
  t('Request a Speaker / Media Inquiry');


  return $menu_links;
}
