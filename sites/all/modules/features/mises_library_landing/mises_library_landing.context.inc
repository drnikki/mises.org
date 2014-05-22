<?php
/**
 * @file
 * mises_library_landing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_library_landing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_landing_page';
  $context->description = 'Library Landing Page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'library' => 'library',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e3cb3430eda2c1e2dfc57e4e7881000a' => array(
          'module' => 'views',
          'delta' => 'e3cb3430eda2c1e2dfc57e4e7881000a',
          'region' => 'content',
          'weight' => '1',
        ),
        'mises_popular_content-mises_most_popular' => array(
          'module' => 'mises_popular_content',
          'delta' => 'mises_most_popular',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-term_landing-block_1' => array(
          'module' => 'views',
          'delta' => 'term_landing-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  t('Library Landing Page');
  $export['library_landing_page'] = $context;

  return $export;
}
