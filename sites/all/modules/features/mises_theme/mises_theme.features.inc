<?php
/**
 * @file
 * mises_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function mises_theme_image_default_styles() {
  $styles = array();

  // Exported image style: block_teaser.
  $styles['block_teaser'] = array(
    'label' => 'Block Teaser 270x160',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_icon_32x32.
  $styles['footer_icon_32x32'] = array(
    'label' => 'Footer Icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 32,
          'height' => 32,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_width.
  $styles['full_width'] = array(
    'label' => 'Full Width (width 693px)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 693,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: list_teaser.
  $styles['list_teaser'] = array(
    'label' => 'List Teaser 240x165',
    'effects' => array(
      2 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 240,
          'height' => 165,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 165,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: sidebar_horizontal.
  $styles['sidebar_horizontal'] = array(
    'label' => 'Sidebar Horizontal 105x99',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 105,
          'height' => 99,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_vertical.
  $styles['sidebar_vertical'] = array(
    'label' => 'Sidebar Vertical 105x120',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 105,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow.
  $styles['slideshow'] = array(
    'label' => 'Slideshow',
    'effects' => array(
      3 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 240,
          'height' => '',
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => 480,
          'upscale' => 0,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: social_media_1200_x_1200.
  $styles['social_media_1200_x_1200'] = array(
    'label' => 'Social Media 1200 x 1200',
    'effects' => array(
      1 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_1200_x_628.
  $styles['social_media_1200_x_628'] = array(
    'label' => 'Social Media 1200 x 628',
    'effects' => array(
      2 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 628,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_800_x_1200.
  $styles['social_media_800_x_1200'] = array(
    'label' => 'Social Media 800 x 1200',
    'effects' => array(),
  );

  // Exported image style: vertical_teaser.
  $styles['vertical_teaser'] = array(
    'label' => 'Vertical Teaser 210 x 240',
    'effects' => array(
      4 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 210,
          'height' => 240,
          'anchor' => 'center-center',
          'disable_scale' => 0,
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'black',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => -10,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 240,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}
