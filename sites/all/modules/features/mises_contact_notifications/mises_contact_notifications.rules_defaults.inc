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
  $items['entityform_notifications_contact_form_submission_admin'] = entity_import('rules_config', '{ "entityform_notifications_contact_form_submission_admin" : {
      "LABEL" : "Contact Form Submission Admin",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "entity_rules_entityform_submission" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "entity" : { "label" : "Entity", "type" : "entityform" },
        "continue" : { "label" : "Continue Rules", "type" : "boolean" },
        "email_subject" : { "label" : "Email Subject", "type" : "text" },
        "email_body" : { "label" : "Email Body", "type" : "text" },
        "show_submission" : { "label" : "Show Submission", "type" : "boolean" },
        "to_email" : { "label" : "To Email", "type" : "text" }
      },
      "IF" : [ { "data_is" : { "data" : [ "entity:type" ], "value" : "contact_us" } } ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "reason_for_contact",
              "id" : [ "entity:field-reason-for-contact:id" ]
            },
            "PROVIDE" : { "entity_fetched" : { "contact_reason" : "Reason for Contact" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "[contact-reason:field-contact-email-address]"
            },
            "PROVIDE" : { "variable_added" : { "contact_admin_email" : "Contact Admin Email" } }
          }
        },
        { "entity_fetch" : {
            "USING" : {
              "type" : "file",
              "id" : [ "entity:field-contact-file-upload:file:fid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "file_attachment" : "File Attachment" } }
          }
        },
        { "component_rules_entityform_notifications_email_send" : {
            "entityform" : [ "entity" ],
            "email_address" : [ "contact-admin-email" ],
            "show_submission" : [ "show-submission" ],
            "email_subject" : [ "email-subject" ],
            "email_body" : "File Attachment:  [file-attachment:url]"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "continue" ]
    }
  }');
  return $items;
}
