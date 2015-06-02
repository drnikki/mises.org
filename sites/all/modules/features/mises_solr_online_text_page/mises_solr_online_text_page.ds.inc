<?php
/**
 * @file
 * mises_solr_online_text_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_solr_online_text_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|solr_online_text_page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'solr_online_text_page';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'online_book_chapter' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'prefix' => ', Ch. ',
        ),
        'conditions' => array(),
      ),
    ),
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
          'prefix' => 'Online Text Page from ',
        ),
      ),
    ),
  );
  $export['node|solr_online_text_page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_solr_online_text_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|solr_online_text_page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'solr_online_text_page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'group_date_author',
        2 => 'body',
        3 => 'field_library_item_reference',
        4 => 'online_book_chapter',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'group_date_author' => 'right',
      'body' => 'right',
      'field_library_item_reference' => 'right',
      'online_book_chapter' => 'right',
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
  $export['node|solr_online_text_page|teaser'] = $ds_layout;

  return $export;
}
