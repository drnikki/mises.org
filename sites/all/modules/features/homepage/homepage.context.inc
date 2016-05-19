<?php
/**
 * @file
 * homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Blocks for home page';
  $context->tag = 'Theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'homepage' => 'homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_hero-block' => array(
          'module' => 'views',
          'delta' => 'homepage_hero-block',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_25' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_25',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_5' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'mises_utility-mailchimp_custom' => array(
          'module' => 'mises_utility',
          'delta' => 'mailchimp_custom',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for home page');
  t('Theme');
  $export['homepage'] = $context;

  return $export;
}
