<?php
/**
 * @file
 * block.vars.php
 */

/**
 * Implements hook_preprocess_block().
 */
function bootsass_preprocess_block(&$variables) {
  // Use a bare template for the page's main content.
  if ($variables['block_html_id'] == 'block-system-main') {
    $variables['theme_hook_suggestions'][] = 'block__no_wrapper';
  }
  $variables['title_attributes_array']['class'][] = 'block-title';
}

/**
 * Implements hook_process_block().
 */
function bootsass_process_block(&$variables) {
  // Drupal 7 should use a $title variable instead of $block->subject.
  // Don't override an existing "title" variable, some modules may already it.
  if (!isset($variables['title'])) {
    $variables['title'] = $variables['block']->subject;
  }
  $variables['title'] = _bootsass_filter_xss($variables['title']);
}
