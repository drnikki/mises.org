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
  $field_group->identifier = 'group_tags|node|working_papers|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'working_papers';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
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
  $export['group_tags|node|working_papers|full'] = $field_group;

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
      0 => 'body',
      1 => 'field_abstract',
      2 => 'field_author',
      3 => 'field_link_to_paper_on_ssrn_site',
      4 => 'title',
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
    'label' => 'Tagging',
    'weight' => '1',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_austrian_school',
      2 => 'field_level',
      3 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tagging',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-working-paper-tags field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_working_paper_tags|node|working_papers|form'] = $field_group;

  return $export;
}
