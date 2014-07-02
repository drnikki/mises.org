<?php
/**
 * @file
 * mises_events.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_events_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|print'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_image',
        2 => 'field_event_date',
        3 => 'field_event_location',
        4 => 'field_description',
        5 => 'field_media_collection',
        6 => 'field_registration_link',
        7 => 'field_registration_link_external',
        8 => 'field_topics',
        9 => 'field_austrian_school',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_image' => 'ds_content',
      'field_event_date' => 'ds_content',
      'field_event_location' => 'ds_content',
      'field_description' => 'ds_content',
      'field_media_collection' => 'ds_content',
      'field_registration_link' => 'ds_content',
      'field_registration_link_external' => 'ds_content',
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
    'page_option_title' => 'Mises Event',
  );
  $export['node|event|print'] = $ds_layout;

  return $export;
}
