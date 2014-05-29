<?php
/**
 * @file
 * mises_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mises_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-event-menu_upcoming-events:events
  $menu_links['menu-event-menu_upcoming-events:events'] = array(
    'menu_name' => 'menu-event-menu',
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
      'identifier' => 'menu-event-menu_upcoming-events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-event-menu_view-event-photo-gallery:<front>
  $menu_links['menu-event-menu_view-event-photo-gallery:<front>'] = array(
    'menu_name' => 'menu-event-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'View Event Photo Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-event-menu_view-event-photo-gallery:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-event-menu_view-past-events:<front>
  $menu_links['menu-event-menu_view-past-events:<front>'] = array(
    'menu_name' => 'menu-event-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'View past events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-event-menu_view-past-events:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-event-menu_visit-itunes-u:http://deimos.apple.com/WebObjects/Core.woa/Browse/mises.org
  $menu_links['menu-event-menu_visit-itunes-u:http://deimos.apple.com/WebObjects/Core.woa/Browse/mises.org'] = array(
    'menu_name' => 'menu-event-menu',
    'link_path' => 'http://deimos.apple.com/WebObjects/Core.woa/Browse/mises.org',
    'router_path' => '',
    'link_title' => 'Visit iTunes U',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-event-menu_visit-itunes-u:http://deimos.apple.com/WebObjects/Core.woa/Browse/mises.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-event-menu_watch-events-live:<front>
  $menu_links['menu-event-menu_watch-events-live:<front>'] = array(
    'menu_name' => 'menu-event-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Watch Events Live',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-event-menu_watch-events-live:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Upcoming Events');
  t('View Event Photo Gallery');
  t('View past events');
  t('Visit iTunes U');
  t('Watch Events Live');


  return $menu_links;
}
