<?php
/**
 * @file
 * mises_mailchimp_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mises_mailchimp_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mises_utility-mailchimp_custom'] = array(
    'cache' => 1,
    'css_class' => 'panel border-secondary article padding-lg',
    'custom' => 0,
    'delta' => 'mailchimp_custom',
    'module' => 'mises_utility',
    'node_types' => array(),
    'pages' => 'about-mises',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bootsass',
        'weight' => 98,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['mises_utility-mailchimp_page_description'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mailchimp_page_description',
    'module' => 'mises_utility',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
