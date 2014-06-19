<?php
/**
 * @file
 * mises_course.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_course_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|course|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '1',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'field_featured_content',
      3 => 'field_audience',
      4 => 'field_level',
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
  $export['group_additional_information|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_information|node|course|form';
  $field_group->group_name = 'group_course_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image_collection',
      2 => 'field_link_to_external_listing_',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_information|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_body|node|course|sidebar_teaser';
  $field_group->group_name = 'group_panel_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'sidebar_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_link_to_external_listing_',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'classes' => 'panel-body padding-lg',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel_body|node|course|sidebar_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|course|block_teaser';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'course_title_linked',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Teaser',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_teaser|node|course|block_teaser'] = $field_group;

  return $export;
}
