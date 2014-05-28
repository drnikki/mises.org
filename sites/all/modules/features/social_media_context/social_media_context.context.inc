<?php
/**
 * @file
 * social_media_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function social_media_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'social_media';
  $context->description = 'Theming for social media content';
  $context->tag = 'Views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'social_media_displays' => 'social_media_displays',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-social_media_displays-block' => array(
          'module' => 'views',
          'delta' => 'social_media_displays-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-social_media_displays-block_1' => array(
          'module' => 'views',
          'delta' => 'social_media_displays-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
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
  t('Theming for social media content');
  t('Views');
  $export['social_media'] = $context;

  return $export;
}
