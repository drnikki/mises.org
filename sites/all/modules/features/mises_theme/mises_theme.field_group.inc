<?php
/**
 * @file
 * mises_theme.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_theme_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|file|image|wide_player';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'wide_player';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'classes' => 'img img-responsive',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image|file|image|wide_player'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $field_groups;
}
