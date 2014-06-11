<?php
/**
 * @file
 * profile_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function profile_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Speakers Bureau',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0b8f441e-eb0f-4644-93b3-29f88f298cfa',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Faculty',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '67a11ee5-f902-4dad-9826-9fd0b7b6e36d',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scholar',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '70a8d746-5585-40cf-a430-1d8a8991dfda',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Author',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '86555520-8f35-407d-a040-127e007034b1',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Blogger',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a92455ac-bcd8-4ed5-ac4a-8254df5d2b8d',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Columnist',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cc66772a-4c5b-438d-8f6b-c231b86f0e44',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Biography',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'cf966fde-5bf4-47aa-b4f9-c2d0f102fe01',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Fellow',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6165a17-6c2c-44e5-8d8c-73f1431c7634',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Staff',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f6f1bfdf-f21d-4f22-83cd-1c8557c334fe',
    'vocabulary_machine_name' => 'profile_type',
    'metatags' => array(),
  );
  return $terms;
}
