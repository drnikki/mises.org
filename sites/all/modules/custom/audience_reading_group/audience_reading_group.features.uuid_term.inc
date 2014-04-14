<?php
/**
 * @file
 * audience_reading_group.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function audience_reading_group_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Economist',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '3e0e7890-605d-4bf4-85c6-dbe0d643cfcb',
    'vocabulary_machine_name' => 'reading_group',
  );
  $terms[] = array(
    'name' => 'Press Room',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5b691658-3714-490e-aacc-336309d096a4',
    'vocabulary_machine_name' => 'reading_group',
  );
  $terms[] = array(
    'name' => 'Austrian Economics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '77a46036-5d3e-472e-bab7-20000bb1e8c9',
    'vocabulary_machine_name' => 'reading_group',
  );
  $terms[] = array(
    'name' => 'Homeschool Resource',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'caad2632-f9ab-44a9-b09d-915ce9367368',
    'vocabulary_machine_name' => 'reading_group',
  );
  return $terms;
}
