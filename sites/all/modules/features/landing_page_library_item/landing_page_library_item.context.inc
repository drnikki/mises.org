<?php
/**
 * @file
 * landing_page_library_item.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landing_page_library_item_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_item';
  $context->description = 'Blocks for Library Item term/landing pages except Daily';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~taxonomy/term/147' => '~taxonomy/term/147',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'media_type' => 'media_type',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'menu' => 'node/786',
    'theme_html' => array(
      'class' => 'library-item-term-landing',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Library Item term/landing pages except Daily');
  t('Landing Pages');
  $export['library_item'] = $context;

  return $export;
}
