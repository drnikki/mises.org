<?php
/**
 * @file
 * landing_page_library_item.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landing_page_library_item_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_item';
  $context->description = 'Also using for Columnist page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/203' => 'taxonomy/term/203',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'currents_trends' => 'currents_trends',
        'events' => 'events',
        'level' => 'level',
        'media_type' => 'media_type',
        'profile_type' => 'profile_type',
        'reading_group' => 'reading_group',
        'the_austrian_school_of_economics' => 'the_austrian_school_of_economics',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-term_landing-columnist' => array(
          'module' => 'views',
          'delta' => 'term_landing-columnist',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-term_landing-books' => array(
          'module' => 'views',
          'delta' => 'term_landing-books',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
        'views-term_landing-online_courses' => array(
          'module' => 'views',
          'delta' => 'term_landing-online_courses',
          'region' => 'bottom_two',
          'weight' => '-10',
        ),
        'views-term_landing-mises_view' => array(
          'module' => 'views',
          'delta' => 'term_landing-mises_view',
          'region' => 'bottom_three',
          'weight' => '-10',
        ),
        'views-term_landing-library_block' => array(
          'module' => 'views',
          'delta' => 'term_landing-library_block',
          'region' => 'bottom_four',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Also using for Columnist page');
  t('Landing Pages');
  $export['library_item'] = $context;

  return $export;
}
