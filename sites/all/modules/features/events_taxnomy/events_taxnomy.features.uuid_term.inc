<?php
/**
 * @file
 * events_taxnomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function events_taxnomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Webinar',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c1cdf6a-f791-4b9b-94b6-e930e37e6ca8',
    'vocabulary_machine_name' => 'events',
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e48543ca-5bdb-4bf6-a589-52181e7bbdba',
    'vocabulary_machine_name' => 'events',
  );
  return $terms;
}
