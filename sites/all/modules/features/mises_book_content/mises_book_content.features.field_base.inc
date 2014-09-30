<?php
/**
 * @file
 * mises_book_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_book_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_book_chapter'
  $field_bases['field_book_chapter'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_chapter',
    'foreign keys' => array(
      'eck_book_chapter' => array(
        'columns' => array(
          'target_id' => 'id',
        ),
        'table' => 'eck_book_chapter',
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
        'target_bundles' => array(
          'book_chapter' => 'book_chapter',
        ),
      ),
      'target_type' => 'book_chapter',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_book_chapter_content'
  $field_bases['field_book_chapter_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_chapter_content',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_book_page_content'
  $field_bases['field_book_page_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_page_content',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_book_pages'
  $field_bases['field_book_pages'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_book_pages',
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
        'target_bundles' => array(
          'book_page' => 'book_page',
        ),
      ),
      'target_type' => 'book_page',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
