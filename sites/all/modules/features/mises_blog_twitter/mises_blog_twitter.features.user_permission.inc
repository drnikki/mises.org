<?php
/**
 * @file
 * mises_blog_twitter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mises_blog_twitter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add authenticated twitter accounts'.
  $permissions['add authenticated twitter accounts'] = array(
    'name' => 'add authenticated twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'add twitter accounts'.
  $permissions['add twitter accounts'] = array(
    'name' => 'add twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter'.
  $permissions['administer twitter'] = array(
    'name' => 'administer twitter',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'administer twitter accounts'.
  $permissions['administer twitter accounts'] = array(
    'name' => 'administer twitter accounts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'twitter',
  );

  // Exported permission: 'post to twitter'.
  $permissions['post to twitter'] = array(
    'name' => 'post to twitter',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter_post',
  );

  // Exported permission: 'post to twitter with global account'.
  $permissions['post to twitter with global account'] = array(
    'name' => 'post to twitter with global account',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'twitter_post',
  );

  return $permissions;
}
