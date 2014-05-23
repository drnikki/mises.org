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
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <strong> <em> <u> <ul> <ol> <li> <blockquote> <a> <h2> <h3> <h4> <h5> <h6>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
