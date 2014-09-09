<?php
/**
 * @file
 * display_suite_shared.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function display_suite_shared_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'F j, Y - g:i A';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, Y-m-d H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month_day_year';
  $strongarm->value = 'F j, Y';
  $export['date_format_month_day_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'Y-m-d H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_fields';
  $strongarm->value = 'well
img-responsive
img-rounded
img-circle';
  $export['ds_classes_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_classes_regions';
  $strongarm->value = 'container
row
col-sm-3
col-sm-4
col-sm-5
col-sm-6
col-sm-7
col-sm-8
col-sm-9
col-xs-3
col-xs-4
col-xs-5
col-xs-6
col-xs-7
col-xs-8
col-xs-9
col-xs-12
panel
panel-heading
panel-body
single
node-teaser';
  $export['ds_classes_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 1;
  $export['ds_extras_fields_extra'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = '';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_permissions';
  $strongarm->value = 0;
  $export['ds_extras_field_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 1;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hidden_region';
  $strongarm->value = 1;
  $export['ds_extras_hidden_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_sidebars';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_sidebars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 1;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 0;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_field';
  $strongarm->value = 0;
  $export['ds_extras_switch_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 1;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 1;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_current_filters_default';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_current_filters_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_hide_current_filters';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_hide_current_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_boost';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_boost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group_config';
  $strongarm->value = '';
  $export['ds_search_apachesolr_multisite_group_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_file_render';
  $strongarm->value = 0;
  $export['ds_search_file_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type';
  $strongarm->value = 0;
  $export['ds_search_group_by_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other';
  $strongarm->value = 'Other';
  $export['ds_search_group_by_type_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other_wrapper';
  $strongarm->value = 'fieldset';
  $export['ds_search_group_by_type_other_wrapper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_settings';
  $strongarm->value = array(
    'award' => array(
      'status' => 1,
      'label' => 'Results for award',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'blog' => array(
      'status' => 1,
      'label' => 'Results for blog',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'book_digital_text' => array(
      'status' => 1,
      'label' => 'Results for book / digital text',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'campaign_' => array(
      'status' => 1,
      'label' => 'Results for campaign',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'causeview_snippet' => array(
      'status' => 1,
      'label' => 'Results for causeview snippet',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'course' => array(
      'status' => 1,
      'label' => 'Results for course',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'document' => array(
      'status' => 1,
      'label' => 'Results for document',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'event' => array(
      'status' => 1,
      'label' => 'Results for event',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'flex_block' => array(
      'status' => 1,
      'label' => 'Results for flex block',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'giving_story' => array(
      'status' => 1,
      'label' => 'Results for giving story',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'homepage_hero' => array(
      'status' => 1,
      'label' => 'Results for homepage hero',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'institute_fellowship' => array(
      'status' => 1,
      'label' => 'Results for institute fellowship',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'job_posting_' => array(
      'status' => 1,
      'label' => 'Results for job posting',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'landing_page' => array(
      'status' => 1,
      'label' => 'Results for landing page',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'legacy_book' => array(
      'status' => 1,
      'label' => 'Results for legacy book',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'library_item' => array(
      'status' => 1,
      'label' => 'Results for library item',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'person_profile' => array(
      'status' => 1,
      'label' => 'Results for person profile',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'photo_gallery' => array(
      'status' => 1,
      'label' => 'Results for photo gallery',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'product' => array(
      'status' => 1,
      'label' => 'Results for product',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'scholarship_' => array(
      'status' => 1,
      'label' => 'Results for scholarship',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'social_media' => array(
      'status' => 1,
      'label' => 'Results for social media',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'page' => array(
      'status' => 1,
      'label' => 'Results for static page',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'webform' => array(
      'status' => 1,
      'label' => 'Results for webform',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'working_papers' => array(
      'status' => 1,
      'label' => 'Results for working papers',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
  );
  $export['ds_search_group_by_type_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight';
  $strongarm->value = 0;
  $export['ds_search_highlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight_selector';
  $strongarm->value = '.view-mode-search_result';
  $export['ds_search_highlight_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_language';
  $strongarm->value = 0;
  $export['ds_search_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_form_alter';
  $strongarm->value = 0;
  $export['ds_search_node_form_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_limit';
  $strongarm->value = '10';
  $export['ds_search_node_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_path';
  $strongarm->value = 'content';
  $export['ds_search_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_show_title';
  $strongarm->value = 0;
  $export['ds_search_show_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_type';
  $strongarm->value = 'apachesolr_search';
  $export['ds_search_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_variables';
  $strongarm->value = 'none';
  $export['ds_search_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_view_mode';
  $strongarm->value = 'teaser';
  $export['ds_search_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'small_player' => array(
        'custom_settings' => TRUE,
      ),
      'wide_player' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
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
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'small_player' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'wide_player' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
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
        'custom_settings' => TRUE,
      ),
      'small_player' => array(
        'custom_settings' => TRUE,
      ),
      'wide_player' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'small_player' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'wide_player' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_bootsass_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-theme-settings',
    'bootsass__active_tab' => 'edit-layout',
    'bootsass_breadcrumb' => '0',
    'bootsass_breadcrumb_home' => 0,
    'bootsass_breadcrumb_title' => 0,
    'bootsass_navbar_position' => 'static-top',
    'bootsass_navbar_inverse' => 1,
    'bootsass_region_well-hidden' => '',
    'bootsass_region_well-header' => '',
    'bootsass_region_well-navigation' => '',
    'bootsass_region_well-header_left' => '',
    'bootsass_region_well-header_right' => '',
    'bootsass_region_well-featured_left' => '',
    'bootsass_region_well-featured_right' => '',
    'bootsass_region_well-highlighted' => '',
    'bootsass_region_well-help' => '',
    'bootsass_region_well-content' => '',
    'bootsass_region_well-bottom_left' => '',
    'bootsass_region_well-bottom_right' => '',
    'bootsass_region_well-sidebar_first' => '',
    'bootsass_region_well-sidebar_second_top' => '',
    'bootsass_region_well-sidebar_second' => '',
    'bootsass_region_well-bottom_one' => '',
    'bootsass_region_well-bottom_two' => '',
    'bootsass_region_well-bottom_three' => '',
    'bootsass_region_well-bottom_four' => '',
    'bootsass_region_well-menu_footer_one' => '',
    'bootsass_region_well-menu_footer_two' => '',
    'bootsass_region_well-footer_left' => '',
    'bootsass_region_well-footer_center' => '',
    'bootsass_region_well-footer_right' => '',
    'bootsass_region_well-footer_bottom' => '',
    'bootsass_region_well-dashboard_main' => '',
    'bootsass_region_well-dashboard_sidebar' => '',
    'bootsass_region_well-dashboard_inactive' => '',
    'bootsass_anchors_fix' => 0,
    'bootsass_anchors_smooth_scrolling' => 0,
    'bootsass_popover_enabled' => 0,
    'bootsass_popover_animation' => 0,
    'bootsass_popover_html' => 0,
    'bootsass_popover_placement' => 'top',
    'bootsass_popover_selector' => '',
    'bootsass_popover_trigger' => array(
      'click' => 0,
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootsass_popover_title' => '',
    'bootsass_popover_content' => '',
    'bootsass_popover_delay' => '',
    'bootsass_popover_container' => '',
    'bootsass_tooltip_enabled' => 0,
    'bootsass_tooltip_descriptions' => 0,
    'bootsass_tooltip_animation' => 0,
    'bootsass_tooltip_html' => 0,
    'bootsass_tooltip_placement' => 'top',
    'bootsass_tooltip_selector' => '',
    'bootsass_tooltip_trigger' => array(
      'click' => 0,
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootsass_tooltip_delay' => '',
    'bootsass_tooltip_container' => '',
    'bootsass_rebuild_registry' => 0,
    'bootsass_toggle_jquery_error' => 0,
  );
  $export['theme_bootsass_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bootsass';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node';
  $strongarm->value = array(
    'flex_block' => 'flex_block',
    'landing_page' => 'landing_page',
    'award' => 0,
    'blog' => 0,
    'book_digital_text' => 0,
    'campaign_' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'document' => 0,
    'event' => 0,
    'giving_story' => 0,
    'homepage_hero' => 0,
    'institute_fellowship' => 0,
    'job_posting_' => 0,
    'legacy_book' => 0,
    'library_item' => 0,
    'person_profile' => 0,
    'photo_gallery' => 0,
    'product' => 0,
    'scholarship_' => 0,
    'social_media' => 0,
    'page' => 0,
    'webform' => 0,
    'working_papers' => 0,
  );
  $export['uuid_features_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'reading_group' => 'reading_group',
    'currents_trends' => 'currents_trends',
    'the_austrian_school_of_economics' => 'the_austrian_school_of_economics',
    'level' => 'level',
    'media_type' => 'media_type',
    'profile_type' => 'profile_type',
    'award_type' => 0,
    'events' => 0,
    'reason_for_contact' => 0,
    'tags' => 0,
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_assets_path';
  $strongarm->value = '';
  $export['uuid_features_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_mode';
  $strongarm->value = 'inline';
  $export['uuid_features_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node';
  $strongarm->value = array(
    'flex_block' => 'flex_block',
    'landing_page' => 'landing_page',
    'award' => 0,
    'blog' => 0,
    'book_digital_text' => 0,
    'campaign_' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'document' => 0,
    'event' => 0,
    'giving_story' => 0,
    'homepage_hero' => 0,
    'institute_fellowship' => 0,
    'job_posting_' => 0,
    'legacy_book' => 0,
    'library_item' => 0,
    'person_profile' => 0,
    'photo_gallery' => 0,
    'product' => 0,
    'scholarship_' => 0,
    'social_media' => 0,
    'page' => 0,
    'webform' => 0,
    'working_papers' => 0,
  );
  $export['uuid_features_file_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['uuid_features_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'reading_group' => 0,
    'currents_trends' => 0,
    'the_austrian_school_of_economics' => 0,
    'level' => 0,
    'media_type' => 0,
    'profile_type' => 0,
    'award_type' => 0,
    'events' => 0,
    'reason_for_contact' => 0,
    'tags' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_vocabulary_terms';
  $strongarm->value = 0;
  $export['uuid_features_vocabulary_terms'] = $strongarm;

  return $export;
}
