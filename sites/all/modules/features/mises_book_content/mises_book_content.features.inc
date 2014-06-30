<?php
/**
 * @file
 * mises_book_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_book_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mises_book_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function mises_book_content_eck_bundle_info() {
  $items = array(
    'book_chapter_book_chapter' => array(
      'machine_name' => 'book_chapter_book_chapter',
      'entity_type' => 'book_chapter',
      'name' => 'book_chapter',
      'label' => 'Book Chapter',
    ),
    'book_page_book_page' => array(
      'machine_name' => 'book_page_book_page',
      'entity_type' => 'book_page',
      'name' => 'book_page',
      'label' => 'Book Page',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function mises_book_content_eck_entity_type_info() {
  $items = array(
    'book_chapter' => array(
      'name' => 'book_chapter',
      'label' => 'Book Chapter',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'chapter_title' => array(
          'label' => 'Chapter Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'book_page' => array(
      'name' => 'book_page',
      'label' => 'Book Page',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'page_title' => array(
          'label' => 'Page Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
