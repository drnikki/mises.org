<?php
/**
 * @file
 * landing_page_daily.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landing_page_daily_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_daily';
  $context->description = '';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        147 => 147,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'taxonomy/term/147' => 'taxonomy/term/147',
        'taxonomy/term/203' => 'taxonomy/term/203',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block_11' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_11',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_9' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_9',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  $export['mises_daily'] = $context;

  return $export;
}
