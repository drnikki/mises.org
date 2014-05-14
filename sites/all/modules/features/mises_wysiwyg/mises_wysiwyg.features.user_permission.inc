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
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
