<?php
/**
 * @file
 * legacy_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function legacy_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy_book_info|node|legacy_book|form';
  $field_group->group_name = 'group_legacy_book_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legacy_book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy Book Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_author_1',
      1 => 'field_body',
      2 => 'field_citation',
      3 => 'field_image',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legacy-book-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_legacy_book_info|node|legacy_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy_book_media|node|legacy_book|form';
  $field_group->group_name = 'group_legacy_book_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legacy_book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_media',
      3 => 'field_mobi',
      4 => 'field_pdf',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legacy-book-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_legacy_book_media|node|legacy_book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy_book_tagging|node|legacy_book|form';
  $field_group->group_name = 'group_legacy_book_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'legacy_book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '2',
    'children' => array(
      0 => 'field_level',
      1 => 'field_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legacy-book-tagging field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_legacy_book_tagging|node|legacy_book|form'] = $field_group;

  return $export;
}
