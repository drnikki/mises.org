<?php
/**
 * @file
 * mises_solr_clicks_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_solr_clicks_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_solr_clicks_analytics_frequency_hours';
  $strongarm->value = '12';
  $export['mises_solr_clicks_analytics_frequency_hours'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_solr_clicks_analytics_max_results';
  $strongarm->value = '325';
  $export['mises_solr_clicks_analytics_max_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_solr_clicks_analytics_timespan_days';
  $strongarm->value = '91';
  $export['mises_solr_clicks_analytics_timespan_days'] = $strongarm;

  return $export;
}
