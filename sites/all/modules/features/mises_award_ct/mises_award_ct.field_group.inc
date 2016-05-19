<?php
/**
 * @file
 * mises_award_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_award_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_information|node|award|form';
  $field_group->group_name = 'group_award_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Award Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_year',
      1 => 'field_award_type',
      2 => 'title',
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
  $export['group_award_information|node|award|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_recipients|node|award|form';
  $field_group->group_name = 'group_award_recipients';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'award';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Award Recipients',
    'weight' => '1',
    'children' => array(
      0 => 'field_recipients',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-award-recipients field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_award_recipients|node|award|form'] = $field_group;

  return $export;
}
