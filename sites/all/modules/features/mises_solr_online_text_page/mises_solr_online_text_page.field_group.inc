<?php
/**
 * @file
 * mises_solr_online_text_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_solr_online_text_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parent_lib_item_data|node|solr_online_text_chapter|form';
  $field_group->group_name = 'group_parent_lib_item_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'solr_online_text_chapter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parent Library Item Data',
    'weight' => '3',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_published_date',
      2 => 'field_level',
      3 => 'field_author_1',
      4 => 'field_austrian_school',
      5 => 'field_topics',
      6 => 'field_library_item_tree',
      7 => 'field_library_item_reference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-parent-lib-item-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_parent_lib_item_data|node|solr_online_text_chapter|form'] = $field_group;

  return $export;
}
