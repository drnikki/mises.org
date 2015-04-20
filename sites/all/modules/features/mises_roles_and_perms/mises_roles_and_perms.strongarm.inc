<?php
/**
 * @file
 * mises_roles_and_perms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_roles_and_perms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'roleassign_roles';
  $strongarm->value = array(
    5 => '5',
    6 => '6',
    4 => '4',
    8 => '8',
    10 => '10',
    9 => '9',
    7 => 0,
    3 => 0,
  );
  $export['roleassign_roles'] = $strongarm;

  return $export;
}
