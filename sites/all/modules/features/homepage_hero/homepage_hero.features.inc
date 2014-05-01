<?php
/**
 * @file
 * homepage_hero.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_hero_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_hero_image_default_styles() {
  $styles = array();

  // Exported image style: featured.
  $styles['featured'] = array(
    'name' => 'featured',
    'label' => 'Featured (750x360)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 360,
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
function homepage_hero_node_info() {
  $items = array(
    'homepage_hero' => array(
      'name' => t('Homepage Hero'),
      'base' => 'node_content',
      'description' => t('Blocks for display at the top of the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
