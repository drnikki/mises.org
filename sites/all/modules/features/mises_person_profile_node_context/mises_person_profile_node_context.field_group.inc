<?php
/**
 * @file
 * mises_person_profile_node_context.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_person_profile_node_context_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|person_profile|full';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_email_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'group-contact',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_contact|node|person_profile|full'] = $field_group;

  return $export;
}
