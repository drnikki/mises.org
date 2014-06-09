<?php
/**
 * @file
 * austrian_economics_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function austrian_economics_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'austrian_economics';
  $context->description = 'Custom blocks for Austrian Economics landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'austrian-school' => 'austrian-school',
        'node/819' => 'node/819',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-austrian_economists-block' => array(
          'module' => 'views',
          'delta' => 'austrian_economists-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu-menu-austrian-economics-sub-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-austrian-economics-sub-menu',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom blocks for Austrian Economics landing page');
  t('Landing Pages');
  $export['austrian_economics'] = $context;

  return $export;
}
