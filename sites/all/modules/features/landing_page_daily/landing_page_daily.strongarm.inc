<?php
/**
 * @file
 * landing_page_daily.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landing_page_daily_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_any_force';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_any_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_any_restricts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_negative_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_criteria_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_negative_label';
  $strongarm->value = 'Containing none of the words';
  $export['custom_search_blocks_2_criteria_negative_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_negative_weight';
  $strongarm->value = '8';
  $export['custom_search_blocks_2_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_or_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_criteria_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_or_label';
  $strongarm->value = 'Containing any of the words';
  $export['custom_search_blocks_2_criteria_or_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_or_weight';
  $strongarm->value = '6';
  $export['custom_search_blocks_2_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_phrase_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_criteria_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_phrase_label';
  $strongarm->value = 'Containing the phrase';
  $export['custom_search_blocks_2_criteria_phrase_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_criteria_phrase_weight';
  $strongarm->value = '7';
  $export['custom_search_blocks_2_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_custom_paths_weight';
  $strongarm->value = '9';
  $export['custom_search_blocks_2_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_hint_text';
  $strongarm->value = 'Enter the terms you wish to search for.';
  $export['custom_search_blocks_2_hint_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_image_path';
  $strongarm->value = '';
  $export['custom_search_blocks_2_image_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_label';
  $strongarm->value = 'Search this site';
  $export['custom_search_blocks_2_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_2_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_max_length';
  $strongarm->value = '128';
  $export['custom_search_blocks_2_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_node_types';
  $strongarm->value = array(
    'award' => 0,
    'blog' => 0,
    'campaign_' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'event' => 0,
    'flex_block' => 0,
    'giving_feature_block' => 0,
    'giving_page' => 0,
    'giving_story' => 0,
    'homepage_hero' => 0,
    'institute_fellowship' => 0,
    'job_posting_' => 0,
    'landing_page' => 0,
    'library_item' => 0,
    'membership_level' => 0,
    'book_digital_text' => 0,
    'person_profile' => 0,
    'photo_gallery' => 0,
    'product' => 0,
    'scholarship_' => 0,
    'social_media' => 0,
    'page' => 0,
    'working_papers' => 0,
  );
  $export['custom_search_blocks_2_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_node_types_excluded';
  $strongarm->value = array(
    'award' => 0,
    'blog' => 0,
    'campaign_' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'event' => 0,
    'flex_block' => 0,
    'giving_feature_block' => 0,
    'giving_page' => 0,
    'giving_story' => 0,
    'homepage_hero' => 0,
    'institute_fellowship' => 0,
    'job_posting_' => 0,
    'landing_page' => 0,
    'library_item' => 0,
    'membership_level' => 0,
    'book_digital_text' => 0,
    'person_profile' => 0,
    'photo_gallery' => 0,
    'product' => 0,
    'scholarship_' => 0,
    'social_media' => 0,
    'page' => 0,
    'working_papers' => 0,
  );
  $export['custom_search_blocks_2_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_order';
  $strongarm->value = array(
    'search_box' => array(
      'sort' => '-1',
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => '6',
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => '7',
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => '8',
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => '9',
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => '10',
      'region' => 'block',
    ),
  );
  $export['custom_search_blocks_2_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_other';
  $strongarm->value = array(
    'apachesolr_search' => 0,
    'ds_search' => 0,
    'file_entity' => 0,
    'user' => 0,
  );
  $export['custom_search_blocks_2_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_paths';
  $strongarm->value = 'search/site/[key]/library/mises-daily-147';
  $export['custom_search_blocks_2_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_paths_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_2_paths_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_paths_selector_label';
  $strongarm->value = 'Customize your search';
  $export['custom_search_blocks_2_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_paths_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_2_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_search_box_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_search_box_weight';
  $strongarm->value = '-1';
  $export['custom_search_blocks_2_search_box_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_size';
  $strongarm->value = '15';
  $export['custom_search_blocks_2_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_2_submit_button_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_submit_button_weight';
  $strongarm->value = '10';
  $export['custom_search_blocks_2_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_submit_text';
  $strongarm->value = 'GO';
  $export['custom_search_blocks_2_submit_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_text';
  $strongarm->value = 'SEARCH';
  $export['custom_search_blocks_2_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_2_type_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_type_selector_all';
  $strongarm->value = '-Any-';
  $export['custom_search_blocks_2_type_selector_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_type_selector_label';
  $strongarm->value = 'Search for';
  $export['custom_search_blocks_2_type_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_2_type_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_2_type_selector_label_visibility'] = $strongarm;

  return $export;
}
