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
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dynamic_field_1' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:19:"Get This Book label";s:5:"title";s:0:"";s:4:"body";s:26:"Get This Book/Digital Text";s:6:"format";s:7:"ds_code";s:10:"substitute";i:0;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-group-item bg-gray',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'sub-heading contrast',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'follow_mises_institute' => array(
      'weight' => '15',
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
      'weight' => '2',
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
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_citation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'citation',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_epub' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_kindle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mobi' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_pdf' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_video_review' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading secondary',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'outset bg-gray',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-group-item bg-secondary',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'sub-heading',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
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
        2 => 'dynamic_field_1',
        3 => 'field_topics',
        4 => 'field_pdf',
        5 => 'custom_breadcrumb',
        6 => 'title',
        7 => 'field_austrian_school',
        8 => 'field_epub',
        9 => 'group_image',
        10 => 'field_mobi',
        11 => 'field_image',
        12 => 'field_kindle',
        13 => 'field_author_1',
        14 => 'group_tags',
        15 => 'field_link_to_external_listing_',
        16 => 'group_links',
        17 => 'field_body',
        18 => 'field_citation',
        19 => 'field_video_review',
        20 => 'follow_mises_institute',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'tags_title' => 'ds_content',
      'dynamic_field_1' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_pdf' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'title' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'field_epub' => 'ds_content',
      'group_image' => 'ds_content',
      'field_mobi' => 'ds_content',
      'field_image' => 'ds_content',
      'field_kindle' => 'ds_content',
      'field_author_1' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
      'group_links' => 'ds_content',
      'field_body' => 'ds_content',
      'field_citation' => 'ds_content',
      'field_video_review' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
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
    'page_option_title' => 'Books/Digital Texts',
  );
  $export['node|book_digital_text|full'] = $ds_layout;

  return $export;
}
