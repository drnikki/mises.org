<?php
/**
 * @file
 * mises_book_digital_text.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_book_digital_text_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_digi_text_info|node|book_digital_text|form';
  $field_group->group_name = 'group_book_digi_text_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book / Digital Text Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_author_1',
      1 => 'field_body',
      2 => 'field_citation',
      3 => 'field_image',
      4 => 'field_video_review',
      5 => 'title',
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
  $export['group_book_digi_text_info|node|book_digital_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_digi_text_media|node|book_digital_text|form';
  $field_group->group_name = 'group_book_digi_text_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_mobi',
      3 => 'field_pdf',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-digi-text-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_book_digi_text_media|node|book_digital_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_digi_text_tags|node|book_digital_text|form';
  $field_group->group_name = 'group_book_digi_text_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '2',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_austrian_school',
      2 => 'field_level',
      3 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tagging',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tagging field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_book_digi_text_tags|node|book_digital_text|form'] = $field_group;

  return $export;
}
