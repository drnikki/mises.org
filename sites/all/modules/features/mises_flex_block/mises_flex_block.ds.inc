<?php
/**
 * @file
 * mises_flex_block.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_flex_block_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|flex_block|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'flex_block';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'linked_box_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_image_link',
            ),
          ),
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|flex_block|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_flex_block_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|flex_block|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'flex_block';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'linked_box_image',
        1 => 'field_image',
        2 => 'field_teaser_text',
      ),
      'ds_hidden' => array(
        3 => 'field_image_link',
      ),
    ),
    'fields' => array(
      'linked_box_image' => 'ds_content',
      'field_image' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'field_image_link' => 'ds_hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        'panel' => 'panel',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|flex_block|teaser'] = $ds_layout;

  return $export;
}
