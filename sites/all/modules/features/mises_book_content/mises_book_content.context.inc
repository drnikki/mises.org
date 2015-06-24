<?php
/**
 * @file
 * mises_book_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_book_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book_content';
  $context->description = '';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'book_content:book_chapter' => 'book_content:book_chapter',
        'book_content:book_landing' => 'book_content:book_landing',
        'book_content:book_page' => 'book_content:book_page',
        'book_content:book_subpage' => 'book_content:book_subpage',
        'book_content:book_subsubpage' => 'book_content:book_subsubpage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-book_content-book_content_toc' => array(
          'module' => 'views',
          'delta' => 'book_content-book_content_toc',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'book-view-context',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Types');
  $export['book_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book_html';
  $context->description = 'Blocks and context for Book HTML pages';
  $context->tag = 'Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/html' => '*/html',
      ),
    ),
    'views' => array(
      'values' => array(
        'book_content' => 'book_content',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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
        'views-flex_blocks-block_13' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_13',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'section-books',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks and context for Book HTML pages');
  t('Sections');
  $export['book_html'] = $context;

  return $export;
}
