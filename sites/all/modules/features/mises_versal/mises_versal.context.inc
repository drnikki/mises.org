<?php
/**
 * @file
 * mises_versal.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_versal_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_versal';
  $context->description = '';
  $context->tag = 'Courses';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:19:{s:4:"node";s:4:"node";s:12:"book_chapter";i:0;s:9:"book_page";i:0;s:18:"reason_for_contact";i:0;s:10:"entityform";i:0;s:15:"entityform_type";i:0;s:19:"entity_rule_setting";i:0;s:21:"field_collection_item";i:0;s:8:"redirect";i:0;s:17:"search_api_server";i:0;s:16:"search_api_index";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:15:"wysiwyg_profile";i:0;s:8:"ds_views";i:0;s:12:"rules_config";i:0;s:9:"menu_link";i:0;}',
        'field_name' => 'field_versal_course',
        'field_value' => '1',
        'field_empty' => 0,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Courses');
  $export['mises_versal'] = $context;

  return $export;
}
