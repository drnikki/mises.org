<?php
/**
 * @file
 * mises_job_posting.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_job_posting_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_job_posting_';
  $strongarm->value = 0;
  $export['comment_anonymous_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_job_posting_';
  $strongarm->value = 1;
  $export['comment_default_mode_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_job_posting_';
  $strongarm->value = '50';
  $export['comment_default_per_page_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_job_posting_';
  $strongarm->value = 1;
  $export['comment_form_location_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_job_posting_';
  $strongarm->value = '2';
  $export['comment_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_job_posting_';
  $strongarm->value = '1';
  $export['comment_preview_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_job_posting_';
  $strongarm->value = 1;
  $export['comment_subject_field_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__job_posting_';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
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
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'list_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_author' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'author_full_name' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'scheduler_settings' => array(
          'weight' => '5',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_job_posting_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_job_posting_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_job_posting_';
  $strongarm->value = array();
  $export['node_options_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_job_posting_';
  $strongarm->value = '1';
  $export['node_preview_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_job_posting_';
  $strongarm->value = 1;
  $export['node_submitted_job_posting_'] = $strongarm;

  return $export;
}
