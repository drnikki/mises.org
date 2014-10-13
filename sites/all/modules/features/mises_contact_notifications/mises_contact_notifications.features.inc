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
 * Implements hook_default_entity_rule_setting().
 */
function mises_contact_notifications_default_entity_rule_setting() {
  $items = array();
  $items['2'] = entity_import('entity_rule_setting', '{
    "id" : "2",
    "entity_type" : "entityform",
    "bundle" : "contact_us",
    "op" : "entityform_submission",
    "rules_config" : "rules_article_submission_admin_email",
    "weight" : "0",
    "args" : null,
    "false_msg" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
