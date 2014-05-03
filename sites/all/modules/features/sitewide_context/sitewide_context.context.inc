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
        'menu-menu-topics' => array(
          'module' => 'menu',
          'delta' => 'menu-topics',
          'region' => 'menu_footer_one',
          'weight' => '-10',
        ),
        'menu-menu-austrian-school' => array(
          'module' => 'menu',
          'delta' => 'menu-austrian-school',
          'region' => 'menu_footer_two',
          'weight' => '-10',
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
        'nodeblock-741' => array(
          'module' => 'nodeblock',
          'delta' => '741',
          'region' => 'navigation',
          'weight' => '-8',
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
        'nodeblock-743' => array(
          'module' => 'nodeblock',
          'delta' => '743',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
        'widgets-s_socialmedia_profile-default' => array(
          'module' => 'widgets',
          'delta' => 's_socialmedia_profile-default',
          'region' => 'footer_right',
          'weight' => '-8',
        ),
        'nodeblock-742' => array(
          'module' => 'nodeblock',
          'delta' => '742',
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
        'nodeblock-740' => array(
          'module' => 'nodeblock',
          'delta' => '740',
          'region' => 'header_left',
          'weight' => '-10',
        ),
        'nodeblock-739' => array(
          'module' => 'nodeblock',
          'delta' => '739',
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
