<?php
/**
 * @file
 * mises_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mises_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format simplified'.
  $permissions['use text format simplified'] = array(
    'name' => 'use text format simplified',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format straight_html'.
  $permissions['use text format straight_html'] = array(
    'name' => 'use text format straight_html',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
