<?php
/**
 * @file
 * library_item_media_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function library_item_media_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-media_type-field_author_1'
  $field_instances['taxonomy_term-media_type-field_author_1'] = array(
    'bundle' => 'media_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_author_1',
    'label' => 'iTunes Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-media_type-field_itunes_image'
  $field_instances['taxonomy_term-media_type-field_itunes_image'] = array(
    'bundle' => 'media_type',
    'deleted' => 0,
    'description' => 'Please provide an image for this category to be displayed within iTunes.  The image should be at least (300x300) and, ideally, should be square-shaped.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_minimal',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_itunes_image',
    'label' => 'iTunes Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '300x300',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'ebook' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please provide an image for this category to be displayed within iTunes.  The image should be at least (300x300) and, ideally, should be square-shaped.');
  t('iTunes Author');
  t('iTunes Image');

  return $field_instances;
}
