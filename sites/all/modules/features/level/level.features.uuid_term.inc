<?php
/**
 * @file
 * level.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function level_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Advanced',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => -1,
    'uuid' => '01692385-76d1-4859-abd3-7f2de8103fbd',
    'vocabulary_machine_name' => 'level',
  );
  $terms[] = array(
    'name' => 'Introductory',
    'description' => NULL,
    'format' => NULL,
    'weight' => -2,
    'uuid' => '6abfa0ed-1a4b-4661-9e8e-aef80bdab866',
    'vocabulary_machine_name' => 'level',
  );
  return $terms;
}
