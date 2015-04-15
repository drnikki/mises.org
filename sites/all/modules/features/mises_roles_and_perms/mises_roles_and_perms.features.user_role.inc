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
    'weight' => 2,
  );

  // Exported role: Content Creator.
  $roles['Content Creator'] = array(
    'name' => 'Content Creator',
    'weight' => 3,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 4,
  );

  // Exported role: Drupal Developer.
  $roles['Drupal Developer'] = array(
    'name' => 'Drupal Developer',
    'weight' => 8,
  );

  // Exported role: Senior Editor.
  $roles['Senior Editor'] = array(
    'name' => 'Senior Editor',
    'weight' => 5,
  );

  // Exported role: Site Administrator.
  $roles['Site Administrator'] = array(
    'name' => 'Site Administrator',
    'weight' => 7,
  );

  // Exported role: User Administrator.
  $roles['User Administrator'] = array(
    'name' => 'User Administrator',
    'weight' => 6,
  );

  return $roles;
}
