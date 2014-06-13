<?php
/**
 * @file
 * mises_person_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_person_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mises_person_profile_node_info() {
  $items = array(
    'person_profile' => array(
      'name' => t('Person Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => t('Enter complete name in Full Name field. First Name and Last Name fields are used in searches and filters, so both fields are also required.'),
    ),
  );
  return $items;
}
