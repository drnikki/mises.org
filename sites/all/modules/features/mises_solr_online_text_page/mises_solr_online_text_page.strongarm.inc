<?php
/**
 * @file
 * mises_solr_online_text_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_solr_online_text_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_solr_online_text_page';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_solr_online_text_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__solr_online_text_chapter';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '4',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_solr_online_text_chapter';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_solr_online_text_chapter';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_solr_online_text_chapter';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_solr_online_text_chapter';
  $strongarm->value = '0';
  $export['node_preview_solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_solr_online_text_chapter';
  $strongarm->value = 0;
  $export['node_submitted_solr_online_text_chapter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_solr_online_text_page';
  $strongarm->value = '';
  $export['page_title_type_solr_online_text_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_solr_online_text_page_showfield';
  $strongarm->value = 0;
  $export['page_title_type_solr_online_text_page_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_solr_online_text_page';
  $strongarm->value = '0';
  $export['weight_default_solr_online_text_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_enabled_solr_online_text_page';
  $strongarm->value = '0';
  $export['weight_enabled_solr_online_text_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_solr_online_text_page';
  $strongarm->value = '0';
  $export['weight_menu_solr_online_text_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_range_solr_online_text_page';
  $strongarm->value = '20';
  $export['weight_range_solr_online_text_page'] = $strongarm;

  return $export;
}
