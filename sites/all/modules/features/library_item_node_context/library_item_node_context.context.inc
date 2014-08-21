<?php
/**
 * @file
 * library_item_node_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_item_node_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_items';
  $context->description = 'Blocks for Library Item node pages';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'library_item' => 'library_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-library_items_menu-block' => array(
          'module' => 'views',
          'delta' => 'library_items_menu-block',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-term_landing-columnist' => array(
          'module' => 'views',
          'delta' => 'term_landing-columnist',
          'region' => 'sidebar_second',
          'weight' => '-6',
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
    'theme_html' => array(
      'class' => 'test-library-item-context',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Library Item node pages');
  t('Content Types');
  $export['library_items'] = $context;

  return $export;
}
