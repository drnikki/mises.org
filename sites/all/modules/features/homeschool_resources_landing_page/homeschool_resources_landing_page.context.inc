<?php
/**
 * @file
 * homeschool_resources_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homeschool_resources_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homeschool';
  $context->description = '';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'homeschool-resources' => 'homeschool-resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-homeschool-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-homeschool-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
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
    'theme_html' => array(
      'class' => 'homeschool-resources',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  $export['homeschool'] = $context;

  return $export;
}
