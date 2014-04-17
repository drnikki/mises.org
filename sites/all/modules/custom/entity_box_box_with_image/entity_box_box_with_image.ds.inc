<?php
/**
 * @file
 * entity_box_box_with_image.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function entity_box_box_with_image_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'entity_boxes|box_with_image|default';
  $ds_fieldsetting->entity_type = 'entity_boxes';
  $ds_fieldsetting->bundle = 'box_with_image';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'linked_box_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_image',
            ),
          ),
        ),
      ),
    ),
    'field_box_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['entity_boxes|box_with_image|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function entity_box_box_with_image_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linked_box_image';
  $ds_field->label = 'Linked Box Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'entity_boxes' => 'entity_boxes',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[entity_boxes:url]"><img src="[entity_boxes:field_image]"></a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['linked_box_image'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function entity_box_box_with_image_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entity_boxes|box_with_image|default';
  $ds_layout->entity_type = 'entity_boxes';
  $ds_layout->bundle = 'box_with_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'linked_box_image',
        1 => 'field_box_body',
      ),
      'ds_hidden' => array(
        2 => 'field_image',
      ),
    ),
    'fields' => array(
      'linked_box_image' => 'ds_content',
      'field_box_body' => 'ds_content',
      'field_image' => 'ds_hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['entity_boxes|box_with_image|default'] = $ds_layout;

  return $export;
}
