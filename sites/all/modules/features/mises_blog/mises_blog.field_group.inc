<?php
/**
 * @file
 * mises_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_addit_blog_information|node|blog|form';
  $field_group->group_name = 'group_addit_blog_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_austrian_school_of_economi',
      1 => 'field_current_trends',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-addit-blog-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_addit_blog_information|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_information|node|blog|form';
  $field_group->group_name = 'group_blog_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_information|node|blog|form'] = $field_group;

  return $export;
}
