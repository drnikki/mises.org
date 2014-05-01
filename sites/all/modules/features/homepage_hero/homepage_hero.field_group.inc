<?php
/**
 * @file
 * homepage_hero.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function homepage_hero_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_hero_information|node|homepage_hero|form';
  $field_group->group_name = 'group_homepage_hero_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage_hero';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Homepage Hero Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_teaser_text',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-hero-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_homepage_hero_information|node|homepage_hero|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|homepage_hero|form';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage_hero';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_link|node|homepage_hero|form'] = $field_group;

  return $export;
}
