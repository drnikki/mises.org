<?php
/**
 * @file
 * header_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function header_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_header_ad_region';
  $context->description = 'Controls header ad region';
  $context->tag = 'Theme';
  $context->conditions = array(
    'context_var' => array(
      'values' => array(
        'mises_utility_ad_header|1' => 'mises_utility_ad_header|1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block',
          'region' => 'header_left',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_1',
          'region' => 'header_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Controls header ad region');
  t('Theme');
  $export['mises_header_ad_region'] = $context;

  return $export;
}
