<?php
/**
 * @file
 * facet_api_pretty_paths.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function facet_api_pretty_paths_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_apachesolr@solr';
  $strongarm->value = 1;
  $export['facetapi_pretty_paths_searcher_apachesolr@solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi_pretty_paths_searcher_apachesolr@solr_options';
  $strongarm->value = array(
    'sort_path_segments' => 1,
  );
  $export['facetapi_pretty_paths_searcher_apachesolr@solr_options'] = $strongarm;

  return $export;
}
