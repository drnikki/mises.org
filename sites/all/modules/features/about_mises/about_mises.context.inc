<?php
/**
 * @file
 * about_mises.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function about_mises_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_mises';
  $context->description = 'Context and blocks for About Mises section (based on path)';
  $context->tag = 'Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-mises' => 'about-mises',
        'about-mises*' => 'about-mises*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-about-mises-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-about-mises-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_20' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_20',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_21' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_21',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-homepage-learn' => array(
          'module' => 'views',
          'delta' => 'homepage-learn',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-homepage-academy_course' => array(
          'module' => 'views',
          'delta' => 'homepage-academy_course',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'mailchimp_lists-mailchimp' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'mailchimp',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-7203e170e5e3e93b68848901695fed93' => array(
          'module' => 'views',
          'delta' => '7203e170e5e3e93b68848901695fed93',
          'region' => 'sidebar_second',
          'weight' => '-6',
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
        'views-daily_landing-mises_view' => array(
          'module' => 'views',
          'delta' => 'daily_landing-mises_view',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context and blocks for About Mises section (based on path)');
  t('Sections');
  $export['about_mises'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_mises_landing';
  $context->description = 'Content block for About Mises landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-mises' => 'about-mises',
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
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content block for About Mises landing page');
  t('Landing Pages');
  $export['about_mises_landing'] = $context;

  return $export;
}
