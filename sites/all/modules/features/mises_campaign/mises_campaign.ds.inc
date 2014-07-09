<?php
/**
 * @file
 * mises_campaign.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_campaign_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|campaign_|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'campaign_';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_donate_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'btn-giving',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|campaign_|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_campaign_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|campaign_|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'campaign_';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_body',
        2 => 'field_form_frame',
        3 => 'field_donate_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_form_frame' => 'ds_content',
      'field_donate_link' => 'ds_content',
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
  $export['node|campaign_|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|campaign_|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'campaign_';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_body',
        2 => 'field_form_frame',
        3 => 'field_donate_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_body' => 'ds_content',
      'field_form_frame' => 'ds_content',
      'field_donate_link' => 'ds_content',
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
  $export['node|campaign_|full'] = $ds_layout;

  return $export;
}
