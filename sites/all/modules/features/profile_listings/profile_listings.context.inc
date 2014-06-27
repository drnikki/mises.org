<?php
/**
 * @file
 * profile_listings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function profile_listings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directory';
  $context->description = 'Sidebar blocks for Profile Listing pages';
  $context->tag = 'Sections';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'profile_lists' => 'profile_lists',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'menu-menu-about-mises-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-about-mises-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');
  t('Sidebar blocks for Profile Listing pages');
  $export['directory'] = $context;

  return $export;
}
