<?php
/**
 * @file
 * mises_library_item.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_library_item_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Author',
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|library_item|print'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_library_item_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_subtitle',
        2 => 'field_image_collection',
        3 => 'field_mises_published_date',
        4 => 'field_author_1',
        5 => 'field_author_2',
        6 => 'body',
        7 => 'field_bibliography_footnote',
        8 => 'field_citation',
        9 => 'field_media_collection',
        10 => 'field_document_attachment',
        11 => 'field_topics',
        12 => 'field_austrian_school',
      ),
      'ds_hidden' => array(
        13 => 'field_level',
        14 => 'field_audience',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'field_mises_published_date' => 'ds_content',
      'field_author_1' => 'ds_content',
      'field_author_2' => 'ds_content',
      'body' => 'ds_content',
      'field_bibliography_footnote' => 'ds_content',
      'field_citation' => 'ds_content',
      'field_media_collection' => 'ds_content',
      'field_document_attachment' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'field_level' => 'ds_hidden',
      'field_audience' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '2',
    'page_option_title' => '%node:field-library-item-tree:0',
  );
  $export['node|library_item|print'] = $ds_layout;

  return $export;
}
