<?php
/**
 * @file
 * mises_google_custom_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mises_google_custom_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'search Google CSE'.
  $permissions['search Google CSE'] = array(
    'name' => 'search Google CSE',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'google_cse',
  );

  return $permissions;
}
