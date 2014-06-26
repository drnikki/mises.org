<?php
/**
 * @file
 * mises_person_profile_node_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_person_profile_node_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'person_profile';
  $context->description = 'Blocks for Person Profile node pages';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person_profile' => 'person_profile',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-author_articles-block_1' => array(
          'module' => 'views',
          'delta' => 'author_articles-block_1',
          'region' => 'sidebar_second',
          'weight' => '-90',
        ),
        'views-faaeb062562ec6d9c97848d39a52d510' => array(
          'module' => 'views',
          'delta' => 'faaeb062562ec6d9c97848d39a52d510',
          'region' => 'sidebar_second',
          'weight' => '-89',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '-88',
        ),
        'views-related_blocks_node-topics' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-topics',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
        'views-related_blocks_node-level' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-level',
          'region' => 'bottom_two',
          'weight' => '-10',
        ),
        'views-related_blocks_node-audience' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-audience',
          'region' => 'bottom_three',
          'weight' => '-10',
        ),
        'views-related_blocks_node-courses' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-courses',
          'region' => 'bottom_four',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Person Profile node pages');
  t('Content Types');
  $export['person_profile'] = $context;

  return $export;
}
