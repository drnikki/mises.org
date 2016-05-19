<?php
/**
 * @file
 * anti_spam.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function anti_spam_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'User Administrator' => 'User Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  return $permissions;
}
