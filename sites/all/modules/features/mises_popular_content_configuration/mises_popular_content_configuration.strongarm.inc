<?php
/**
 * @file
 * mises_popular_content_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_popular_content_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_analytics_frequency_hours';
  $strongarm->value = '1';
  $export['mises_popular_content_analytics_frequency_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_analytics_max_results';
  $strongarm->value = '30';
  $export['mises_popular_content_analytics_max_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_analytics_timespan_days';
  $strongarm->value = '30';
  $export['mises_popular_content_analytics_timespan_days'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_block_content_types';
  $strongarm->value = array(
    'library_item' => 'library_item',
    'article' => 0,
    'award' => 0,
    'blog' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'event' => 0,
    'flex_block' => 0,
    'homepage_hero' => 0,
    'page' => 0,
    'person_profile' => 0,
    'product' => 0,
  );
  $export['mises_popular_content_block_content_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_block_max_items';
  $strongarm->value = '2';
  $export['mises_popular_content_block_max_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_popular_content_block_view_mode';
  $strongarm->value = 'simple_teaser';
  $export['mises_popular_content_block_view_mode'] = $strongarm;

  return $export;
}
