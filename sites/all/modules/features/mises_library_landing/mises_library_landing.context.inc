<?php
/**
 * @file
 * mises_library_landing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_library_landing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_landing_page';
  $context->description = 'Library Landing Page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'library' => 'library',
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
          'weight' => '1',
        ),
        'views-mises_library-mises_view' => array(
          'module' => 'views',
          'delta' => 'mises_library-mises_view',
          'region' => 'bottom_left',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_14' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_14',
          'region' => 'bottom_left',
          'weight' => '-9',
        ),
        'views-mises_library-featured_video' => array(
          'module' => 'views',
          'delta' => 'mises_library-featured_video',
          'region' => 'bottom_right',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_15' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_15',
          'region' => 'bottom_right',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_12' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_12',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-library_items_menu-block' => array(
          'module' => 'views',
          'delta' => 'library_items_menu-block',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
        'menu-menu-library-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-library-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-8',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_13' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_13',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-term_landing-block_1' => array(
          'module' => 'views',
          'delta' => 'term_landing-block_1',
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
    'theme_html' => array(
      'class' => 'library-landing-page-context',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  t('Library Landing Page');
  $export['library_landing_page'] = $context;

  return $export;
}
