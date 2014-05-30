<?php
/**
 * @file
 * mises_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|event|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '3',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_austrian_school',
      2 => 'field_award_type',
      3 => 'field_level',
      4 => 'field_topics',
      5 => 'field_featured_content',
      6 => 'field_public_private',
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
  $export['group_additional_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_location|node|event|full';
  $field_group->group_name = 'group_date_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_location',
      2 => 'dynamic_field_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Location',
      'instance_settings' => array(
        'classes' => 'group-date-location sub-heading primary',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_location|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_location|node|event|teaser';
  $field_group->group_name = 'group_date_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Location',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_location',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Location',
      'instance_settings' => array(
        'classes' => 'group-date-location sub-heading primary',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_location|node|event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_information|node|event|form';
  $field_group->group_name = 'group_event_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_event_date',
      2 => 'field_event_type',
      3 => 'field_event_location',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_media|node|event|form';
  $field_group->group_name = 'group_event_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_live_feed',
      1 => 'field_image',
      2 => 'field_media_collection',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_media|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_registration|node|event|form';
  $field_group->group_name = 'group_event_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '2',
    'children' => array(
      0 => 'field_registration_link',
      1 => 'field_registration_link_external',
      2 => 'field_registration_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-registration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_registration|node|event|form'] = $field_group;

  return $export;
}