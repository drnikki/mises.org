<?php
/**
 * @file
 * mises_book_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_book_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book_content';
  $context->description = '';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'book_digital_text' => 'book_digital_text',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-book_content-book_content_toc' => array(
          'module' => 'views',
          'delta' => 'book_content-book_content_toc',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Types');
  $export['book_content'] = $context;

  return $export;
}
