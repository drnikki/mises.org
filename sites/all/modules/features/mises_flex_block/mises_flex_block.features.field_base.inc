<?php
/**
 * @file
 * mises_flex_block.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mises_flex_block_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_display_title'.
  $field_bases['field_display_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_display_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_on_page'.
  $field_bases['field_on_page'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_on_page',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'blog' => 'blog',
          'book_digital_text' => 'book_digital_text',
          'campaign_' => 'campaign_',
          'course' => 'course',
          'event' => 'event',
          'giving_page' => 'giving_page',
          'giving_story' => 'giving_story',
          'job_posting_' => 'job_posting_',
          'landing_page' => 'landing_page',
          'library_item' => 'library_item',
          'membership_level' => 'membership_level',
          'page' => 'page',
          'person_profile' => 'person_profile',
          'working_papers' => 'working_papers',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_region'.
  $field_bases['field_region'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_region',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'top_left' => 'Top Left Ad',
        'top_right' => 'Top Right Ad',
        'nav' => 'Nav Bar',
        'featured_left' => 'Featured Left (Homepage Hero region)',
        'featured_right' => 'Featured Right (Audience menu region)',
        'right_top' => 'Top Right Sidebar',
        'right' => 'Right Sidebar',
        'bottom_left' => 'Content Bottom Left',
        'bottom_right' => 'Content Bottom Right',
        'footer_right' => 'Footer Right',
        'footer_bottom' => 'Footer Bottom',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_section'.
  $field_bases['field_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'sitewide' => 'Sitewide',
        'home' => 'Homepage',
        'inside' => 'Inside / Not Home',
        'about' => 'About Mises',
        'library' => 'Library',
        'daily' => 'Daily',
        'blog' => 'Blog',
        'press' => 'Press',
        'economist' => 'Resources for the Economist',
        'giving_home' => 'Giving Section',
        'term' => 'Term/Category page (select below; used for term/category descriptions)',
        'node' => 'Place only on the specific page(s) below',
        'wire' => 'Wire',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_term_page'.
  $field_bases['field_term_page'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_term_page',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'award_type' => 'award_type',
          'currents_trends' => 'currents_trends',
          'events' => 'events',
          'level' => 'level',
          'media_type' => 'media_type',
          'profile_type' => 'profile_type',
          'reading_group' => 'reading_group',
          'the_austrian_school_of_economics' => 'the_austrian_school_of_economics',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_weight'.
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
