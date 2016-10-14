<?php
/**
 * @file
 * mises_library_item.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mises_library_item_default_rules_configuration() {
  $items = array();
  $items['rules_library_item_show_items'] = entity_import('rules_config', '{ "rules_library_item_show_items" : {
      "LABEL" : "library_item_show_items",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "ffc" ],
      "ON" : { "field_is_rendered" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "library_item" : "library_item" } }
          }
        },
        { "AND" : [
            { "data_is_empty" : { "data" : [ "node:field-pdf" ] } },
            { "data_is_empty" : { "data" : [ "node:field-mobi" ] } },
            { "data_is_empty" : { "data" : [ "node:field-epub" ] } },
            { "data_is_empty" : { "data" : [ "node:field-kindle" ] } },
            { "data_is_empty" : { "data" : [ "node:field-online-text" ] } },
            { "data_is_empty" : { "data" : [ "node:field-link-to-external-listing-" ] } }
          ]
        }
      ],
      "DO" : [
        { "ffc_rules_hide_fields" : { "ffc_element" : [ "" ], "ffc_field" : [ "" ] } }
      ]
    }
  }');
  return $items;
}
