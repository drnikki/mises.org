<?php
/**
 * @file
 * mises_giving_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_giving_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
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
  return $items;
}
