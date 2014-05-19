<?php
/**
 * @file
 * social_media_hub.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function social_media_hub_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|social_media|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'social_media';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '0',
    'children' => array(
      0 => 'field_main_pages',
      1 => 'field_platform_icon',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_media|node|social_media|form'] = $field_group;

  return $export;
}
