<?php
/**
 * @file
 * mises_press_room.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_press_room_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_room';
  $context->description = 'Custom blocks for Press Room landing page';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'press-room' => 'press-room',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_blocks-block_16' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_16',
          'region' => 'bottom_left',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_17' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_17',
          'region' => 'bottom_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom blocks for Press Room landing page');
  t('Landing Pages');
  $export['press_room'] = $context;

  return $export;
}
