<?php
/**
 * @file
 * mises_book_digital_text.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function mises_book_digital_text_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'ebook';
  $file_type->label = 'Ebook';
  $file_type->description = 'Ebook files.';
  $file_type->mimetypes = array();
  $export['ebook'] = $file_type;

  return $export;
}
