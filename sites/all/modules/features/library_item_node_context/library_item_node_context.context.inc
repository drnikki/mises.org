<?php
/**
 * @file
 * library_item_node_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function library_item_node_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'daily_menu_active';
  $context->description = '';
  $context->tag = 'Menu State';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'library_item' => 'library_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        147 => 147,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'taxonomy/term/147',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu State');
  $export['daily_menu_active'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_items';
  $context->description = 'Blocks for Library Item node pages';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'library_item' => 'library_item',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-library_items_menu-block' => array(
          'module' => 'views',
          'delta' => 'library_items_menu-block',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-term_landing-popular' => array(
          'module' => 'views',
          'delta' => 'term_landing-popular',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-term_landing-meet_columnist' => array(
          'module' => 'views',
          'delta' => 'term_landing-meet_columnist',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-term_landing-featured_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-featured_author',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-term_landing-meet_author' => array(
          'module' => 'views',
          'delta' => 'term_landing-meet_author',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-term_landing-meet_guest' => array(
          'module' => 'views',
          'delta' => 'term_landing-meet_guest',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'views-term_landing-meet_speaker' => array(
          'module' => 'views',
          'delta' => 'term_landing-meet_speaker',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-term_landing-meet_expert' => array(
          'module' => 'views',
          'delta' => 'term_landing-meet_expert',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'views-flex_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_6',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'views-related_blocks_node-topics' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-topics',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
        'views-related_blocks_node-level' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-level',
          'region' => 'bottom_two',
          'weight' => '-10',
        ),
        'views-related_blocks_node-audience' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-audience',
          'region' => 'bottom_three',
          'weight' => '-10',
        ),
        'views-related_blocks_node-courses' => array(
          'module' => 'views',
          'delta' => 'related_blocks_node-courses',
          'region' => 'bottom_four',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'test-library-item-context',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Library Item node pages');
  t('Content Types');
  $export['library_items'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library_menu_active';
  $context->description = 'Active menu item for Library Items except Mises Daily';
  $context->tag = 'Menu State';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'library_item' => 'library_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        162 => 162,
        167 => 167,
        170 => 170,
        178 => 178,
        442 => 442,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'node/786',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active menu item for Library Items except Mises Daily');
  t('Menu State');
  $export['library_menu_active'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_daily_post';
  $context->description = 'Blocks for pages tagged as Mises Daily';
  $context->tag = 'Sections';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        147 => 147,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'custom_search_blocks-2' => array(
          'module' => 'custom_search_blocks',
          'delta' => '2',
          'region' => 'sidebar_second_top',
          'weight' => '-12',
        ),
        'views-flex_blocks-block_11' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_11',
          'region' => 'sidebar_second_top',
          'weight' => '-11',
        ),
        'views-library_items_menu-block' => array(
          'module' => 'views',
          'delta' => 'library_items_menu-block',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_9' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_9',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for pages tagged as Mises Daily');
  t('Sections');
  $export['mises_daily_post'] = $context;

  return $export;
}
