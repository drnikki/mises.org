<?php
/**
 * @file
 * resources_for_economist.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function resources_for_economist_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'economist_resources';
  $context->description = 'Blocks for Economist Resources landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources-economist' => 'resources-economist',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-economist-resources-sub-men' => array(
          'module' => 'menu',
          'delta' => 'menu-economist-resources-sub-men',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_18' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_18',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_19' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_19',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-job_postings-job_postings' => array(
          'module' => 'views',
          'delta' => 'job_postings-job_postings',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-profile_blocks-faculty' => array(
          'module' => 'views',
          'delta' => 'profile_blocks-faculty',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Economist Resources landing page');
  t('Landing Pages');
  $export['economist_resources'] = $context;

  return $export;
}
