<?php
/**
 * @file
 * profile_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function profile_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_display_weight'.
  $field_bases['field_display_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_weight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        -10 => -10,
        -9 => -9,
        -8 => -8,
        -7 => -7,
        -6 => -6,
        -5 => -5,
        -4 => -4,
        -3 => -3,
        -2 => -2,
        -1 => -1,
        0 => 0,
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
