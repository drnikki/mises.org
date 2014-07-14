<?php
/**
 * @file
 * mises_mailchimp_configuration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_mailchimp_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'newsletter_signup_page';
  $context->description = 'Contexts, blocks, and displays for the Mises Newsletter Signup page.';
  $context->tag = 'Landing Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-mises/subscribe' => 'about-mises/subscribe',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mises_utility-mailchimp_page_description' => array(
          'module' => 'mises_utility',
          'delta' => 'mailchimp_page_description',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexts, blocks, and displays for the Mises Newsletter Signup page.');
  t('Landing Pages');
  $export['newsletter_signup_page'] = $context;

  return $export;
}
