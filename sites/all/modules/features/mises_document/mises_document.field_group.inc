<?php
/**
 * @file
 * mises_document.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_document_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document_information|node|document|form';
  $field_group->group_name = 'group_document_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Document Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_document_media',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-document-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_document_information|node|document|form'] = $field_group;

  return $export;
}
