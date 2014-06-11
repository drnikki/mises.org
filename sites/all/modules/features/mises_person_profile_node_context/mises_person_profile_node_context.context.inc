<?php
/**
 * @file
 * mises_person_profile_node_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_person_profile_node_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'person_profile';
  $context->description = 'Blocks for Person Profile node pages';
  $context->tag = 'Content Types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person_profile' => 'person_profile',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-major_works_signif_contrib' => array(
          'module' => 'quicktabs',
          'delta' => 'major_works_signif_contrib',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for Person Profile node pages');
  t('Content Types');
  $export['person_profile'] = $context;

  return $export;
}
