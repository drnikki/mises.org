<?php
/**
 * @file
 * mises_book_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_book_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_content|node|book_digital_text|form';
  $field_group->group_name = 'group_book_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book Content',
    'weight' => '3',
    'children' => array(
      0 => 'field_book_chapter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_book_content|node|book_digital_text|form'] = $field_group;

  return $export;
}
