<?php
/**
 * @file
 * mises_job_posting.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mises_job_posting_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_posting_|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_posting_';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_closing_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_contact_information' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'lbw' => 1,
          'lbw-el' => 'p',
          'lbw-cl' => 'tags',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'job-detail contact',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'More Information',
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'lbw' => 1,
          'lbw-el' => 'p',
          'lbw-cl' => 'tags',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'job-detail location',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_post_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_starting_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'tags',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|job_posting_|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_posting_|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_posting_';
  $ds_fieldsetting->view_mode = 'simple_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h5',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_full_description' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_teaser' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'teaser',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|job_posting_|simple_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|job_posting_|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'job_posting_';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'teaser-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => 'p',
        'class' => 'read-more',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|job_posting_|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mises_job_posting_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting_|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting_';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_post_date',
        2 => 'field_closing_date',
        3 => 'field_starting_date',
        4 => 'field_location',
        5 => 'field_full_description',
        6 => 'field_link_to_external_listing_',
        7 => 'field_contact_information',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_post_date' => 'ds_content',
      'field_closing_date' => 'ds_content',
      'field_starting_date' => 'ds_content',
      'field_location' => 'ds_content',
      'field_full_description' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
      'field_contact_information' => 'ds_content',
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
    'page_option_title' => 'Job Postings',
  );
  $export['node|job_posting_|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting_|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting_';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_post_date',
        2 => 'field_closing_date',
        3 => 'field_starting_date',
        4 => 'field_location',
        5 => 'field_full_description',
        6 => 'field_link_to_external_listing_',
        7 => 'field_contact_information',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_post_date' => 'ds_content',
      'field_closing_date' => 'ds_content',
      'field_starting_date' => 'ds_content',
      'field_location' => 'ds_content',
      'field_full_description' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
      'field_contact_information' => 'ds_content',
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
    'page_option_title' => 'Job Postings',
  );
  $export['node|job_posting_|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting_|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting_';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_teaser',
        2 => 'field_full_description',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_teaser' => 'ds_content',
      'field_full_description' => 'ds_content',
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
  $export['node|job_posting_|simple_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|job_posting_|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'job_posting_';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'field_teaser',
        2 => 'field_full_description',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_teaser' => 'right',
      'field_full_description' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'right' => array(
        'col-xs-12' => 'col-xs-12',
      ),
    ),
    'wrappers' => array(
      'header' => 'div',
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
      'footer' => 'div',
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
  $export['node|job_posting_|teaser'] = $ds_layout;

  return $export;
}
