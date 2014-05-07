<?php
/**
 * @file
 * mises_institute_fellowship.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_institute_fellowship_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_information|node|institute_fellowship|form';
  $field_group->group_name = 'group_award_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'institute_fellowship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Award Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_recipients',
      1 => 'field_award_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-award-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_award_information|node|institute_fellowship|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fellowship_information|node|institute_fellowship|form';
  $field_group->group_name = 'group_fellowship_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'institute_fellowship';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fellowship Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fellowship-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_fellowship_information|node|institute_fellowship|form'] = $field_group;

  return $export;
}
