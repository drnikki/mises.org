<?php
/**
 * @file
 * mises_social_commenting.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_social_commenting_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_comment_blog';
  $context->description = 'Integrate social commenting for blog content.';
  $context->tag = 'Social Commenting';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Integrate social commenting for blog content.');
  t('Social Commenting');
  $export['mises_comment_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mises_comment_library_item';
  $context->description = 'Integrate social commenting for library items tagged with "Daily".';
  $context->tag = 'Social Commenting';
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
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Integrate social commenting for library items tagged with "Daily".');
  t('Social Commenting');
  $export['mises_comment_library_item'] = $context;

  return $export;
}
