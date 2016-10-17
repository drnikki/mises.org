<?php
/**
 * @file
 * mises_person_profile.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function mises_person_profile_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Email Validation';
  $rule->name = 'email_validation';
  $rule->field_name = 'field_contact_email';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'person_profile';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] field is not a properly formatted email address: [value]';
  $export['email_validation'] = $rule;

  return $export;
}
