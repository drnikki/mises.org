<?php
/**
 * @file
 * mises_social_widgets.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_social_widgets_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_creative_commons'
  $field_bases['field_creative_commons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_creative_commons',
    'foreign keys' => array(),
    'indexes' => array(
      'licence' => array(
        0 => 'licence',
      ),
    ),
    'locked' => 0,
    'module' => 'creative_commons',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        8 => 8,
        9 => 9,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
      ),
      'jurisdiction' => '',
    ),
    'translatable' => 0,
    'type' => 'creative_commons',
  );

  return $field_bases;
}
