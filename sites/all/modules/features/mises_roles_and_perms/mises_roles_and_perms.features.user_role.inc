<?php
/**
 * @file
 * mises_roles_and_perms.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mises_roles_and_perms_user_default_roles() {
  $roles = array();

  // Exported role: Blog Author.
  $roles['Blog Author'] = array(
    'name' => 'Blog Author',
    'weight' => 6,
  );

  // Exported role: Content Creator.
  $roles['Content Creator'] = array(
    'name' => 'Content Creator',
    'weight' => 5,
  );

  // Exported role: Drupal Developer.
  $roles['Drupal Developer'] = array(
    'name' => 'Drupal Developer',
    'weight' => 2,
  );

  // Exported role: Senior Editor.
  $roles['Senior Editor'] = array(
    'name' => 'Senior Editor',
    'weight' => 4,
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 3,
  );

  return $roles;
}
