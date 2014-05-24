<?php
/**
 * @file
 * mises_contact_us.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mises_contact_us_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Update Contact Information',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '3c25a842-1f43-49b9-bec9-94da3c1f523d',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Website',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6469a11f-6bb7-4177-b44d-97071ac0309b',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Events',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8a009e33-a9c9-417c-933b-412eae63dcac',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Membership',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a8af70fa-5e74-4f7f-bc17-17a48ca65202',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Visiting Researcher',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b6f928f5-4624-40e1-8f6f-7f9c446df748',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Scholarships/ Internships',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ca3ce4d5-00db-457e-8a56-8f4bbf7c37e0',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Donations/ Sponsorships',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'dd02c567-128d-4ca1-9d92-d147ab24228d',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Request a Speaker',
    'description' => '',
    'format' => 'simplified',
    'weight' => 0,
    'uuid' => 'ea44e0fd-ffc4-43a5-9274-4e1637e1fa32',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ecc2c194-0b71-460e-85b9-75b2b3b71752',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Press/ Speaker',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fdcd6753-c8cc-4b58-b525-b27ffe83cecd',
    'vocabulary_machine_name' => 'reason_for_contact',
    'metatags' => array(),
  );
  return $terms;
}
