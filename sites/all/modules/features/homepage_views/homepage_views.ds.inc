<?php
/**
 * @file
 * homepage_views.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function homepage_views_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_collection',
        1 => 'field_topics',
      ),
      'right' => array(
        2 => 'title',
        3 => 'group_date_author',
        4 => 'field_mises_published_date',
        5 => 'field_teaser_text',
        6 => 'body',
        7 => 'field_author_1',
        8 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'left',
      'field_topics' => 'left',
      'title' => 'right',
      'group_date_author' => 'right',
      'field_mises_published_date' => 'right',
      'field_teaser_text' => 'right',
      'body' => 'right',
      'field_author_1' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-sm-4' => 'col-sm-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|library_item|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function homepage_views_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'author_full_name';
  $ds_view_mode->label = 'Author Full Name';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['author_full_name'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'single_image';
  $ds_view_mode->label = 'Single Image';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['single_image'] = $ds_view_mode;

  return $export;
}
