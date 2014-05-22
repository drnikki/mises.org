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

  return $export;
}
