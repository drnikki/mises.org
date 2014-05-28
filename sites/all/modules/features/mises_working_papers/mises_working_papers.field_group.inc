<?php
/**
 * @file
 * mises_working_papers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_working_papers_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_paper_information|node|working_papers|form';
  $field_group->group_name = 'group_working_paper_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'working_papers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Working Paper Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_author',
      1 => 'field_link_to_paper_on_ssrn_site',
      2 => 'field_abstract',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_working_paper_information|node|working_papers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_paper_tags|node|working_papers|form';
  $field_group->group_name = 'group_working_paper_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'working_papers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '1',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_austrian_school',
      2 => 'field_level',
      3 => 'field_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-working-paper-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_working_paper_tags|node|working_papers|form'] = $field_group;

  return $export;
}
