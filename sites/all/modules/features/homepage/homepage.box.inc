<?php
/**
 * @file
 * homepage.box.inc
 */

/**
 * Implements hook_default_box().
 */
function homepage_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'home_new';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'New to Mises?';
  $box->options = array(
    'body' => array(
      'value' => '<h3>New to Mises Institute?',
      'format' => 'full_html',
    ),
    'additional_classes' => 'contrast reverse',
  );
  $export['home_new'] = $box;

  return $export;
}
