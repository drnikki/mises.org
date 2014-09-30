<?php
/**
 * @file
 * mises_book_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mises_book_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'book_chapter-book_chapter-field_book_chapter_content'
  $field_instances['book_chapter-book_chapter-field_book_chapter_content'] = array(
    'bundle' => 'book_chapter',
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
    'entity_type' => 'book_chapter',
    'field_name' => 'field_book_chapter_content',
    'label' => 'Chapter Content',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'book_chapter-book_chapter-field_book_pages'
  $field_instances['book_chapter-book_chapter-field_book_pages'] = array(
    'bundle' => 'book_chapter',
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
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'book_chapter',
    'field_name' => 'field_book_pages',
    'label' => 'Pages',
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
          'allow_existing' => 0,
          'delete_references' => 1,
          'label_plural' => 'pages',
          'label_singular' => 'page',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'book_page-book_page-field_book_page_content'
  $field_instances['book_page-book_page-field_book_page_content'] = array(
    'bundle' => 'book_page',
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
    'entity_type' => 'book_page',
    'field_name' => 'field_book_page_content',
    'label' => 'Page Content',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-book_digital_text-field_referencing_library_item'
  $field_instances['node-book_digital_text-field_referencing_library_item'] = array(
    'bundle' => 'book_digital_text',
    'default_value' => array(
      0 => array(
        'vname' => 'book_content_backlink|block',
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
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'viewfield_default',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'simple_teaser' => array(
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
    'field_name' => 'field_referencing_library_item',
    'label' => 'Referencing Library Item',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(
        'areas_to_support' => 0,
        'austrian_economists' => 0,
        'author_articles' => 0,
        'blog' => 0,
        'book_content' => 0,
        'book_content_backlink' => 0,
        'content_type' => 0,
        'daily_landing' => 0,
        'entity_ref_filters' => 0,
        'entityform_type_list' => 0,
        'entityforms' => 0,
        'featured_latest_content' => 0,
        'featured_timely_posts' => 0,
        'flex_blocks' => 0,
        'flex_blocks_node_specific' => 0,
        'flex_blocks_term_specific' => 0,
        'giving_feature_blocks' => 0,
        'giving_flex_blocks' => 0,
        'giving_stories' => 0,
        'homepage' => 0,
        'homepage_hero' => 0,
        'job_postings' => 0,
        'library_items_menu' => 0,
        'lipsom_content' => 0,
        'list_node_page_titles' => 0,
        'media_default' => 0,
        'membership_levels' => 0,
        'menu_footer_blocks' => 0,
        'mises_calendar' => 0,
        'mises_events' => 0,
        'mises_itunes_rss_feeds' => 0,
        'mises_library' => 0,
        'mises_newsletter_subscribe' => 0,
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
        'upcoming_courses' => 0,
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
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Chapter Content');
  t('Page Content');
  t('Pages');
  t('Referencing Library Item');

  return $field_instances;
}
