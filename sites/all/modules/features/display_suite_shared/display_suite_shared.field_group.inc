<?php
/**
 * @file
 * display_suite_shared.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function display_suite_shared_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|course|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Autho',
    'weight' => '2',
    'children' => array(
      0 => 'dynamic_field_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Autho',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_author|node|course|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|person_profile|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '2',
    'children' => array(
      0 => 'dynamic_field_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_author|node|person_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|product|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '3',
    'children' => array(
      0 => 'dynamic_field_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_author|node|product|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|working_papers|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'working_papers';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '1',
    'children' => array(
      0 => 'field_link_to_paper_on_ssrn_site',
      1 => 'author',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_author|node|working_papers|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_heading|node|course|sidebar_teaser';
  $field_group->group_name = 'group_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'sidebar_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'course_title_linked',
      1 => 'contextual_block_title_with_icon',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'panel-heading double',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_heading|node|course|sidebar_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_heading|node|library_item|sidebar_teaser';
  $field_group->group_name = 'group_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'sidebar_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'contextual_block_title_with_icon',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_heading|node|library_item|sidebar_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sharing|node|event|full';
  $field_group->group_name = 'group_sharing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sharing',
    'weight' => '36',
    'children' => array(),
    'format_type' => 'html5',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'wrapper' => '',
        'classes' => 'group-sharing field-group-html5',
      ),
    ),
  );
  $export['group_sharing|node|event|full'] = $field_group;

  return $export;
}
