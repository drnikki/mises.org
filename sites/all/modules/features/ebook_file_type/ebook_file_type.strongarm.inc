<?php
/**
 * @file
 * ebook_file_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ebook_file_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_alt';
  $strongarm->value = '[file:field_file_image_alt_text]';
  $export['file_entity_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv weba webp webm';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_fields';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 1;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_title';
  $strongarm->value = '[file:field_file_image_title_text]';
  $export['file_entity_title'] = $strongarm;

  return $export;
}
