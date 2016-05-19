<?php
/**
 * @file
 * mises_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function mises_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Simplified.
  $formats['simplified'] = array(
    'format' => 'simplified',
    'name' => 'Simplified',
    'cache' => 1,
    'status' => 1,
    'weight' => -7,
    'filters' => array(
      'filter_footnotes' => array(
        'weight' => -20,
        'status' => 1,
        'settings' => array(
          'footnotes_collapse' => 0,
        ),
      ),
    ),
  );

  // Exported format: Straight HTML.
  $formats['straight_html'] = array(
    'format' => 'straight_html',
    'name' => 'Straight HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
