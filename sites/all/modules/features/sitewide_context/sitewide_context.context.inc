<?php
/**
 * @file
 * sitewide_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sitewide_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'non_front';
  $context->description = 'Primarily for footer on inside pages';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-menu_footer_blocks-block' => array(
          'module' => 'views',
          'delta' => 'menu_footer_blocks-block',
          'region' => 'menu_footer_one',
          'weight' => '-9',
        ),
        'views-menu_footer_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'menu_footer_blocks-block_1',
          'region' => 'menu_footer_two',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Primarily for footer on inside pages');
  t('sitewide');
  $export['non_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation',
          'weight' => '-89',
        ),
        'views-flex_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_4',
          'region' => 'navigation',
          'weight' => '-88',
        ),
        'menu-menu-browse-library' => array(
          'module' => 'menu',
          'delta' => 'menu-browse-library',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'menu-menu-about-the-mises-institute' => array(
          'module' => 'menu',
          'delta' => 'menu-about-the-mises-institute',
          'region' => 'footer_center',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_2',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
        'views-social_media_displays-block_2' => array(
          'module' => 'views',
          'delta' => 'social_media_displays-block_2',
          'region' => 'footer_right',
          'weight' => '-8',
        ),
        'views-flex_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_3',
          'region' => 'footer_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top_bar_placeholder';
  $context->description = 'Temporary for theming of top bar ad only';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block',
          'region' => 'header_left',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_1',
          'region' => 'header_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Temporary for theming of top bar ad only');
  t('sitewide');
  $export['top_bar_placeholder'] = $context;

  return $export;
}
