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
    'label' => 'UNUSED Book / Digital Text Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_author_1',
      1 => 'field_body',
      2 => 'field_image',
      3 => 'field_video_review',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'UNUSED Book / Digital Text Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'UNUSED Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_mobi',
      3 => 'field_pdf',
      4 => 'field_link_to_external_listing_',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'UNUSED Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-book-digi-text-media field-group-tab',
        'description' => '<p>Attach files for download using the fields below. Multiple files can be attached for each type.</p>
<p>Enter the link to the related product in the <b>Link (to store)</b> field at the bottom.</p>',
      ),
      'formatter' => 'closed',
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
    'label' => 'UNUSED Tagging',
    'weight' => '3',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_austrian_school',
      2 => 'field_level',
      3 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'UNUSED Tagging',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tagging field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_book_digi_text_tags|node|book_digital_text|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|book_digital_text|full';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slideshow Wrapper',
    'weight' => '31',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Slideshow Wrapper',
      'instance_settings' => array(
        'classes' => 'image pull-left border-secondary',
        'element' => 'div',
        'attributes' => 'id="slideshow"',
      ),
    ),
  );
  $export['group_image|node|book_digital_text|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|book_digital_text|full';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '33',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_mobi',
      3 => 'field_pdf',
      4 => 'field_link_to_external_listing_',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'classes' => 'group-links list-group',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_links|node|book_digital_text|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|book_digital_text|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '32',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'tags_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => 'tags',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_tags|node|book_digital_text|full'] = $field_group;

  return $export;
}
