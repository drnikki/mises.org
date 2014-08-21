<?php
/**
 * @file
 * mises_contact_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mises_contact_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_article_submission_admin_email'] = entity_import('rules_config', '{ "rules_article_submission_admin_email" : {
      "LABEL" : "Article Submission Admin Email",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "entity:type" ], "value" : "contact_us" } },
        { "data_is" : { "data" : [ "entity:field-reason-for-contact" ], "value" : "239" } }
      ],
      "DO" : [
        { "component_rules_entityform_notification_email_admin" : {
            "USING" : {
              "entity" : [ "entity" ],
              "continue" : 0,
              "email_subject" : "New Article Submission",
              "email_body" : "View this message at [site:name]: [entity:url]",
              "show_submission" : 1,
              "to_email" : "rwmcmaken@mises.org"
            },
            "PROVIDE" : { "continue" : { "article_submission_admin_email" : "Article Submission Admin Email" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
