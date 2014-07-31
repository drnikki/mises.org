<?php
/**
 * @file
 * mises_flex_block.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_flex_block_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|flex_block|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flex_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_display_title',
      1 => 'field_image',
      2 => 'field_image_link',
      3 => 'field_teaser_text',
      4 => 'field_media_collection',
      5 => 'title',
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
  $export['group_basic|node|flex_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_position|node|flex_block|form';
  $field_group->group_name = 'group_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flex_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '8',
    'children' => array(
      0 => 'field_region',
      1 => 'field_section',
      2 => 'field_weight',
      3 => 'field_on_page',
      4 => 'field_term_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-position field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_position|node|flex_block|form'] = $field_group;

  return $export;
}
