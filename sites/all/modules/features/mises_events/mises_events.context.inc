<?php
/**
 * @file
 * mises_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'events' => 'events',
        'events/*' => 'events/*',
        'event*' => 'event*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-mises_calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'mises_calendar-block_1',
          'region' => 'sidebar_second_top',
          'weight' => '-10',
        ),
        'menu-menu-event-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-event-menu',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-photo_album-block' => array(
          'module' => 'views',
          'delta' => 'photo_album-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-upcoming_courses-block' => array(
          'module' => 'views',
          'delta' => 'upcoming_courses-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
    'menu' => 'events',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Types');
  $export['events'] = $context;

  return $export;
}
