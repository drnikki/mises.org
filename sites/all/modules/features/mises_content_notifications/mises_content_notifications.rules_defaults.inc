<?php
/**
 * @file
 * mises_content_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mises_content_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_content_publish_notification'] = entity_import('rules_config', '{ "rules_content_publish_notification" : {
      "LABEL" : "Content Publish Notification",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "node-unchanged:status" ], "value" : "0" } },
        { "AND" : [ { "data_is" : { "data" : [ "node:status" ], "value" : "1" } } ] }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "11" : "11" } },
            "subject" : "A new [node:content-type] has been created",
            "message" : "A new [node:content-type] with the title \\u0022[node:title]\\u0022 has been created. You can view this [node:content-type] at\\r\\n[node:url]."
          }
        }
      ]
    }
  }');
  return $items;
}
