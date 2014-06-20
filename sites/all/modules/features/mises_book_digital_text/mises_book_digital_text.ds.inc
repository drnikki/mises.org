<?php
/**
 * @file
 * mises_book_digital_text.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_book_digital_text_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book_digital_text|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book_digital_text';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'text_resizer' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|book_digital_text|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_book_digital_text_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book_digital_text|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book_digital_text';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_resizer',
        1 => 'tags_title',
        2 => 'title',
        3 => 'custom_breadcrumb',
        4 => 'field_topics',
        5 => 'field_austrian_school',
        6 => 'group_image',
        7 => 'field_image',
        8 => 'field_author_1',
        9 => 'group_tags',
        10 => 'field_pdf',
        11 => 'field_epub',
        12 => 'field_mobi',
        13 => 'field_kindle',
        14 => 'field_video_review',
        15 => 'field_body',
        16 => 'field_citation',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'tags_title' => 'ds_content',
      'title' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'group_image' => 'ds_content',
      'field_image' => 'ds_content',
      'field_author_1' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_pdf' => 'ds_content',
      'field_epub' => 'ds_content',
      'field_mobi' => 'ds_content',
      'field_kindle' => 'ds_content',
      'field_video_review' => 'ds_content',
      'field_body' => 'ds_content',
      'field_citation' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|book_digital_text|full'] = $ds_layout;

  return $export;
}
