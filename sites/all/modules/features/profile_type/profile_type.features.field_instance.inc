<?php
/**
 * @file
 * profile_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function profile_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-profile_type-field_display_weight'.
  $field_instances['taxonomy_term-profile_type-field_display_weight'] = array(
    'bundle' => 'profile_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_display_weight',
    'label' => 'Display Weight',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display Weight');

  return $field_instances;
}
