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
    'dynamic_field_2' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:171:"<p>Online text content is not displayed as a node. Go to view the content, go to the Library Item that is referencing this online text and click &quot;View HTML.&quot;</p>";s:6:"format";s:10:"simplified";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '1',
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book_digital_text|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book_digital_text';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|book_digital_text|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book_digital_text|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book_digital_text';
  $ds_fieldsetting->view_mode = 'simple_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h5',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|book_digital_text|simple_teaser'] = $ds_fieldsetting;

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
        0 => 'custom_breadcrumb',
        1 => 'title',
        2 => 'dynamic_field_2',
        3 => 'field_referencing_library_item',
      ),
      'ds_hidden' => array(
        4 => 'field_book_chapter',
      ),
    ),
    'fields' => array(
      'custom_breadcrumb' => 'ds_content',
      'title' => 'ds_content',
      'dynamic_field_2' => 'ds_content',
      'field_referencing_library_item' => 'ds_content',
      'field_book_chapter' => 'ds_hidden',
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book_digital_text|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book_digital_text';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_author_1',
        2 => 'field_pdf',
        3 => 'field_epub',
        4 => 'field_mobi',
        5 => 'field_kindle',
        6 => 'field_link_to_external_listing_',
        7 => 'field_image',
        8 => 'field_body',
        9 => 'field_citation',
        10 => 'field_video_review',
        11 => 'field_topics',
        12 => 'field_austrian_school',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_author_1' => 'ds_content',
      'field_pdf' => 'ds_content',
      'field_epub' => 'ds_content',
      'field_mobi' => 'ds_content',
      'field_kindle' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
      'field_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_citation' => 'ds_content',
      'field_video_review' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
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
  $export['node|book_digital_text|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book_digital_text|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book_digital_text';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_body' => 'ds_content',
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
  $export['node|book_digital_text|simple_teaser'] = $ds_layout;

  return $export;
}
