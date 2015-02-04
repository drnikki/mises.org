<?php
/**
 * @file
 * mises_solr_online_text_chapter.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_solr_online_text_chapter_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_page_reference'
  $field_bases['field_page_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_page_reference',
    'foreign keys' => array(
      'eck_book_page' => array(
        'columns' => array(
          'target_id' => 'id',
        ),
        'table' => 'eck_book_page',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'book_page',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
