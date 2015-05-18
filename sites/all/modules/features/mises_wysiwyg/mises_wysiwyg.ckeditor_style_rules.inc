<?php
/**
 * @file
 * mises_wysiwyg.ckeditor_style_rules.inc
 */

/**
 * Implements hook_ckeditor_style_rule_default().
 */
function mises_wysiwyg_ckeditor_style_rule_default() {
  $export = array();

  $ckeditor_style_rule = new stdClass();
  $ckeditor_style_rule->disabled = FALSE; /* Edit this to true to make a default ckeditor_style_rule disabled initially */
  $ckeditor_style_rule->api_version = 1;
  $ckeditor_style_rule->rid = '1';
  $ckeditor_style_rule->name = 'Hanging Indent';
  $ckeditor_style_rule->machine_name = 'hanging_indent';
  $ckeditor_style_rule->styleset = '-all-';
  $ckeditor_style_rule->description = 'Hanging Indent';
  $ckeditor_style_rule->element = 'div';
  $ckeditor_style_rule->attributes = array(
    'class' => 'footnote_indent',
    'style' => 'padding-left: 22px;text-indent:22px;',
  );
  $export['hanging_indent'] = $ckeditor_style_rule;

  return $export;
}
