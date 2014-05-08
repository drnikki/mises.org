<?php
/**
 * @file
 * mises_job_posting.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_job_posting_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_job_information|node|job_posting_|form';
  $field_group->group_name = 'group_additional_job_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_posting_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_contact_information',
      1 => 'field_link_to_external_listing_',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-job-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_job_information|node|job_posting_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_date_information|node|job_posting_|form';
  $field_group->group_name = 'group_job_date_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_posting_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Date Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_closing_date',
      1 => 'field_post_date',
      2 => 'field_starting_date',
      3 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-date-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_date_information|node|job_posting_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_information|node|job_posting_|form';
  $field_group->group_name = 'group_job_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_posting_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_description',
      1 => 'field_teaser',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_information|node|job_posting_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_location|node|job_posting_|form';
  $field_group->group_name = 'group_job_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job_posting_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_location|node|job_posting_|form'] = $field_group;

  return $export;
}
