<?php
/**
 * @file
 * mises_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_page';
  $context->description = 'Blocks for all landing pages';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~resources-economist' => '~resources-economist',
        '~resources-students' => '~resources-students',
        '~about-mises*' => '~about-mises*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '15',
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
          'weight' => '-10',
        ),
        'views-daily_landing-library_block' => array(
          'module' => 'views',
          'delta' => 'daily_landing-library_block',
          'region' => 'bottom_four',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for all landing pages');
  t('Content Types');
  $export['landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_students';
  $context->description = 'Resources for Student';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources-students' => 'resources-students',
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
        'menu-menu-student-resources' => array(
          'module' => 'menu',
          'delta' => 'menu-student-resources',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  t('Resources for Student');
  $export['resources_students'] = $context;

  return $export;
}
