<?php
/**
 * @file
 * mises_causeview_snippet.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_causeview_snippet_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cone_snippet|node|causeview_snippet|form';
  $field_group->group_name = 'group_cone_snippet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'causeview_snippet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Code Snippet',
    'weight' => '1',
    'children' => array(
      0 => 'field_code_snippet',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cone-snippet field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cone_snippet|node|causeview_snippet|form'] = $field_group;

  return $export;
}