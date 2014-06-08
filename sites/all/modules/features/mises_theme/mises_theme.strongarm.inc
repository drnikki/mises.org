<?php
/**
 * @file
 * mises_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'menu-about-the-mises-institute' => 'menu-about-the-mises-institute',
    'menu-austrian-economics-sub-menu' => 'menu-austrian-economics-sub-menu',
    'menu-austrian-school' => 'menu-austrian-school',
    'menu-browse-library' => 'menu-browse-library',
    'devel' => 'devel',
    'menu-event-menu' => 'menu-event-menu',
    'features' => 'features',
    'menu-new-to-mises' => 'menu-new-to-mises',
    'menu-homeschool-sub-menu' => 'menu-homeschool-sub-menu',
    'menu-library-sub-menu' => 'menu-library-sub-menu',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
    'menu-mises-social-icons' => 'menu-mises-social-icons',
    'menu-topics' => 'menu-topics',
    'user-menu' => 'user-menu',
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_image_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'list_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'single_image' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_author' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_image_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_media_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'list_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_author' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'single_image' => array(
        'custom_settings' => FALSE,
      ),
      'small_player' => array(
        'custom_settings' => TRUE,
      ),
      'wide_player' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_media_collection'] = $strongarm;

  return $export;
}
