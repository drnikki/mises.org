<?php
/**
 * @file
 * mises_person_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_person_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|person_profile|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_image_collection',
      2 => 'field_featured_content',
      3 => 'field_profile_type',
      4 => 'field_twitter',
      5 => 'field_facebook',
      6 => 'field_contact_email',
      7 => 'title',
      8 => 'group_expertise',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|person_profile|form';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_bio_summary',
      2 => 'field_contributions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bio field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bio|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expertise|node|person_profile|form';
  $field_group->group_name = 'group_expertise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'Areas of Expertise',
    'weight' => '9',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_austrian_school',
      2 => 'field_austrian_school_of_economi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-expertise field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_expertise|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_works|node|person_profile|form';
  $field_group->group_name = 'group_works';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Works',
    'weight' => '2',
    'children' => array(
      0 => 'field_major_works',
      1 => 'field_published_in',
      2 => 'field_quote',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-works field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_works|node|person_profile|form'] = $field_group;

  return $export;
}
