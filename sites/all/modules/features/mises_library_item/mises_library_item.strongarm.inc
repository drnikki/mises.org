<?php
/**
 * @file
 * mises_library_item.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_library_item_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_library_item';
  $strongarm->value = 0;
  $export['comment_anonymous_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_library_item';
  $strongarm->value = 1;
  $export['comment_default_mode_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_library_item';
  $strongarm->value = '50';
  $export['comment_default_per_page_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_library_item';
  $strongarm->value = 1;
  $export['comment_form_location_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library_item';
  $strongarm->value = '0';
  $export['comment_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_library_item';
  $strongarm->value = '1';
  $export['comment_preview_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_library_item';
  $strongarm->value = 1;
  $export['comment_subject_field_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__library_item';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'author_full_name' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_author' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser_term' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => TRUE,
      ),
      'list_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'single_term' => array(
        'custom_settings' => FALSE,
      ),
      'video_block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_content' => array(
        'custom_settings' => TRUE,
      ),
      'author_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'vertical_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'audio_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_teaser_with_author' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'metatags' => array(
          'weight' => '13',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '10',
        ),
        'twitter' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'disqus' => array(
          'teaser' => array(
            'weight' => '1002',
            'visible' => FALSE,
          ),
          'simple_teaser_with_author' => NULL,
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_library_item';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_library_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library_item';
  $strongarm->value = array();
  $export['node_options_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_library_item';
  $strongarm->value = '1';
  $export['node_preview_library_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_library_item';
  $strongarm->value = 0;
  $export['node_submitted_library_item'] = $strongarm;

  return $export;
}
