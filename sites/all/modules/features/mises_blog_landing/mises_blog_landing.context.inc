<?php
/**
 * @file
 * mises_blog_landing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_blog_landing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_landing';
  $context->description = 'Blocks for Blog landing page';
  $context->tag = 'Sections';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog:page' => 'blog:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-3' => array(
          'module' => 'custom_search_blocks',
          'delta' => '3',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_24' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_24',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
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
        'views-daily_landing-books' => array(
          'module' => 'views',
          'delta' => 'daily_landing-books',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
        'views-daily_landing-online_courses' => array(
          'module' => 'views',
          'delta' => 'daily_landing-online_courses',
          'region' => 'bottom_two',
          'weight' => '-10',
        ),
        'views-daily_landing-mises_weekends' => array(
          'module' => 'views',
          'delta' => 'daily_landing-mises_weekends',
          'region' => 'bottom_three',
          'weight' => '-9',
        ),
        'views-daily_landing-library_block' => array(
          'module' => 'views',
          'delta' => 'daily_landing-library_block',
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
  t('Blocks for Blog landing page');
  t('Sections');
  $export['blog_landing'] = $context;

  return $export;
}
