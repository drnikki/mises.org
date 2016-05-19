<?php
/**
 * @file
 * homeschool_resources_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homeschool_resources_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homeschool';
  $context->description = 'Custom blocks for Homeschool Resources landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'homeschool-resources' => 'homeschool-resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-homeschool-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-homeschool-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'views-faaeb062562ec6d9c97848d39a52d510' => array(
          'module' => 'views',
          'delta' => 'faaeb062562ec6d9c97848d39a52d510',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'homeschool-resources',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom blocks for Homeschool Resources landing page');
  t('Landing Pages');
  $export['homeschool'] = $context;

  return $export;
}
