<?php
/**
 * @file
 * mises_autopublish_content.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mises_autopublish_content_default_rules_configuration() {
  $items = array();
  $items['rules_automatic_publish_senior_editor'] = entity_import('rules_config', '{ "rules_automatic_publish_senior_editor" : {
      "LABEL" : "Automatic publish Senior Editor",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "8" : "8" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "node_publish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}