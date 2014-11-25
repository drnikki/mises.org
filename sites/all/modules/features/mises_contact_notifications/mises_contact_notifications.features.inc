<?php
/**
 * @file
 * mises_contact_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mises_contact_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function mises_contact_notifications_eck_bundle_info() {
  $items = array(
    'reason_for_contact_reason_for_contact' => array(
      'machine_name' => 'reason_for_contact_reason_for_contact',
      'entity_type' => 'reason_for_contact',
      'name' => 'reason_for_contact',
      'label' => 'Reason for Contact',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function mises_contact_notifications_eck_entity_type_info() {
  $items = array(
    'reason_for_contact' => array(
      'name' => 'reason_for_contact',
      'label' => 'Reason for Contact',
      'properties' => array(
        'reason_for_contact' => array(
          'label' => 'Reason for Contact',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
