<?php
/**
 * @file
 * mises_social_widgets.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function mises_social_widgets_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'email_link';
  $ds_field->label = 'Email Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="email-link" class="node-widget"><p><a target="_blank" href="/printmail/[node:nid]" title="Email"><span class="glyphicon glyphicon-email"></span></a></p></div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['email_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'print_link';
  $ds_field->label = 'Print Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="printer-link" class="node-widget"><p><a target="_blank" class="print" href="/print/[node:nid]" title="Print"><span class="glyphicon glyphicon-print"></span></a></p></div>',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['print_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'social_widget';
  $ds_field->label = 'Social Share Widget';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'widgets|s_addthis-share',
    'block_render' => '3',
  );
  $export['social_widget'] = $ds_field;

  return $export;
}
