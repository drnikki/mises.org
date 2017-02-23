<?php
/**
 * @file
 * mises_generic_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_generic_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'generic_term';
  $context->description = 'Term Landing/Listing Page (except Daily)';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~taxonomy/term/147' => '~taxonomy/term/147',
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'award_type' => 'award_type',
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
    'views' => array(
      'values' => array(
        'filtered_landing_term_page:page_1' => 'filtered_landing_term_page:page_1',
        'filtered_landing_term_page:page_4' => 'filtered_landing_term_page:page_4',
        'term_landing:page' => 'term_landing:page',
        'term_landing:page_1' => 'term_landing:page_1',
        'term_landing:page_3' => 'term_landing:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-992e28a742012ae89410a14148d29704' => array(
          'module' => 'views',
          'delta' => '992e28a742012ae89410a14148d29704',
          'region' => 'featured_left',
          'weight' => '-10',
        ),
        'views-21cc4beadea09d45dea424497a8362ea' => array(
          'module' => 'views',
          'delta' => '21cc4beadea09d45dea424497a8362ea',
          'region' => 'featured_right',
          'weight' => '-10',
        ),
        'views-b92847c1cef8b9aef6b9b6126130e553' => array(
          'module' => 'views',
          'delta' => 'b92847c1cef8b9aef6b9b6126130e553',
          'region' => 'bottom_left',
          'weight' => '-10',
        ),
        'views-8983858c3f6b8a26547a648d6f12740a' => array(
          'module' => 'views',
          'delta' => '8983858c3f6b8a26547a648d6f12740a',
          'region' => 'bottom_right',
          'weight' => '-10',
        ),
        'views-term_description-block' => array(
          'module' => 'views',
          'delta' => 'term_description-block',
          'region' => 'sidebar_second_top',
          'weight' => '-9',
        ),
        'views-library_items_menu-block' => array(
          'module' => 'views',
          'delta' => 'library_items_menu-block',
          'region' => 'sidebar_second_top',
          'weight' => '-8',
        ),
        'views-a881a51cee516bce16966206118b160b' => array(
          'module' => 'views',
          'delta' => 'a881a51cee516bce16966206118b160b',
          'region' => 'sidebar_second_top',
          'weight' => '-7',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-dd8efc17b7ddc0693131e53ef4856cfd' => array(
          'module' => 'views',
          'delta' => 'dd8efc17b7ddc0693131e53ef4856cfd',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '15',
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
    'theme_html' => array(
      'class' => 'generic-term-landing',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing Pages');
  t('Term Landing/Listing Page (except Daily)');
  $export['generic_term'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'non_library_term';
  $context->description = 'Blocks for non-Library Item term/landing pages';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'award_type' => 'award_type',
        'currents_trends' => 'currents_trends',
        'events' => 'events',
        'level' => 'level',
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
        'randomblocks-non_library_item_profiles' => array(
          'module' => 'randomblocks',
          'delta' => 'non_library_item_profiles',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'non-library-item-term-landing',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for non-Library Item term/landing pages');
  t('Landing Pages');
  $export['non_library_term'] = $context;

  return $export;
}
