<?php
/**
 * @file
 * mises_giving_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_giving_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mises_giving_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: giving_feature_icon.
  $styles['giving_feature_icon'] = array(
    'label' => 'Giving Feature Icon',
    'effects' => array(
      3 => array(
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
    'label' => 'Giving Full-Width 753x283',
    'effects' => array(
      12 => array(
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
    'label' => 'Giving Header 753x260',
    'effects' => array(
      2 => array(
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
    'label' => 'Giving Story 350x220',
    'effects' => array(
      13 => array(
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
function mises_giving_content_types_node_info() {
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
  drupal_alter('node_info', $items);
  return $items;
}
