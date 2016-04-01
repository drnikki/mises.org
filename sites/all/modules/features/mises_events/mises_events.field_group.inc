<?php
/**
 * @file
 * mises_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_events_field_group_info() {
  $field_groups = array();

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
      2 => 'field_level',
      3 => 'field_topics',
      4 => 'field_featured_content',
      5 => 'field_public_private',
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
  $field_groups['group_additional_information|node|event|form'] = $field_group;

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
  $field_groups['group_date_location|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_location|node|event|simple_teaser';
  $field_group->group_name = 'group_date_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'simple_teaser';
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
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_date_location|node|event|simple_teaser'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_location',
      2 => 'dynamic_field_1',
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
  $field_groups['group_date_location|node|event|teaser'] = $field_group;

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
      4 => 'field_teaser_text',
      5 => 'field_wire_include_exclude',
      6 => 'field_mises_published_date',
      7 => 'title',
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
  $field_groups['group_event_information|node|event|form'] = $field_group;

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
      3 => 'field_social_media_image',
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
  $field_groups['group_event_media|node|event|form'] = $field_group;

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
      3 => 'field_causeview_form_reg_link',
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
  $field_groups['group_event_registration|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|event|full';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
      1 => 'ga_page_counter',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'id' => 'image',
        'classes' => 'group-image-wrapper field-group-html-element pull-left',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|event|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '6',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'tags_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => 'tags',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_tags|node|event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|event|teaser';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'tags',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tags',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_tags|node|event|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Date Location');
  t('Event Information');
  t('Image Wrapper');
  t('Media');
  t('Registration');
  t('Tagging');
  t('Tags');
  t('tags');

  return $field_groups;
}
