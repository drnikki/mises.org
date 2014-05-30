<?php
/**
 * @file
 * mises_scholarship.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_scholarship_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scholarship_information|node|scholarship_|form';
  $field_group->group_name = 'group_scholarship_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scholarship_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Scholarship Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image_s_',
      2 => 'field_event',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_scholarship_information|node|scholarship_|form'] = $field_group;

  return $export;
}
