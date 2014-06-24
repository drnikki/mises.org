<?php
/**
 * @file
 * giving.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function giving_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function giving_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function giving_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: areas_to_support
  $nodequeues['areas_to_support'] = array(
    'name' => 'areas_to_support',
    'title' => 'Areas to Support',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to Support Areas list',
    'link_remove' => 'Remove from Support Areas list',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'campaign_',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: giving_feature_blocks
  $nodequeues['giving_feature_blocks'] = array(
    'name' => 'giving_feature_blocks',
    'title' => 'Guide to Giving Feature Blocks',
    'subqueue_title' => '',
    'size' => 3,
    'link' => 'Feature on Giving Homepage',
    'link_remove' => 'Remove from Giving Homepage',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'giving_feature_block',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: membership_levels
  $nodequeues['membership_levels'] = array(
    'name' => 'membership_levels',
    'title' => 'Membership Levels',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to Membership Levels list',
    'link_remove' => 'Remove from Membership Levels list',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'membership_level',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function giving_image_default_styles() {
  $styles = array();

  // Exported image style: giving_feature_icon.
  $styles['giving_feature_icon'] = array(
    'name' => 'giving_feature_icon',
    'label' => 'Giving Feature Icon',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 64,
          'height' => 64,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: giving_full-width.
  $styles['giving_full-width'] = array(
    'name' => 'giving_full-width',
    'label' => 'Giving Full-Width 753x283',
    'effects' => array(
      12 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 753,
          'height' => 283,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: giving_header.
  $styles['giving_header'] = array(
    'name' => 'giving_header',
    'label' => 'Giving Header 753x260',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 753,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: giving_story.
  $styles['giving_story'] = array(
    'name' => 'giving_story',
    'label' => 'Giving Story 350x220',
    'effects' => array(
      13 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function giving_node_info() {
  $items = array(
    'giving_feature_block' => array(
      'name' => t('Giving Feature Block'),
      'base' => 'node_content',
      'description' => t('Blocks featured at the top of the Giving front-page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'giving_page' => array(
      'name' => t('Giving Page'),
      'base' => 'node_content',
      'description' => t('A basic page for the Giving micro-site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'membership_level' => array(
      'name' => t('Membership Level'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function giving_weight_features_default_settings() {
  $settings = array();

  $settings['giving_feature_block'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['giving_page'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  $settings['giving_story'] = array(
    'enabled' => 0,
    'range' => 20,
    'menu_weight' => 0,
    'default' => 0,
    'sync_translations' => 0,
  );

  return $settings;
}
