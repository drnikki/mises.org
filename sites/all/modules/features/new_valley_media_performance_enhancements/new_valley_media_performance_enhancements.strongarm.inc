<?php
/**
 * @file
 * new_valley_media_performance_enhancements.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function new_valley_media_performance_enhancements_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cache_level';
  $strongarm->value = '3';
  $export['advagg_cache_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_combine_css_media';
  $strongarm->value = 0;
  $export['advagg_combine_css_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_core_groups';
  $strongarm->value = FALSE;
  $export['advagg_core_groups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_frequency';
  $strongarm->value = '86400';
  $export['advagg_cron_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_timestamp';
  $strongarm->value = 1411667588;
  $export['advagg_cron_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compressor';
  $strongarm->value = '2';
  $export['advagg_css_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_fix_type';
  $strongarm->value = 1;
  $export['advagg_css_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compressor';
  $strongarm->value = '0';
  $export['advagg_css_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_css_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_enabled';
  $strongarm->value = 1;
  $export['advagg_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_gzip';
  $strongarm->value = 1;
  $export['advagg_gzip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter';
  $strongarm->value = 0;
  $export['advagg_ie_css_selector_limiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter_value';
  $strongarm->value = '4095';
  $export['advagg_ie_css_selector_limiter_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compressor';
  $strongarm->value = '1';
  $export['advagg_js_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_packer';
  $strongarm->value = 0;
  $export['advagg_js_compress_packer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_fix_type';
  $strongarm->value = 1;
  $export['advagg_js_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compressor';
  $strongarm->value = '0';
  $export['advagg_js_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_js_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_missing_files_from_db_time';
  $strongarm->value = '1209600';
  $export['advagg_remove_missing_files_from_db_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_old_unused_aggregates_time';
  $strongarm->value = '3888000';
  $export['advagg_remove_old_unused_aggregates_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_use_httprl';
  $strongarm->value = FALSE;
  $export['advagg_use_httprl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_advanced_pid_file';
  $strongarm->value = '';
  $export['cdn_advanced_pid_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_advanced_synced_files_db';
  $strongarm->value = '';
  $export['cdn_advanced_synced_files_db'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping';
  $strongarm->value = 'http://cdn.mises.devmises.org';
  $export['cdn_basic_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping_https';
  $strongarm->value = '';
  $export['cdn_basic_mapping_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_auth_users_blacklist';
  $strongarm->value = 'admin*';
  $export['cdn_exception_auth_users_blacklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_drupal_path_blacklist';
  $strongarm->value = '';
  $export['cdn_exception_drupal_path_blacklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_file_path_blacklist';
  $strongarm->value = '';
  $export['cdn_exception_file_path_blacklist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_exception_file_path_whitelist';
  $strongarm->value = 'misc/*.js
modules/*.js
sites/all/themes/bootsass*';
  $export['cdn_exception_file_path_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_status';
  $strongarm->value = 0;
  $export['cdn_farfuture_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_unique_identifier_mapping';
  $strongarm->value = 'misc/*:modules/*:themes/*|drupal_version
sites/*|mtime
sites/*|.avi .m4v .mov .mp4 .wmv .flv|perpetual';
  $export['cdn_farfuture_unique_identifier_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_https_support';
  $strongarm->value = 0;
  $export['cdn_https_support'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_mode';
  $strongarm->value = 'basic';
  $export['cdn_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'CDN_PICK_SERVER_PHP_CODE_VARIABLE';
  $strongarm->value = '';
  $export['CDN_PICK_SERVER_PHP_CODE_VARIABLE'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_reverse_proxy_test';
  $strongarm->value = FALSE;
  $export['cdn_reverse_proxy_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_stats';
  $strongarm->value = 0;
  $export['cdn_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_status';
  $strongarm->value = '2';
  $export['cdn_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader';
  $strongarm->value = array(
    'enabled' => 1,
    'distance' => '100',
    'placeholder' => '',
    'loader_icon' => '0',
    'exclude' => '',
  );
  $export['lazyloader'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_captured_js';
  $strongarm->value = array(
    'misc/drupal.js' => array(
      'file_path' => 'misc/drupal.js',
      'file_name' => 'drupal.js',
      'minified_file_path' => 'sites/default/files/public/minify/drupal.min.js',
      'original_size' => 14542,
      'minified_size' => 4702,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/jquery/1.7/jquery.min.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.7/jquery.min.js',
      'file_name' => 'jquery.min.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.min.min.js',
      'original_size' => 93868,
      'minified_size' => 94000,
      'status' => TRUE,
    ),
    'misc/jquery.once.js' => array(
      'file_path' => 'misc/jquery.once.js',
      'file_name' => 'jquery.once.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.once.min.js',
      'original_size' => 2972,
      'minified_size' => 455,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/transition.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/transition.js',
      'file_name' => 'transition.js',
      'minified_file_path' => 'sites/default/files/public/minify/transition.min.js',
      'original_size' => 1535,
      'minified_size' => 676,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/affix.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/affix.js',
      'file_name' => 'affix.js',
      'minified_file_path' => 'sites/default/files/public/minify/affix.min.js',
      'original_size' => 4046,
      'minified_size' => 2683,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/alert.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/alert.js',
      'file_name' => 'alert.js',
      'minified_file_path' => 'sites/default/files/public/minify/alert.min.js',
      'original_size' => 2112,
      'minified_size' => 1142,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/button.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/button.js',
      'file_name' => 'button.js',
      'minified_file_path' => 'sites/default/files/public/minify/button.min.js',
      'original_size' => 2882,
      'minified_size' => 1703,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/carousel.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/carousel.js',
      'file_name' => 'carousel.js',
      'minified_file_path' => 'sites/default/files/public/minify/carousel.min.js',
      'original_size' => 6017,
      'minified_size' => 4245,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/collapse.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/collapse.js',
      'file_name' => 'collapse.js',
      'minified_file_path' => 'sites/default/files/public/minify/collapse.min.js',
      'original_size' => 4949,
      'minified_size' => 3412,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/dropdown.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/dropdown.js',
      'file_name' => 'dropdown.js',
      'minified_file_path' => 'sites/default/files/public/minify/dropdown.min.js',
      'original_size' => 4291,
      'minified_size' => 2751,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/modal.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/modal.js',
      'file_name' => 'modal.js',
      'minified_file_path' => 'sites/default/files/public/minify/modal.min.js',
      'original_size' => 6722,
      'minified_size' => 4597,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/tooltip.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/tooltip.js',
      'file_name' => 'tooltip.js',
      'minified_file_path' => 'sites/default/files/public/minify/tooltip.min.js',
      'original_size' => 12132,
      'minified_size' => 8552,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/popover.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/popover.js',
      'file_name' => 'popover.js',
      'minified_file_path' => 'sites/default/files/public/minify/popover.min.js',
      'original_size' => 3177,
      'minified_size' => 1862,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/scrollspy.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/scrollspy.js',
      'file_name' => 'scrollspy.js',
      'minified_file_path' => 'sites/default/files/public/minify/scrollspy.min.js',
      'original_size' => 4351,
      'minified_size' => 2772,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/bootstrap/tab.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/bootstrap/tab.js',
      'file_name' => 'tab.js',
      'minified_file_path' => 'sites/default/files/public/minify/tab.min.js',
      'original_size' => 2944,
      'minified_size' => 1728,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/solr_facet_changes.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/solr_facet_changes.js',
      'file_name' => 'solr_facet_changes.js',
      'minified_file_path' => 'sites/default/files/public/minify/solr_facet_changes.min.js',
      'original_size' => 1486,
      'minified_size' => 888,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
      'file_name' => 'jquery.ui.core.min.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.ui.core.min.min.js',
      'original_size' => 4289,
      'minified_size' => 4162,
      'status' => TRUE,
    ),
    'misc/jquery.ba-bbq.js' => array(
      'file_path' => 'misc/jquery.ba-bbq.js',
      'file_name' => 'jquery.ba-bbq.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.ba-bbq.min.js',
      'original_size' => 4117,
      'minified_size' => 3606,
      'status' => TRUE,
    ),
    'modules/overlay/overlay-parent.js' => array(
      'file_path' => 'modules/overlay/overlay-parent.js',
      'file_name' => 'overlay-parent.js',
      'minified_file_path' => 'sites/default/files/public/minify/overlay-parent.min.js',
      'original_size' => 37713,
      'minified_size' => 16119,
      'status' => TRUE,
    ),
    'sites/all/modules/development/devel/devel_krumo_path.js' => array(
      'file_path' => 'sites/all/modules/development/devel/devel_krumo_path.js',
      'file_name' => 'devel_krumo_path.js',
      'minified_file_path' => 'sites/default/files/public/minify/devel_krumo_path.min.js',
      'original_size' => 2191,
      'minified_size' => 1365,
      'status' => TRUE,
    ),
    'sites/all/modules/patched/custom_search/js/custom_search.js' => array(
      'file_path' => 'sites/all/modules/patched/custom_search/js/custom_search.js',
      'file_name' => 'custom_search.js',
      'minified_file_path' => 'sites/default/files/public/minify/custom_search.min.js',
      'original_size' => 4649,
      'minified_size' => 3006,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/field_group/field_group.js' => array(
      'file_path' => 'sites/all/modules/contrib/field_group/field_group.js',
      'file_name' => 'field_group.js',
      'minified_file_path' => 'sites/default/files/public/minify/field_group.min.js',
      'original_size' => 7786,
      'minified_size' => 4839,
      'status' => TRUE,
    ),
    'modules/contextual/contextual.js' => array(
      'file_path' => 'modules/contextual/contextual.js',
      'file_name' => 'contextual.js',
      'minified_file_path' => 'sites/default/files/public/minify/contextual.min.js',
      'original_size' => 1803,
      'minified_size' => 1114,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/google_analytics/googleanalytics.js' => array(
      'file_path' => 'sites/all/modules/contrib/google_analytics/googleanalytics.js',
      'file_name' => 'googleanalytics.js',
      'minified_file_path' => 'sites/default/files/public/minify/googleanalytics.min.js',
      'original_size' => 3410,
      'minified_size' => 1422,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/misc/jquery.nestedAccordion.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/misc/jquery.nestedAccordion.js',
      'file_name' => 'jquery.nestedAccordion.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.nestedAccordion.min.js',
      'original_size' => 15537,
      'minified_size' => 6563,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/custom.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/custom.js',
      'file_name' => 'custom.js',
      'minified_file_path' => 'sites/default/files/public/minify/custom.min.js',
      'original_size' => 7170,
      'minified_size' => 4466,
      'status' => TRUE,
    ),
    'sites/all/modules/development/admin_menu/admin_menu.js' => array(
      'file_path' => 'sites/all/modules/development/admin_menu/admin_menu.js',
      'file_name' => 'admin_menu.js',
      'minified_file_path' => 'sites/default/files/public/minify/admin_menu.min.js',
      'original_size' => 12539,
      'minified_size' => 6757,
      'status' => TRUE,
    ),
    'sites/all/modules/development/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js' => array(
      'file_path' => 'sites/all/modules/development/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
      'file_name' => 'admin_menu_toolbar.js',
      'minified_file_path' => 'sites/default/files/public/minify/admin_menu_toolbar.min.js',
      'original_size' => 1578,
      'minified_size' => 1099,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/views/js/views-contextual.js' => array(
      'file_path' => 'sites/all/modules/contrib/views/js/views-contextual.js',
      'file_name' => 'views-contextual.js',
      'minified_file_path' => 'sites/default/files/public/minify/views-contextual.min.js',
      'original_size' => 489,
      'minified_size' => 190,
      'status' => TRUE,
    ),
    'sites/all/libraries/flexslider/jquery.flexslider-min.js' => array(
      'file_path' => 'sites/all/libraries/flexslider/jquery.flexslider-min.js',
      'file_name' => 'jquery.flexslider-min.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery.flexslider-min.min.js',
      'original_size' => 21638,
      'minified_size' => 21594,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/flexslider/assets/js/flexslider.load.js' => array(
      'file_path' => 'sites/all/modules/contrib/flexslider/assets/js/flexslider.load.js',
      'file_name' => 'flexslider.load.js',
      'minified_file_path' => 'sites/default/files/public/minify/flexslider.load.min.js',
      'original_size' => 2162,
      'minified_size' => 1243,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/disqus/disqus.js' => array(
      'file_path' => 'sites/all/modules/contrib/disqus/disqus.js',
      'file_name' => 'disqus.js',
      'minified_file_path' => 'sites/default/files/public/minify/disqus.min.js',
      'original_size' => 2786,
      'minified_size' => 1541,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/views/js/base.js' => array(
      'file_path' => 'sites/all/modules/contrib/views/js/base.js',
      'file_name' => 'base.js',
      'minified_file_path' => 'sites/default/files/public/minify/base.min.js',
      'original_size' => 3086,
      'minified_size' => 1858,
      'status' => TRUE,
    ),
    'misc/progress.js' => array(
      'file_path' => 'misc/progress.js',
      'file_name' => 'progress.js',
      'minified_file_path' => 'sites/default/files/public/minify/progress.min.js',
      'original_size' => 3111,
      'minified_size' => 1627,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/js/jquery_update.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/js/jquery_update.js',
      'file_name' => 'jquery_update.js',
      'minified_file_path' => 'sites/default/files/public/minify/jquery_update.min.js',
      'original_size' => 301,
      'minified_size' => 267,
      'status' => TRUE,
    ),
    'misc/ajax.js' => array(
      'file_path' => 'misc/ajax.js',
      'file_name' => 'ajax.js',
      'minified_file_path' => 'sites/default/files/public/minify/ajax.min.js',
      'original_size' => 22743,
      'minified_size' => 9225,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
      'file_name' => 'jquery.cookie.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js' => array(
      'file_path' => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js',
      'file_name' => 'jquery.form.min.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
    'sites/all/modules/contrib/views/js/ajax_view.js' => array(
      'file_path' => 'sites/all/modules/contrib/views/js/ajax_view.js',
      'file_name' => 'ajax_view.js',
      'minified_file_path' => 'sites/default/files/public/minify/ajax_view.min.js',
      'original_size' => 4923,
      'minified_size' => 2801,
      'status' => TRUE,
    ),
    'sites/all/themes/bootsass/js/giving.js' => array(
      'file_path' => 'sites/all/themes/bootsass/js/giving.js',
      'file_name' => 'giving.js',
      'minified_file_path' => 'sites/default/files/public/minify/giving.min.js',
      'original_size' => 4933,
      'minified_size' => 3361,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/captcha/captcha.js' => array(
      'file_path' => 'sites/all/modules/contrib/captcha/captcha.js',
      'file_name' => 'captcha.js',
      'minified_file_path' => 'sites/default/files/public/minify/captcha.min.js',
      'original_size' => 1455,
      'minified_size' => 529,
      'status' => TRUE,
    ),
    'modules/file/file.js' => array(
      'file_path' => 'modules/file/file.js',
      'file_name' => 'file.js',
      'minified_file_path' => 'sites/default/files/public/minify/file.min.js',
      'original_size' => 6174,
      'minified_size' => 3186,
      'status' => TRUE,
    ),
    'misc/textarea.js' => array(
      'file_path' => 'misc/textarea.js',
      'file_name' => 'textarea.js',
      'minified_file_path' => 'sites/default/files/public/minify/textarea.min.js',
      'original_size' => 919,
      'minified_size' => 713,
      'status' => TRUE,
    ),
    'sites/all/modules/contrib/lazyloader/jquery.lazyloader.js' => array(
      'file_path' => 'sites/all/modules/contrib/lazyloader/jquery.lazyloader.js',
      'file_name' => 'jquery.lazyloader.js',
      'minified_file_path' => '',
      'original_size' => 0,
      'minified_size' => 0,
      'status' => FALSE,
    ),
  );
  $export['minify_captured_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_html';
  $strongarm->value = 1;
  $export['minify_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'minify_js';
  $strongarm->value = 1;
  $export['minify_js'] = $strongarm;

  return $export;
}
