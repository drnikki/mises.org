<?php
/**
 * @file
 * mises_press_room.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mises_press_room_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-field_featured_videos'
  $field_instances['node-landing_page-field_featured_videos'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select two Library Item nodes to display in the featured videos section of the landing page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'links' => 1,
          'view_mode' => 'video_block_teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_featured_videos',
    'label' => 'Featured Videos',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 16,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Videos');
  t('Select two Library Item nodes to display in the featured videos section of the landing page.');

  return $field_instances;
}
