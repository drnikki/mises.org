<?php
/**
 * @file
 * mises_contact_notifications.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_contact_notifications_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_entityform_contact_us_pattern';
  $strongarm->value = 'contact/submission/[entityform:entityform-id]';
  $export['pathauto_entityform_contact_us_pattern'] = $strongarm;

  return $export;
}
