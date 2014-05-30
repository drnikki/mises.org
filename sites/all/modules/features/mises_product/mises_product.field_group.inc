<?php
/**
 * @file
 * mises_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_information|node|product|form';
  $field_group->group_name = 'group_product_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_austrian_school_of_economi',
      2 => 'field_topics',
      3 => 'title',
      4 => 'field_austrian_school',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_information|node|product|form'] = $field_group;

  return $export;
}