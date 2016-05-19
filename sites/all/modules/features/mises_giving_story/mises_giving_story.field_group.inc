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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|giving_story|full';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_story';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => 'image pull-left',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => 'id="slideshow"',
      ),
    ),
  );
  $export['group_image|node|giving_story|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|giving_story|block_teaser';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'giving_story';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Teaser',
      'instance_settings' => array(
        'classes' => 'group-teaser panel-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_teaser|node|giving_story|block_teaser'] = $field_group;

  return $export;
}
