<?php
/**
 * @file
 * homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Blocks for home page';
  $context->tag = 'Theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'homepage' => 'homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_hero-block' => array(
          'module' => 'views',
          'delta' => 'homepage_hero-block',
          'region' => 'featured_left',
          'weight' => '-10',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'featured_right',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_25' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_25',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_5' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-new-to-mises' => array(
          'module' => 'menu',
          'delta' => 'menu-new-to-mises',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-homepage-press_room' => array(
          'module' => 'views',
          'delta' => 'homepage-press_room',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
        'views-homepage-online_courses' => array(
          'module' => 'views',
          'delta' => 'homepage-online_courses',
          'region' => 'bottom_two',
          'weight' => '-10',
        ),
        'views-homepage-mises_weekends' => array(
          'module' => 'views',
          'delta' => 'homepage-mises_weekends',
          'region' => 'bottom_three',
          'weight' => '-10',
        ),
        'views-homepage-library_block' => array(
          'module' => 'views',
          'delta' => 'homepage-library_block',
          'region' => 'bottom_four',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for home page');
  t('Theme');
  $export['homepage'] = $context;

  return $export;
}
