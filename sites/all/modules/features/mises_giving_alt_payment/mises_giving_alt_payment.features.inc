<?php
/**
 * @file
 * mises_giving_alt_payment.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function mises_giving_alt_payment_image_default_styles() {
  $styles = array();

  // Exported image style: causeview_snippet_medium.
  $styles['causeview_snippet_medium'] = array(
    'label' => 'Causeview Snippet Medium',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 265,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: causeview_snippet_small.
  $styles['causeview_snippet_small'] = array(
    'label' => 'Causeview Snippet Small',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 130,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: causeview_snippet_wide.
  $styles['causeview_snippet_wide'] = array(
    'label' => 'Causeview Snippet Wide',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
