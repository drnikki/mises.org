<?php
/**
 * @file
 * mises_person_profile_node_context.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mises_person_profile_node_context_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-major_works_signif_contrib'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'major_works_signif_contrib',
    'module' => 'quicktabs',
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
