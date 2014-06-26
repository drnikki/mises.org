<?php
/**
 * @file
 * mises_campaign.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_campaign_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_code_snippet|node|campaign_|form';
  $field_group->group_name = 'group_campaign_code_snippet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Code Snippet',
    'weight' => '3',
    'children' => array(
      0 => 'field_form_frame',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-campaign-code-snippet field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_campaign_code_snippet|node|campaign_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_images|node|campaign_|form';
  $field_group->group_name = 'group_campaign_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_collection',
      1 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-campaign-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_campaign_images|node|campaign_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_info|node|campaign_|form';
  $field_group->group_name = 'group_campaign_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campaign_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Campaign Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_body',
      1 => 'field_donate_link',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-campaign-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_campaign_info|node|campaign_|form'] = $field_group;

  return $export;
}
