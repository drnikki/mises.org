<?php
/**
 * @file
 * social_media_hub.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function social_media_hub_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function social_media_hub_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function social_media_hub_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: social_media_menu
  $nodequeues['social_media_menu'] = array(
    'name' => 'social_media_menu',
    'title' => 'Social Media Menu',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'insert_at_front' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'social_media',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function social_media_hub_image_default_styles() {
  $styles = array();

  // Exported image style: stay_connected_global.
  $styles['stay_connected_global'] = array(
    'label' => 'Stay Connected Global',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 45,
          'height' => 45,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: stay_connected_sidebar.
  $styles['stay_connected_sidebar'] = array(
    'label' => 'Stay Connected Sidebar',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 23,
          'height' => 23,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function social_media_hub_node_info() {
  $items = array(
    'social_media' => array(
      'name' => t('Social Media'),
      'base' => 'node_content',
      'description' => t('Social media platform content. One node per platform.'),
      'has_title' => '1',
      'title_label' => t('Platform Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function social_media_hub_weight_features_default_settings() {
  $settings = array();

  $settings['social_media'] = array(
    'enabled' => 1,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
