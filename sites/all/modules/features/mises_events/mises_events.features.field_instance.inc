<?php
/**
 * @file
 * mises_events.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mises_events_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-field_audience'
  $field_instances['node-event-field_audience'] = array(
    'bundle' => 'event',
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
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_audience',
    'label' => 'Audience',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-event-field_austrian_school'
  $field_instances['node-event-field_austrian_school'] = array(
    'bundle' => 'event',
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
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_austrian_school',
    'label' => 'Austrian School',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-event-field_causeview_form_reg_link'
  $field_instances['node-event-field_causeview_form_reg_link'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'vname' => 'mises_event_helper|form_link_btn',
        'vargs' => '[node:nid]',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'viewfield_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'viewfield_default',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_causeview_form_reg_link',
    'label' => 'Causeview Form Reg Link',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'areas_to_support' => 0,
        'austrian_economists' => 0,
        'author_articles' => 0,
        'blog' => 0,
        'book_content' => 0,
        'book_content_backlink' => 0,
        'content_date_test' => 0,
        'content_type' => 0,
        'daily_landing' => 0,
        'entity_ref_filters' => 0,
        'entityform_type_list' => 0,
        'entityforms' => 0,
        'featured_latest_content' => 0,
        'featured_timely_posts' => 0,
        'files_management' => 0,
        'flex_blocks' => 0,
        'flex_blocks_node_specific' => 0,
        'flex_blocks_term_specific' => 0,
        'giving_feature_blocks' => 0,
        'giving_flex_blocks' => 0,
        'giving_stories' => 0,
        'homepage' => 0,
        'homepage_hero' => 0,
        'image_source' => 0,
        'job_postings' => 0,
        'library_items_menu' => 0,
        'lipsom_content' => 0,
        'list_node_page_titles' => 0,
        'mailchimp' => 0,
        'media_default' => 0,
        'membership_levels' => 0,
        'menu_footer_blocks' => 0,
        'mises_calendar' => 0,
        'mises_content_admin' => 0,
        'mises_event_helper' => 'mises_event_helper',
        'mises_events' => 0,
        'mises_itunes_rss_feeds' => 0,
        'mises_library' => 0,
        'mises_newsletter_subscribe' => 0,
        'mises_solr_authors' => 0,
        'mises_solr_clicks_report' => 0,
        'nodequeue_1' => 0,
        'nodequeue_2' => 0,
        'nodequeue_3' => 0,
        'nodequeue_4' => 0,
        'nodequeue_6' => 0,
        'nodequeue_7' => 0,
        'nodequeue_8' => 0,
        'nodequeue_9' => 0,
        'nodequeue_10' => 0,
        'nodequeue_11' => 0,
        'nodequeue_13' => 0,
        'person_profile_major_works' => 0,
        'person_profile_sig_contrib' => 0,
        'photo_album' => 0,
        'pre_recorded_topics' => 0,
        'profile_blocks' => 0,
        'profile_lists' => 0,
        'profile_reference' => 0,
        'related_blocks_node' => 0,
        'rss_feed' => 0,
        'social_media_displays' => 0,
        'teaser_demo' => 0,
        'term_description' => 0,
        'term_entity_ref' => 0,
        'term_landing' => 0,
        'tmp_nvm_test' => 0,
        'tweets' => 0,
        'upcoming_courses' => 0,
        'user_content' => 0,
        'user_entityforms' => 0,
        'weight' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-event-field_description'
  $field_instances['node-event-field_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'conditions' => array(),
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 240,
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'simplified' => 'simplified',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simplified' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_event_date'
  $field_instances['node-event-field_event_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'addtocal',
        'settings' => array(
          'conditions' => array(),
          'description' => array(
            'field' => 'tokenize output',
            'tokenized' => '[node:field_description]',
          ),
          'description_field' => -1,
          'description_tokenized' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'location' => array(
            'field' => 'tokenize output',
            'tokenized' => '[node:field-event-location]',
          ),
          'location_field' => -1,
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'past_events' => 0,
        ),
        'type' => 'addtocal_view',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'month_day_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1982:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_event_location'
  $field_instances['node-event-field_event_location'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'simplified' => 'simplified',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simplified' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_event_type'
  $field_instances['node-event-field_event_type'] = array(
    'bundle' => 'event',
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
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_type',
    'label' => 'Event Type',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_featured_content'
  $field_instances['node-event-field_featured_content'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_featured_content',
    'label' => 'Featured',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-event-field_image'
  $field_instances['node-event-field_image'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'full',
        ),
        'type' => 'file_rendered',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'full',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => 'list_teaser',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Event Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_level'
  $field_instances['node-event-field_level'] = array(
    'bundle' => 'event',
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
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_level',
    'label' => 'Level',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-event-field_live_feed'
  $field_instances['node-event-field_live_feed'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Will this event have a live feed? If so, the video embed field will appear below after you select "Yes."',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_live_feed',
    'label' => 'Live Feed',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-field_media_collection'
  $field_instances['node-event-field_media_collection'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'conditions' => array(),
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'wide_player',
        ),
        'type' => 'field_collection_fields',
        'weight' => 10,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'conditions' => array(),
          'view_mode' => 'wide_player',
        ),
        'type' => 'field_collection_fields',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_media_collection',
    'label' => 'YouTube Embed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_public_private'
  $field_instances['node-event-field_public_private'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 'public',
      ),
    ),
    'deleted' => 0,
    'description' => 'Indicate where this event is public or private. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_public_private',
    'label' => 'Public/Private',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-event-field_registration_link'
  $field_instances['node-event-field_registration_link'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<h3>Content Creators:</h3>
<ul><li>To add a Causeview form on this page, select "Add existing Causeview form," then start typing the title of the form. A list of matching forms will appear. Select the form you wish to use.</li>
<li>To replace an existing Causeview form, first click the "Remove" button next to the title of the form below. Then add a new one as described above.</li>
</ul>
<h3>Senior Editors:</h3>
<p>You have the option to use an existing Causeview forms or add a new one:</p>
<ul><li>To use an existing Causeview form, follow the instructions for Content Creators above.</li>
<li>To update an an existing Causeview form, click "Edit" next to the form title, then edit as needed.  <b>NOTE! Any changes you make in the Code Snippet field will apply to all uses of that form!</b></li>
<li>To create a new Causeview form, select "Add new Causeview form." Fill in the title, enter the code snippet provided by Causeview, set status to "Published" and click "Create Causeview form."</li>
</ul>
<p> </p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_no_string',
              'configuration' => array(
                'string' => 'onsite',
                'target' => 'field_registration_type',
              ),
            ),
          ),
          'links' => 0,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_no_string',
              'configuration' => array(
                'string' => 'onsite',
                'target' => 'field_registration_type',
              ),
            ),
          ),
          'links' => 0,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_registration_link',
    'label' => 'Registration Form',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'Causeview forms',
          'label_singular' => 'Causeview form',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-event-field_registration_link_external'
  $field_instances['node-event-field_registration_link_external'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_no_string',
              'configuration' => array(
                'string' => 'offsite',
                'target' => 'field_registration_type',
              ),
            ),
          ),
        ),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_no_string',
              'configuration' => array(
                'string' => 'offsite',
                'target' => 'field_registration_type',
              ),
            ),
          ),
        ),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_registration_link_external',
    'label' => 'Registration Link (External)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-event-field_registration_type'
  $field_instances['node-event-field_registration_type'] = array(
    'bundle' => 'event',
    'default_value' => array(
      0 => array(
        'value' => 'none',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select how the user can register for this event. Based on the type selected, the appropriate field will appear.

Select "No registration or past event" to hide the registration embed or link field.

',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_registration_type',
    'label' => 'Registration Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-event-field_social_media_image'
  $field_instances['node-event-field_social_media_image'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Upload an image to be used for social media shares. Recommended size: 1200px X 1200px.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_social_media_image',
    'label' => 'Social Media Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
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
        ),
      ),
      'type' => 'media_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_topics'
  $field_instances['node-event-field_topics'] = array(
    'bundle' => 'event',
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
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 50,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<h3>Content Creators:</h3>
<ul><li>To add a Causeview form on this page, select "Add existing Causeview form," then start typing the title of the form. A list of matching forms will appear. Select the form you wish to use.</li>
<li>To replace an existing Causeview form, first click the "Remove" button next to the title of the form below. Then add a new one as described above.</li>
</ul>
<h3>Senior Editors:</h3>
<p>You have the option to use an existing Causeview forms or add a new one:</p>
<ul><li>To use an existing Causeview form, follow the instructions for Content Creators above.</li>
<li>To update an an existing Causeview form, click "Edit" next to the form title, then edit as needed.  <b>NOTE! Any changes you make in the Code Snippet field will apply to all uses of that form!</b></li>
<li>To create a new Causeview form, select "Add new Causeview form." Fill in the title, enter the code snippet provided by Causeview, set status to "Published" and click "Create Causeview form."</li>
</ul>
<p> </p>');
  t('Audience');
  t('Austrian School');
  t('Causeview Form Reg Link');
  t('Date');
  t('Description');
  t('Event Image');
  t('Event Type');
  t('Featured');
  t('Indicate where this event is public or private. ');
  t('Level');
  t('Live Feed');
  t('Location');
  t('Public/Private');
  t('Registration Form');
  t('Registration Link (External)');
  t('Registration Type');
  t('Select how the user can register for this event. Based on the type selected, the appropriate field will appear.

Select "No registration or past event" to hide the registration embed or link field.

');
  t('Social Media Image');
  t('Topics');
  t('Upload an image to be used for social media shares. Recommended size: 1200px X 1200px.');
  t('Will this event have a live feed? If so, the video embed field will appear below after you select "Yes."');
  t('YouTube Embed');

  return $field_instances;
}
