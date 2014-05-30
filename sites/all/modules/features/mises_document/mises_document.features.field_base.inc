<?php
/**
 * @file
 * mises_document.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_document_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_document_media'
  $field_bases['field_document_media'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_document_media',
    'foreign keys' => array(
      'file_managed' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'mediafield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'media',
  );

  return $field_bases;
}
