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
  $context->name = 'node_flex_block';
  $context->description = 'Placement of node-specific flex blocks';
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
        'views-02021a1f79ec9d8a34570e0db5f60bb3' => array(
          'module' => 'views',
          'delta' => '02021a1f79ec9d8a34570e0db5f60bb3',
          'region' => 'featured_left',
          'weight' => '0',
        ),
        'views-8c02a8137c1181af8ef6477f988fb8eb' => array(
          'module' => 'views',
          'delta' => '8c02a8137c1181af8ef6477f988fb8eb',
          'region' => 'featured_right',
          'weight' => '0',
        ),
        'views-5d844650deae591fca77c4ee56347109' => array(
          'module' => 'views',
          'delta' => '5d844650deae591fca77c4ee56347109',
          'region' => 'bottom_left',
          'weight' => '0',
        ),
        'views-69de6e50f12440db0b889fd480f34392' => array(
          'module' => 'views',
          'delta' => '69de6e50f12440db0b889fd480f34392',
          'region' => 'bottom_right',
          'weight' => '0',
        ),
        'views-bf316c46d4ac832ff3030b9dc6dfe3d1' => array(
          'module' => 'views',
          'delta' => 'bf316c46d4ac832ff3030b9dc6dfe3d1',
          'region' => 'sidebar_second_top',
          'weight' => '-100',
        ),
        'views-afd125a107237b72a70da9822549a9cf' => array(
          'module' => 'views',
          'delta' => 'afd125a107237b72a70da9822549a9cf',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Placement of node-specific flex blocks');
  t('sitewide');
  $export['node_flex_block'] = $context;

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
        '~giving*' => '~giving*',
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
    'path' => array(
      'values' => array(
        '~giving*' => '~giving*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'google_cse-google_cse' => array(
          'module' => 'google_cse',
          'delta' => 'google_cse',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_4',
          'region' => 'navigation',
          'weight' => '-8',
        ),
        'views-flex_blocks-block_26' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_26',
          'region' => 'mobile_header_bottom',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  $export['sitewide'] = $context;

  return $export;
}
