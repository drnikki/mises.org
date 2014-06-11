<?php
/**
 * @file
 * mises_giving_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_giving_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_giving_story_images|node|giving_story|form';
  $field_group->group_name = 'group_giving_story_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_media_collection',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-giving-story-images field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_giving_story_images|node|giving_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_giving_story|node|giving_story|form';
  $field_group->group_name = 'group_giving_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Giving Story',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_campaign',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-giving-story field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_giving_story|node|giving_story|form'] = $field_group;

  return $export;
}
