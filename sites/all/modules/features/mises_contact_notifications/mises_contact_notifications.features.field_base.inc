<?php
/**
 * @file
 * mises_contact_notifications.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_contact_notifications_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_contact_email_address'
  $field_bases['field_contact_email_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_email_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  return $field_bases;
}
