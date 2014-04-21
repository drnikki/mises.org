<?php
/**
 * @file
 * entity_box_box_with_image.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function entity_box_box_with_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
