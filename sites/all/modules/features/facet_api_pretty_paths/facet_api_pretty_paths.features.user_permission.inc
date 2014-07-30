<?php
/**
 * @file
 * facet_api_pretty_paths.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function facet_api_pretty_paths_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer facetapi pretty paths'.
  $permissions['administer facetapi pretty paths'] = array(
    'name' => 'administer facetapi pretty paths',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi_pretty_paths',
  );

  return $permissions;
}
