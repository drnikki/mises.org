<?php
/**
 * @file
 * mises_event_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mises_event_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Academy Course',
    'description' => '',
    'format' => 'simplified',
    'weight' => 0,
    'uuid' => '10b81abf-8c69-49b1-a130-7f712c8b2cbc',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Circle',
    'description' => '',
    'format' => 'simplified',
    'weight' => 0,
    'uuid' => '123c579d-1a56-4a49-914e-ae034ded12be',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Seminar',
    'description' => '',
    'format' => 'simplified',
    'weight' => 0,
    'uuid' => '1e5dc692-c9d8-409c-8dc6-20b7ed6fb07d',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Webinar',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9c1cdf6a-f791-4b9b-94b6-e930e37e6ca8',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Lecture',
    'description' => '',
    'format' => 'simplified',
    'weight' => 0,
    'uuid' => 'd225839c-6f56-446e-8724-e6678c31410f',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e48543ca-5bdb-4bf6-a589-52181e7bbdba',
    'vocabulary_machine_name' => 'events',
    'metatags' => array(),
  );
  return $terms;
}
