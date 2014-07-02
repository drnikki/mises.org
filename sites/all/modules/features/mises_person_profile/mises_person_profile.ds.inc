<?php
/**
 * @file
 * mises_person_profile.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_person_profile_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'profile_author_articles' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags_title' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person_profile|print'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_person_profile_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_image_collection',
        2 => 'field_quote_reference',
        3 => 'field_bio_summary',
        4 => 'body',
        5 => 'field_published_in',
        6 => 'field_twitter',
        7 => 'field_facebook',
        8 => 'field_email_link',
        9 => 'field_contributions',
        10 => 'field_major_works',
        11 => 'profile_author_articles',
        12 => 'tags_title',
        13 => 'field_topics',
        14 => 'field_austrian_school',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'field_quote_reference' => 'ds_content',
      'field_bio_summary' => 'ds_content',
      'body' => 'ds_content',
      'field_published_in' => 'ds_content',
      'field_twitter' => 'ds_content',
      'field_facebook' => 'ds_content',
      'field_email_link' => 'ds_content',
      'field_contributions' => 'ds_content',
      'field_major_works' => 'ds_content',
      'profile_author_articles' => 'ds_content',
      'tags_title' => 'ds_content',
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
    'page_option_title' => 'Profiles',
  );
  $export['node|person_profile|print'] = $ds_layout;

  return $export;
}
