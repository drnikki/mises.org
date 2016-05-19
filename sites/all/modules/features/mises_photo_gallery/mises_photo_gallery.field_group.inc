<?php
/**
 * @file
 * mises_photo_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_photo_gallery_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_images|node|photo_gallery|form';
  $field_group->group_name = 'group_gallery_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_s_',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_images|node|photo_gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_information|node|photo_gallery|form';
  $field_group->group_name = 'group_gallery_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'photo_gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo Gallery Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gallery-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gallery_information|node|photo_gallery|form'] = $field_group;

  return $export;
}
