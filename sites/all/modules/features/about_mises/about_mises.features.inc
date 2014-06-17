<?php
/**
 * @file
 * about_mises.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function about_mises_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function about_mises_default_mailchimp_list() {
  $items = array();
  $items['mailchimp'] = entity_import('mailchimp_list', '{
    "name" : "mailchimp",
    "mc_list_id" : "4f6f6f32a9",
    "label" : "Mailchimp",
    "description" : "",
    "settings" : {
      "roles" : { "2" : 2, "1" : 1 },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "form_label" : "Test email list",
      "submit_label" : "Submit",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
