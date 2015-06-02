<?php
/**
 * @file
 * mises_solr_online_text_chapter.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_solr_online_text_chapter_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|solr_online_text_chapter|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'solr_online_text_chapter';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'teaser-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_library_item_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'prefix' => 'Online Text Chapter from ',
        ),
      ),
    ),
  );
  $export['node|solr_online_text_chapter|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function mises_solr_online_text_chapter_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'online_book_chapter';
  $ds_field->label = 'Online Book Chapter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  if (function_exists(\'_mises_solr_results_format\')) {
    echo _mises_solr_results_format($entity);
  } else {
  echo \'\';
  }
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['online_book_chapter'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_solr_online_text_chapter_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|solr_online_text_chapter|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'solr_online_text_chapter';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'group_date_author',
        2 => 'field_library_item_reference',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'group_date_author' => 'right',
      'field_library_item_reference' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-xs-8' => 'col-xs-8',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'footer' => 'div',
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
  $export['node|solr_online_text_chapter|teaser'] = $ds_layout;

  return $export;
}
