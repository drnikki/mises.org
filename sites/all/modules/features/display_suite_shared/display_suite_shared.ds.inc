<?php
/**
 * @file
 * display_suite_shared.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function display_suite_shared_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_image_collection|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_image_collection';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['field_collection_item|field_image_collection|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_resource_group|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_resource_group';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_display_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'teaser-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'intro-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_resource_group|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_resources|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_resources';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_teaser_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'block-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_read_more_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_resources|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_resources|list_teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_resources';
  $ds_fieldsetting->view_mode = 'list_teaser';
  $ds_fieldsetting->settings = array(
    'field_teaser_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'sub-heading contrast',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_read_more_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more text-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_resource' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_resources|list_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|award|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'award';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'follow_mises_institute' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
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
    'field_recipients' => array(
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
    'field_year' => array(
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
    'field_award_type' => array(
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
  $export['node|award|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|award|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'award';
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
  );
  $export['node|award|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'custom_breadcrumb' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dynamic_field_1' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:17:"Add Comment title";s:5:"title";s:0:"";s:4:"body";s:20:"<h3>Add Comment</h3>";s:6:"format";s:10:"simplified";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'comment-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'follow_mises_institute' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'text_resizer' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
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
    'post_date' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_media_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Play',
          'lb-el' => 'h4',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'media-player clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image border-secondary pull-left',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="slideshow"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|blog|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|blog|simple_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
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
      'weight' => '2',
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
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|blog|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|book_digital_text|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'book_digital_text';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
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
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'teaser',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|book_digital_text|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|causeview_snippet|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'causeview_snippet';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_code_snippet' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|causeview_snippet|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|course|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course|sidebar_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course';
  $ds_fieldsetting->view_mode = 'sidebar_teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|course|sidebar_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course';
  $ds_fieldsetting->view_mode = 'simple_teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => 'sidebar-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|course|simple_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|course|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'course';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'teaser-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'teaser',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|course|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'follow_mises_institute' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'custom_breadcrumb' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dynamic_field_1' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:16:"Event Disclaimer";s:5:"title";s:0:"";s:4:"body";s:381:"<p><strong>Publicity Waiver:</strong> Registering for this event gives the Mises Institute permission to take photos of attendees and use the photos for fundraising purposes. By this authorization, attendees understand and agree that no participant shall receive renumeration and that all rights, title and interest to the photos and use of them belongs to the Mises Institute.</p>";s:6:"format";s:10:"simplified";s:10:"substitute";i:0;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'disclaimer italic',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'dynamic_field_2' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:15:"Reg Form button";s:5:"title";s:0:"";s:4:"body";s:72:"<a href="#registration-form" class="btn btn-default btn-sm">Register</a>";s:6:"format";s:9:"full_html";s:10:"substitute";i:0;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'sub-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_no_string',
            'configuration' => array(
              'target' => 'field_registration_type',
              'string' => 'onsite',
            ),
          ),
        ),
      ),
    ),
    'text_resizer' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
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
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_registration_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Registration',
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'border-contrast  clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="registration-form"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_registration_link_external' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'btn btn-default',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'location',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image border-secondary pull-left',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="image"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
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
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'field_event_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_location' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'location',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|event|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|flex_block|sidebar_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'flex_block';
  $ds_fieldsetting->view_mode = 'sidebar_teaser';
  $ds_fieldsetting->settings = array(
    'linked_box_image' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
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
    'field_display_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_media_collection' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|flex_block|sidebar_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|landing_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'landing_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'follow_mises_institute' => array(
      'weight' => '33',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_banner_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_read_more_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_teaser_header' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'sub-heading contrast',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_featured_nodes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'row featured',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_featured_videos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'row video',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-xs-6',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_teaser_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'teaser-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|landing_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|audio_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'audio_teaser';
  $ds_fieldsetting->settings = array(
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '5',
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
      'weight' => '10',
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
    'field_mises_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_media_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'media',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|audio_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|author_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'author_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|library_item|author_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_teaser_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|block_teaser_term';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'block_teaser_term';
  $ds_fieldsetting->settings = array(
    'dynamic_field_2' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:29:"taxonomy_term_reference_plain";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:28:"node:field_library_item_tree";}',
        'load_terms' => 1,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '[node:field-library-item-tree:0]',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'panel-heading',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'panel-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_teaser_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_library_item_tree' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-footer',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'p',
          'fis-cl' => 'read-more',
          'fis-at' => '',
          'fis-def-at' => FALSE,
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
  $export['node|library_item|block_teaser_term'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|library_item|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'body_with_media_embedded' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content embedded-media',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_media_collection',
            ),
          ),
        ),
      ),
    ),
    'custom_breadcrumb' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dynamic_3' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:10:"Disclaimer";s:5:"title";s:0:"";s:4:"body";s:118:"<p><br /><strong>Note:</strong> The views expressed on Mises.org are not necessarily those of the Mises Institute.</p>";s:6:"format";s:10:"simplified";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'dynamic_field_1' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:26:"Get This Book/Digital Text";s:5:"title";s:0:"";s:4:"body";s:26:"Get This Book/Digital Text";s:6:"format";s:9:"full_html";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-group-item bg-gray',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'sub-heading contrast',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'rules_event',
            'configuration' => array(
              'rule' => 'rules_library_item_show_items',
            ),
          ),
        ),
      ),
    ),
    'dynamic_field_2' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:11:"admin_title";s:0:"";s:5:"title";s:0:"";s:4:"body";s:46:"<a href="%node:url/html">View HTML Version</a>";s:6:"format";s:9:"full_html";s:10:"substitute";i:1;}s:4:"type";s:6:"custom";s:7:"subtype";s:6:"custom";}',
        'load_terms' => 0,
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_online_text',
            ),
          ),
        ),
      ),
    ),
    'follow_mises_institute' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'tags_title' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'text_resizer' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mises_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_document_attachment' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Download',
          'lb-el' => 'h4',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'downloads',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_author_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_bibliography_footnote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'References',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_citation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Cite This Article',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image border-secondary pull-left',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="slideshow"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_media_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Play',
          'lb-el' => 'h4',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'media-player clearfix',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'media-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_epub' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_kindle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'list-group-item bg-secondary',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'sub-heading',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mobi' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_pdf' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|sidebar_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'sidebar_teaser';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Learn More',
        'wrapper' => 'p',
        'class' => 'read-more',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
  );
  $export['node|library_item|sidebar_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|library_item|simple_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|single_term';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'single_term';
  $ds_fieldsetting->settings = array(
    'random_term' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|library_item|single_term'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
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
      'weight' => '7',
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
    'field_mises_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
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
  $export['node|library_item|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|video_block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'video_block_teaser';
  $ds_fieldsetting->settings = array(
    'dynamic_field_2' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:9:{s:5:"label";s:6:"hidden";s:9:"formatter";s:29:"taxonomy_term_reference_plain";s:11:"delta_limit";s:1:"1";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:0:{}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:12:"entity_field";s:7:"subtype";s:28:"node:field_library_item_tree";}',
        'load_terms' => 1,
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '[node:field-library-item-tree:0]',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'panel-heading',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'panel-title',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_teaser_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_library_item_tree' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-footer',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|video_block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'body_with_media_embedded' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_media_collection',
            ),
          ),
        ),
      ),
    ),
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'text_resizer' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-left border-secondary slideshow',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="slideshow"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_media_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-left border-secondary media',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="media"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|author_full_name';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'author_full_name';
  $ds_fieldsetting->settings = array(
    'author_full_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person_profile|author_full_name'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'list-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-gray',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|person_profile|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'follow_mises_institute' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'profile_author_articles' => array(
      'weight' => '19',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'All Works',
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast accordion-toggle collapsed',
          'lb-at' => 'data-toggle="collapse" data-target="#author-articles" data-parent="#profile-accordion"',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'collapse in',
          'fis-at' => 'id="author-articles"',
          'fis-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'tags_title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-title bold',
        ),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '2',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Read Full Bio',
          'lb-el' => 'p',
          'lb-cl' => 'read-more text-right accordion-toggle collapsed',
          'lb-at' => 'data-toggle="collapse" data-target="#full-bio"',
          'lb-col' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'collapse',
          'fis-at' => 'id="full-bio"',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_contributions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast accordion-toggle',
          'lb-at' => 'data-toggle="collapse" data-target="#contributions" data-parent="#profile-accordion"',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'collapse',
          'fis-at' => 'id="contributions"',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_facebook' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'facebook',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image pull-left border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="slideshow"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_major_works' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast accordion-toggle collapsed',
          'lb-at' => 'data-toggle="collapse" data-target="#major-works" data-parent="#profile-accordion"',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'collapse',
          'fis-at' => 'id="major-works"',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'teaser',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_published_in' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'lb-col' => TRUE,
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
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_twitter' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'twitter',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_quote_reference' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'quote',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_email_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'contact',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_award_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Awards',
          'lb-el' => 'span',
          'lb-cl' => 'tag-label bold',
          'lb-col' => TRUE,
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
  $export['node|person_profile|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|sidebar_author';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'sidebar_author';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'author',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive border-gray',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|person_profile|sidebar_author'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|sidebar_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'sidebar_teaser';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => 'author',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive border-gray',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|person_profile|sidebar_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
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
      'weight' => '4',
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
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|person_profile|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'teaser-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Tags',
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
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|simple_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'simple_teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h5',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'teaser',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product|simple_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'course_title_linked' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'teaser-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'conditions' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image img-responsive border-secondary',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_to_external_listing_' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|working_papers|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'working_papers';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'tags_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'custom_breadcrumb' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'follow_mises_institute' => array(
      'weight' => '27',
      'label' => 'hidden',
      'format' => 'default',
    ),
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'body-content',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_abstract' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading secondary',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'outset bg-gray',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'body-content',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_austrian_school' => array(
      'formatter_settings' => array(
        'ft' => array(
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'author',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_to_paper_on_ssrn_site' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'View Paper',
          'lb-el' => 'h3',
          'lb-cl' => 'sub-heading contrast',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_topics' => array(
      'formatter_settings' => array(
        'ft' => array(
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
  $export['node|working_papers|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function display_suite_shared_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'author_articles';
  $ds_field->label = 'Author Articles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|term_landing-block_1',
    'block_render' => '3',
  );
  $export['author_articles'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'author_full_name';
  $ds_field->label = 'Author Linked RelAuthor';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:url]" rel="author">[node:title]</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['author_full_name'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'body_with_media_embedded';
  $ds_field->label = 'Body with Media Embedded';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php

$media = field_get_items(\'node\', $entity, \'field_media_collection\');
$content_array = explode("<p>", $entity->body[\'und\'][0][\'value\']);
foreach ($media as $key => $itemid) {
  $medium = field_collection_field_get_entity($itemid);
  $insertAfter = $medium->field_insert_after[LANGUAGE_NONE][0][\'value\'] ? $medium->field_insert_after[LANGUAGE_NONE][0][\'value\'] : count($content_array);
  $mediumValue = render(field_view_field(\'field_collection_item\',$medium,\'field_media\',\'wide_player\'));
  //dpm($insertAfter);
  //dpm($medium);
  //dpm($content_array);
  array_splice($content_array, $insertAfter + $key + 1, 0, $mediumValue);

  $final_content = implode("<p>", $content_array);
}

print $final_content;

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['body_with_media_embedded'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contextual_block_title_with_icon';
  $ds_field->label = 'Contextual Block Title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
//print \'<pre>\';
//print_r($entity);
//print \'</pre>\';
//$view_name = $entity->view->name;
if (isset($entity->view)) {
  $view_display = $entity->view->current_display;
} else {
  $view_display = \'node\';
}
switch ($view_display) { 
  case "press_room": 
   $ctitle = "Press Room"; 
    break;
  case "online_courses": 
    $ctitle = "Online Courses"; 
    break;
  case "mises_view": 
    $ctitle = "Mises View"; 
    break;
  case "library_block": 
    $ctitle = "Library"; 
    break;
  case "audience": 
    $ctitle = "Audience"; 
    break;
  case "level": 
    $ctitle = "Level"; 
    break;
  case "topics": 
    $ctitle = "Topics"; 
    break;
  case "books": 
    $ctitle = "Books"; 
    break;
  case "event": 
    $ctitle = "Events"; 
    break;
  case "free_market": 
    $ctitle = "Free Market"; 
    break;
  case "review": 
    $ctitle = "Review"; 
    break;
  case "audio": 
    $ctitle = "Featured Audio"; 
    break;
  case "video": 
    $ctitle = "Featured Video"; 
    break;
  case "academy": 
    $ctitle = "Mises Academy"; 
    break;
  case "research": 
    $ctitle = "Recent Research"; 
    break;
  case "blog": 
    $ctitle = "Blog"; 
    break;
  case "lecture": 
    $ctitle = "Lecture"; 
    break;
  case "learn": 
    $ctitle = "Learn Austrian Economics"; 
    break;
  case "academy_course": 
  case "academy_courses": 
    $ctitle = "Take An Academy Course"; 
    break;
  case "columnist": 
    $ctitle = "Meet Our Columnists"; 
    break;
  case "popular": 
    $ctitle = "Most Popular Articles"; 
    break;
  case "featured_author": 
    $ctitle = "Featured Author"; 
    break;
  case "courses": 
    $ctitle = "Courses"; 
    break;
  case "featured_video": 
    $ctitle = "Featured Video"; 
    break;
  case "blogger": 
    $ctitle = "Meet Our Bloggers"; 
    break;
  case "node": 
    $ctitle = "[node:field-library-item-tree:0]"; 
    break;
  case "faculty": 
    $ctitle = "Meet Our Faculty and Scholars"; 
    break;
  default: 
    $ctitle = "Add case"; 
}

print \'<div class="panel-title">\'  . $ctitle . \'</div>\'; 
//print \'<div class="panel-title">\'  . $entity->view->human_name . \'</div>\'; 
//print \'<div class="panel-title">\'  . $entity->view->display[\'columnist\'][\'display_title\'] . \'</div>\'; 

?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['contextual_block_title_with_icon'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'course_title_linked';
  $ds_field->label = 'Title Linked External URL';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'course|*
product|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
//print_r($entity);
if ($entity->field_link_to_external_listing_) {
  $link = "[node:field-link-to-external-listing-:url]";
} else if ($entity->type == \'product\') { $link = "http://store.mises.org";
} else { $link = "http://academy.mises.org";}
?>
<a href="<?php print $link; ?>" target="_blank" title="[node:title]">[node:title]</a>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['course_title_linked'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_breadcrumb';
  $ds_field->label = 'Custom Breadcrumb';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'easy_breadcrumb|easy_breadcrumb',
    'block_render' => '3',
  );
  $export['custom_breadcrumb'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic_3';
  $ds_field->label = 'Dynamic 3';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic_3'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic_field_1';
  $ds_field->label = 'Dynamic Field 1';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic_field_1'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic_field_2';
  $ds_field->label = 'Dynamic Field 2';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['dynamic_field_2'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'follow_mises_institute';
  $ds_field->label = 'Node Widgets';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="group-sharing" class="group-sharing">
<div class="copyright pull-right">[node:field_copyright_info]</div>
<div class="print pull-right"><div id="printer-link" class="node-widget"><p><a target="_blank" href="/print/[node:nid]" title="Print"><span class="glyphicon glyphicon-print"></span></a></p></div></div>
<div class="addthis-widget">[widgets:ws-addthis-share]</div>
</div>
<div id="bottom-social-share">
  <h4 class="label-above sub-heading secondary">Follow Mises Institute</h4>
  <span class="social-widget facebook-widget">
    <div id="fb-root"></div>
      <script>(function(d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=439661019402770&version=v2.0";
        fjs.parentNode.insertBefore(js, fjs);
        }(document, \'script\', \'facebook-jssdk\'));</script>
    <div class="fb-like" data-href="[url:absolute]" data-width="110" data-layout="button_count" data-action="like" data-show-faces="false" data-share="false"></div>
  </span>
  <span class="social-widget twitter-widget">
    <a href="https://twitter.com/mises" class="twitter-follow-button" data-show-count="false" data-lang="en">Follow @mises</a>
    <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
  </span> 
  <span class="social-widget gplus-widget">
    <script src="https://apis.google.com/js/platform.js" async defer></script>
    <div class="g-follow" data-annotation="bubble" data-height="20" data-href="https://plus.google.com/103720522219967033950" data-rel="publisher"></div>
  </span>
</div>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['follow_mises_institute'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linked_box_image';
  $ds_field->label = 'Linked Flex Box Image';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if (isset($entity->field_image_link[LANGUAGE_NONE][0][\'url\'] ) && isset($entity->field_image)) { ?> 
  <?php $image_link =$entity->field_image_link[LANGUAGE_NONE][0][\'url\'] ; ?>
  <a href="<?php print $image_link; ?>"><img class="img-responsive" src="[node:field_image]"></a>
<?php } ?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['linked_box_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_author_articles';
  $ds_field->label = 'Profile Author Articles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|author_articles-block',
    'block_render' => '3',
  );
  $export['profile_author_articles'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'random_term';
  $ds_field->label = 'Random Lib Item Type Term';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$random = array_rand($entity->field_library_item_tree[\'und\']);
$entity->ds_delta = $random;
$random_term =  $entity->field_library_item_tree[\'und\'][$random][\'taxonomy_term\']->name;
$random_class = strtolower($random_term);
$random_class = preg_replace(\'@[^a-z0-9_]+@\',\'-\',$random_class);
$random_tid =  $entity->field_library_item_tree[\'und\'][$random][\'taxonomy_term\']->tid;
print \'<div class="panel-heading \' . $random_class . \'"><div class="panel-title">\' . $random_term . \'</div></div>\';
//print \'<div class="panel-heading \' . $random_class . \'"><div class="panel-title">\' . $entity->field_library_item_tree[\'und\'] . \'</div></div>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['random_term'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tags_title';
  $ds_field->label = 'Tags title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php if (!empty($entity->field_topics) || !empty($entity->field_austrian_school)) : ?>
<span class="tag-label bold">Tags</span>
<?php endif; ?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['tags_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'text_resizer';
  $ds_field->label = 'Text Resizer';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="text-resizer">
<div class="btn btn-white btn-xs small active">A</div>
<div class="btn btn-white btn-xs large">A</div>
</div>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['text_resizer'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function display_suite_shared_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_image_collection|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_image_collection';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
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
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_image_collection|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_image_collection|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_image_collection';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
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
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_image_collection|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_image_collection|list_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_image_collection';
  $ds_layout->view_mode = 'list_teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
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
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_image_collection|list_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_image_collection|vertical_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_image_collection';
  $ds_layout->view_mode = 'vertical_teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
    ),
    'limit' => array(
      'field_image' => '1',
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
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_image_collection|vertical_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_resource_group|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_resource_group';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_block_intro',
        1 => 'field_resources',
        2 => 'field_display_title',
        3 => 'field_description',
      ),
    ),
    'fields' => array(
      'group_block_intro' => 'ds_content',
      'field_resources' => 'ds_content',
      'field_display_title' => 'ds_content',
      'field_description' => 'ds_content',
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
  );
  $export['field_collection_item|field_resource_group|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_resource_group|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_resource_group';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_block_intro',
        1 => 'field_display_title',
        2 => 'field_description',
        3 => 'field_resources',
      ),
    ),
    'fields' => array(
      'group_block_intro' => 'ds_content',
      'field_display_title' => 'ds_content',
      'field_description' => 'ds_content',
      'field_resources' => 'ds_content',
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
  );
  $export['field_collection_item|field_resource_group|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_resources|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_resources';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_title',
        1 => 'field_resource',
        2 => 'field_read_more_link',
      ),
    ),
    'fields' => array(
      'field_teaser_title' => 'ds_content',
      'field_resource' => 'ds_content',
      'field_read_more_link' => 'ds_content',
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
  );
  $export['field_collection_item|field_resources|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_resources|list_teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_resources';
  $ds_layout->view_mode = 'list_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_teaser_title',
        1 => 'field_resource',
        2 => 'field_read_more_link',
      ),
    ),
    'fields' => array(
      'field_teaser_title' => 'ds_content',
      'field_resource' => 'ds_content',
      'field_read_more_link' => 'ds_content',
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
  );
  $export['field_collection_item|field_resources|list_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|image|full';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|video|small_player';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'small_player';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['file|video|small_player'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|award|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'award';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'custom_breadcrumb',
        1 => 'title',
        2 => 'field_year',
        3 => 'field_recipients',
        4 => 'field_award_type',
        5 => 'follow_mises_institute',
      ),
    ),
    'fields' => array(
      'custom_breadcrumb' => 'ds_content',
      'title' => 'ds_content',
      'field_year' => 'ds_content',
      'field_recipients' => 'ds_content',
      'field_award_type' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
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
    'page_option_title' => 'Awards',
  );
  $export['node|award|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|award|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'award';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|award|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_resizer',
        1 => 'tags_title',
        2 => 'field_topics',
        3 => 'custom_breadcrumb',
        4 => 'field_austrian_school',
        5 => 'title',
        6 => 'field_image_collection',
        7 => 'group_date_author',
        8 => 'group_tags',
        9 => 'post_date',
        10 => 'body',
        11 => 'field_author_1',
        12 => 'field_media_collection',
        13 => 'follow_mises_institute',
        14 => 'dynamic_field_1',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'tags_title' => 'ds_content',
      'field_topics' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'title' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'group_date_author' => 'ds_content',
      'group_tags' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_author_1' => 'ds_content',
      'field_media_collection' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
      'dynamic_field_1' => 'ds_content',
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
    'page_option_title' => 'Blog',
  );
  $export['node|blog|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|blog|simple_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        2 => 'body',
        3 => 'node_link',
      ),
      'left' => array(
        1 => 'field_image_collection',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_image_collection' => 'left',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-sm-4' => 'col-sm-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
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
  $export['node|blog|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|book_digital_text|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'book_digital_text';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title' => 'right',
      'field_body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|book_digital_text|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|causeview_snippet|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'causeview_snippet';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_code_snippet',
      ),
    ),
    'fields' => array(
      'field_code_snippet' => 'ds_content',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|causeview_snippet|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_collection',
        1 => 'contextual_block_title_with_icon',
        2 => 'group_teaser',
        3 => 'course_title_linked',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'ds_content',
      'contextual_block_title_with_icon' => 'ds_content',
      'group_teaser' => 'ds_content',
      'course_title_linked' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|course|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_topics',
        2 => 'field_austrian_school',
        3 => 'field_image_collection',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'field_image_collection' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|course|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course|sidebar_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'sidebar_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_heading',
        1 => 'group_panel_body',
        2 => 'contextual_block_title_with_icon',
        3 => 'body',
        4 => 'course_title_linked',
        5 => 'field_link_to_external_listing_',
      ),
    ),
    'fields' => array(
      'group_heading' => 'ds_content',
      'group_panel_body' => 'ds_content',
      'contextual_block_title_with_icon' => 'ds_content',
      'body' => 'ds_content',
      'course_title_linked' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|course|sidebar_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'course_title_linked',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'course_title_linked' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|course|simple_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|course|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'course';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'course_title_linked',
        1 => 'body',
        2 => 'field_link_to_external_listing_',
      ),
      'left' => array(
        3 => 'field_image_collection',
      ),
    ),
    'fields' => array(
      'course_title_linked' => 'right',
      'body' => 'right',
      'field_link_to_external_listing_' => 'right',
      'field_image_collection' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
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
  $export['node|course|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_resizer',
        1 => 'tags_title',
        2 => 'custom_breadcrumb',
        3 => 'field_topics',
        4 => 'field_austrian_school',
        5 => 'title',
        6 => 'field_image',
        7 => 'group_date_location',
        8 => 'field_event_date',
        9 => 'field_event_location',
        10 => 'dynamic_field_2',
        11 => 'group_tags',
        12 => 'field_description',
        13 => 'field_media_collection',
        14 => 'field_registration_link',
        15 => 'field_registration_link_external',
        16 => 'follow_mises_institute',
        17 => 'dynamic_field_1',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'tags_title' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'title' => 'ds_content',
      'field_image' => 'ds_content',
      'group_date_location' => 'ds_content',
      'field_event_date' => 'ds_content',
      'field_event_location' => 'ds_content',
      'dynamic_field_2' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_description' => 'ds_content',
      'field_media_collection' => 'ds_content',
      'field_registration_link' => 'ds_content',
      'field_registration_link_external' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
      'dynamic_field_1' => 'ds_content',
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
    'page_option_title' => 'Mises Event',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        2 => 'group_date_location',
        3 => 'field_description',
        4 => 'node_link',
        5 => 'field_event_date',
        6 => 'field_event_location',
      ),
      'left' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_image' => 'left',
      'group_date_location' => 'right',
      'field_description' => 'right',
      'node_link' => 'right',
      'field_event_date' => 'right',
      'field_event_location' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-xs-8' => 'col-xs-8',
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
  $export['node|event|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|flex_block|sidebar_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'flex_block';
  $ds_layout->view_mode = 'sidebar_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_display_title',
        1 => 'linked_box_image',
        2 => 'field_image',
        3 => 'field_media_collection',
        4 => 'field_teaser_text',
      ),
      'ds_hidden' => array(
        5 => 'field_image_link',
      ),
    ),
    'fields' => array(
      'field_display_title' => 'ds_content',
      'linked_box_image' => 'ds_content',
      'field_image' => 'ds_content',
      'field_media_collection' => 'ds_content',
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
  $export['node|flex_block|sidebar_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landing_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landing_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_banner_image',
        1 => 'field_page_subtitle',
      ),
      'left' => array(
        2 => 'field_image',
      ),
      'right' => array(
        3 => 'field_teaser_header',
        4 => 'field_teaser_title',
        5 => 'field_teaser',
        6 => 'field_read_more_link',
      ),
      'bottom' => array(
        7 => 'field_featured_nodes',
        8 => 'field_featured_videos',
        9 => 'field_resource_group',
        10 => 'follow_mises_institute',
      ),
    ),
    'fields' => array(
      'field_banner_image' => 'top',
      'field_page_subtitle' => 'top',
      'field_image' => 'left',
      'field_teaser_header' => 'right',
      'field_teaser_title' => 'right',
      'field_teaser' => 'right',
      'field_read_more_link' => 'right',
      'field_featured_nodes' => 'bottom',
      'field_featured_videos' => 'bottom',
      'field_resource_group' => 'bottom',
      'follow_mises_institute' => 'bottom',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
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
  $export['node|landing_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|audio_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'audio_teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'tags_title',
        1 => 'field_topics',
        2 => 'field_image_collection',
        3 => 'group_tags',
        4 => 'field_austrian_school',
      ),
      'right' => array(
        5 => 'title',
        6 => 'field_mises_published_date',
        7 => 'group_date_author',
        8 => 'field_author_1',
        9 => 'field_teaser_text',
        10 => 'body',
        11 => 'field_media_collection',
        12 => 'node_link',
      ),
    ),
    'fields' => array(
      'tags_title' => 'left',
      'field_topics' => 'left',
      'field_image_collection' => 'left',
      'group_tags' => 'left',
      'field_austrian_school' => 'left',
      'title' => 'right',
      'field_mises_published_date' => 'right',
      'group_date_author' => 'right',
      'field_author_1' => 'right',
      'field_teaser_text' => 'right',
      'body' => 'right',
      'field_media_collection' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-xs-8' => 'col-xs-8',
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
  $export['node|library_item|audio_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|author_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'author_teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_collection',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_mises_published_date',
        3 => 'field_teaser_text',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'left',
      'title' => 'right',
      'field_mises_published_date' => 'right',
      'field_teaser_text' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
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
  $export['node|library_item|author_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_collection',
        1 => 'contextual_block_title_with_icon',
        2 => 'group_teaser',
        3 => 'title',
        4 => 'field_teaser_text',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'ds_content',
      'contextual_block_title_with_icon' => 'ds_content',
      'group_teaser' => 'ds_content',
      'title' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|library_item|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|block_teaser_term';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'block_teaser_term';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_collection',
        1 => 'dynamic_field_2',
        2 => 'group_body',
        3 => 'field_library_item_tree',
        4 => 'title',
        5 => 'field_teaser_text',
        6 => 'body',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'ds_content',
      'dynamic_field_2' => 'ds_content',
      'group_body' => 'ds_content',
      'field_library_item_tree' => 'ds_content',
      'title' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
    ),
    'limit' => array(
      'field_image_collection' => '1',
      'field_library_item_tree' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'col-sm-4' => 'col-sm-4',
        'col-xs-6' => 'col-xs-6',
      ),
      'ds_content' => array(
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|library_item|block_teaser_term'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contextual_block_title_with_icon',
        1 => 'title',
        2 => 'field_image_collection',
        3 => 'field_teaser_text',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'contextual_block_title_with_icon' => 'ds_content',
      'title' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|library_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_resizer',
        1 => 'dynamic_field_1',
        2 => 'custom_breadcrumb',
        3 => 'title',
        4 => 'field_pdf',
        5 => 'field_image_collection',
        6 => 'field_mobi',
        7 => 'field_mises_published_date',
        8 => 'field_epub',
        9 => 'group_date_author',
        10 => 'group_tags',
        11 => 'field_kindle',
        12 => 'field_author_1',
        13 => 'dynamic_field_2',
        14 => 'group_links',
        15 => 'field_author_2',
        16 => 'field_link_to_external_listing_',
        17 => 'field_subtitle',
        18 => 'tags_title',
        19 => 'body_with_media_embedded',
        20 => 'field_topics',
        21 => 'body',
        22 => 'field_bibliography_footnote',
        23 => 'field_document_attachment',
        24 => 'field_citation',
        25 => 'dynamic_3',
        26 => 'field_austrian_school',
        27 => 'follow_mises_institute',
        28 => 'group_footnotes',
      ),
      'ds_hidden' => array(
        29 => 'field_level',
        30 => 'field_media_collection',
        31 => 'field_audience',
        32 => 'field_online_text',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'dynamic_field_1' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'title' => 'ds_content',
      'field_pdf' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'field_mobi' => 'ds_content',
      'field_mises_published_date' => 'ds_content',
      'field_epub' => 'ds_content',
      'group_date_author' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_kindle' => 'ds_content',
      'field_author_1' => 'ds_content',
      'dynamic_field_2' => 'ds_content',
      'group_links' => 'ds_content',
      'field_author_2' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
      'field_subtitle' => 'ds_content',
      'tags_title' => 'ds_content',
      'body_with_media_embedded' => 'ds_content',
      'field_topics' => 'ds_content',
      'body' => 'ds_content',
      'field_bibliography_footnote' => 'ds_content',
      'field_document_attachment' => 'ds_content',
      'field_citation' => 'ds_content',
      'dynamic_3' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
      'group_footnotes' => 'ds_content',
      'field_level' => 'ds_hidden',
      'field_media_collection' => 'ds_hidden',
      'field_audience' => 'ds_hidden',
      'field_online_text' => 'ds_hidden',
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
    'page_option_title' => '%node:field-library-item-tree:0',
  );
  $export['node|library_item|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|sidebar_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'sidebar_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_heading',
        1 => 'contextual_block_title_with_icon',
        2 => 'group_panel_body',
        3 => 'field_teaser_text',
        4 => 'title',
        5 => 'body',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'group_heading' => 'ds_content',
      'contextual_block_title_with_icon' => 'ds_content',
      'group_panel_body' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|library_item|sidebar_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|simple_content';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'simple_content';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|library_item|simple_content'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_teaser_text',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|library_item|simple_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|single_term';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'single_term';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'random_term',
      ),
    ),
    'fields' => array(
      'random_term' => 'ds_content',
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
  $export['node|library_item|single_term'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|video_block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'video_block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media_collection',
        1 => 'title',
        2 => 'dynamic_field_2',
        3 => 'field_teaser_text',
        4 => 'body',
        5 => 'group_panel_body',
        6 => 'field_library_item_tree',
      ),
    ),
    'fields' => array(
      'field_media_collection' => 'ds_content',
      'title' => 'ds_content',
      'dynamic_field_2' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
      'group_panel_body' => 'ds_content',
      'field_library_item_tree' => 'ds_content',
    ),
    'limit' => array(
      'field_media_collection' => '1',
      'field_library_item_tree' => '1',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|library_item|video_block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_resizer',
        1 => 'custom_breadcrumb',
        2 => 'field_image_collection',
        3 => 'title',
        4 => 'body_with_media_embedded',
        5 => 'body',
      ),
      'ds_hidden' => array(
        6 => 'field_media_collection',
      ),
    ),
    'fields' => array(
      'text_resizer' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'title' => 'ds_content',
      'body_with_media_embedded' => 'ds_content',
      'body' => 'ds_content',
      'field_media_collection' => 'ds_hidden',
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
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|list_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'list_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_image_collection',
        2 => 'field_media_collection',
        3 => 'field_insert_after',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'field_media_collection' => 'ds_content',
      'field_insert_after' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|list_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|author_full_name';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'author_full_name';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author_full_name',
      ),
    ),
    'fields' => array(
      'author_full_name' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'span',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'span',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|person_profile|author_full_name'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_collection',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|person_profile|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'custom_breadcrumb',
        1 => 'field_image_collection',
        2 => 'title',
        3 => 'group_tags',
        4 => 'field_published_in',
        5 => 'tags_title',
        6 => 'group_contact',
        7 => 'field_award_type',
        8 => 'field_topics',
        9 => 'field_austrian_school',
        10 => 'field_quote_reference',
        11 => 'field_bio_summary',
        12 => 'field_email_link',
        13 => 'body',
        14 => 'group_details',
        15 => 'field_twitter',
        16 => 'field_facebook',
        17 => 'follow_mises_institute',
        18 => 'field_contributions',
        19 => 'field_major_works',
        20 => 'profile_author_articles',
      ),
    ),
    'fields' => array(
      'custom_breadcrumb' => 'ds_content',
      'field_image_collection' => 'ds_content',
      'title' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_published_in' => 'ds_content',
      'tags_title' => 'ds_content',
      'group_contact' => 'ds_content',
      'field_award_type' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'field_quote_reference' => 'ds_content',
      'field_bio_summary' => 'ds_content',
      'field_email_link' => 'ds_content',
      'body' => 'ds_content',
      'group_details' => 'ds_content',
      'field_twitter' => 'ds_content',
      'field_facebook' => 'ds_content',
      'follow_mises_institute' => 'ds_content',
      'field_contributions' => 'ds_content',
      'field_major_works' => 'ds_content',
      'profile_author_articles' => 'ds_content',
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
  $export['node|person_profile|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|sidebar_author';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'sidebar_author';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_collection',
      ),
      'right' => array(
        1 => 'contextual_block_title_with_icon',
        2 => 'title',
        3 => 'field_bio_summary',
        4 => 'body',
      ),
      'bottom' => array(
        5 => 'field_related_nodes',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'left',
      'contextual_block_title_with_icon' => 'right',
      'title' => 'right',
      'field_bio_summary' => 'right',
      'body' => 'right',
      'field_related_nodes' => 'bottom',
    ),
    'limit' => array(
      'field_image_collection' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        'panel' => 'panel',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-xs-8' => 'col-xs-8',
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
  $export['node|person_profile|sidebar_author'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|sidebar_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'sidebar_teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        3 => 'field_bio_summary',
      ),
      'left' => array(
        1 => 'field_image_collection',
      ),
      'header' => array(
        2 => 'contextual_block_title_with_icon',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_image_collection' => 'left',
      'contextual_block_title_with_icon' => 'header',
      'field_bio_summary' => 'right',
    ),
    'limit' => array(
      'field_image_collection' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
      'header' => array(
        'single' => 'single',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-xs-8' => 'col-xs-8',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|person_profile|sidebar_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        2 => 'field_bio_summary',
        3 => 'body',
        4 => 'node_link',
      ),
      'left' => array(
        1 => 'field_image_collection',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_image_collection' => 'left',
      'field_bio_summary' => 'right',
      'body' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-xs-4' => 'col-xs-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
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
  $export['node|person_profile|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'custom_breadcrumb',
        1 => 'course_title_linked',
        2 => 'field_topics',
        3 => 'body',
        4 => 'field_link_to_external_listing_',
      ),
    ),
    'fields' => array(
      'custom_breadcrumb' => 'ds_content',
      'course_title_linked' => 'ds_content',
      'field_topics' => 'ds_content',
      'body' => 'ds_content',
      'field_link_to_external_listing_' => 'ds_content',
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
  $export['node|product|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|simple_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'simple_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'course_title_linked',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'course_title_linked' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|product|simple_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = '2col_custom_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'course_title_linked',
        1 => 'body',
        3 => 'field_link_to_external_listing_',
      ),
      'ds_hidden' => array(
        2 => 'field_product_id',
      ),
      'left' => array(
        4 => 'field_image',
      ),
    ),
    'fields' => array(
      'course_title_linked' => 'right',
      'body' => 'right',
      'field_product_id' => 'ds_hidden',
      'field_link_to_external_listing_' => 'right',
      'field_image' => 'left',
    ),
    'classes' => array(
      'layout_class' => array(
        'row' => 'row',
      ),
      'left' => array(
        'col-sm-4' => 'col-sm-4',
      ),
      'right' => array(
        'col-sm-8' => 'col-sm-8',
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
  $export['node|product|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|working_papers|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'working_papers';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'tags_title',
        2 => 'custom_breadcrumb',
        3 => 'field_author',
        4 => 'field_link_to_paper_on_ssrn_site',
        5 => 'field_topics',
        6 => 'field_abstract',
        7 => 'field_austrian_school',
        8 => 'body',
        9 => 'group_tags',
        12 => 'follow_mises_institute',
      ),
      'ds_hidden' => array(
        10 => 'field_level',
        11 => 'field_audience',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'tags_title' => 'ds_content',
      'custom_breadcrumb' => 'ds_content',
      'field_author' => 'ds_content',
      'field_link_to_paper_on_ssrn_site' => 'ds_content',
      'field_topics' => 'ds_content',
      'field_abstract' => 'ds_content',
      'field_austrian_school' => 'ds_content',
      'body' => 'ds_content',
      'group_tags' => 'ds_content',
      'field_level' => 'ds_hidden',
      'field_audience' => 'ds_hidden',
      'follow_mises_institute' => 'ds_content',
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
    'page_option_title' => 'Working Papers',
  );
  $export['node|working_papers|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|media_type|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'media_type';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['taxonomy_term|media_type|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function display_suite_shared_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'audio_teaser';
  $ds_view_mode->label = 'Audio Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['audio_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'author_teaser';
  $ds_view_mode->label = 'Author Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['author_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_teaser';
  $ds_view_mode->label = 'Block Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['block_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_teaser_term';
  $ds_view_mode->label = 'Block Teaser w/Term';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block_teaser_term'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'list_teaser';
  $ds_view_mode->label = 'List Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['list_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sidebar_author';
  $ds_view_mode->label = 'Sidebar Author';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['sidebar_author'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sidebar_teaser';
  $ds_view_mode->label = 'Sidebar Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['sidebar_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'simple_content';
  $ds_view_mode->label = 'Simple Content';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['simple_content'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'simple_teaser';
  $ds_view_mode->label = 'Simple Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['simple_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'single_term';
  $ds_view_mode->label = 'Single Term';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['single_term'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'slideshow';
  $ds_view_mode->label = 'Slideshow';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['slideshow'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'small_player';
  $ds_view_mode->label = 'Small Player';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'file' => 'file',
  );
  $export['small_player'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'vertical_teaser';
  $ds_view_mode->label = 'Vertical Teaser';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['vertical_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'video_block_teaser';
  $ds_view_mode->label = 'Video Block Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['video_block_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'wide_player';
  $ds_view_mode->label = 'Wide Player';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'file' => 'file',
  );
  $export['wide_player'] = $ds_view_mode;

  return $export;
}
