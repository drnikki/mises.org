<?php
/**
 * @file
 * mises_contact_notifications.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mises_contact_notifications_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'reason_for_contact-reason_for_contact-field_contact_email_address'
  $field_instances['reason_for_contact-reason_for_contact-field_contact_email_address'] = array(
    'bundle' => 'reason_for_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'reason_for_contact',
    'field_name' => 'field_contact_email_address',
    'label' => 'Email Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Email Address');

  return $field_instances;
}
