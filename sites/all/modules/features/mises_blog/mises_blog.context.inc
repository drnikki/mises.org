<?php
/**
 * @file
 * mises_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'Blocks for Blog posts';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block_24' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_24',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-blog-block_featured' => array(
          'module' => 'views',
          'delta' => 'blog-block_featured',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog-block_popular' => array(
          'module' => 'views',
          'delta' => 'blog-block_popular',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_23' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_23',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-blog-blogger' => array(
          'module' => 'views',
          'delta' => 'blog-blogger',
          'region' => 'sidebar_second',
          'weight' => '-7',
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
    'menu' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Blog posts');
  t('Content Types');
  $export['blog'] = $context;

  return $export;
}
