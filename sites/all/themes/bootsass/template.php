<?php
/**
 * @file
 * template.php
 *
 * This file should only contain light helper functions and stubs pointing to
 * other files containing more complex functions.
 *
 * The stubs should point to files within the `theme` folder named after the
 * function itself minus the theme prefix. If the stub contains a group of
 * functions, then please organize them so they are related in some way and name
 * the file appropriately to at least hint at what it contains.
 *
 * All [pre]process functions, theme functions and template implementations also
 * live in the 'theme' folder. This is a highly automated and complex system
 * designed to only load the necessary files when a given theme hook is invoked.
 * @see _bootsass_theme()
 * @see theme/registry.inc
 *
 * Due to a bug in Drush, these includes must live inside the 'theme' folder
 * instead of something like 'includes'. If a module or theme has an 'includes'
 * folder, Drush will think it is trying to bootsass core when it is invoked
 * from inside the particular extension's directory.
 * @see https://drupal.org/node/2102287
 */

/**
 * Include common functions used through out theme.
 */
include_once dirname(__FILE__) . '/theme/common.inc';

/**
 * Implements hook_theme().
 *
 * Register theme hook implementations.
 *
 * The implementations declared by this hook have two purposes: either they
 * specify how a particular render array is to be rendered as HTML (this is
 * usually the case if the theme function is assigned to the render array's
 * #theme property), or they return the HTML that should be returned by an
 * invocation of theme().
 *
 * @see _bootsass_theme()
 */
function bootsass_theme(&$existing, $type, $theme, $path) {
  bootsass_include($theme, 'theme/registry.inc');
  return _bootsass_theme($existing, $type, $theme, $path);
}


/**
 * Declare various hook_*_alter() hooks.
 *
 * hook_*_alter() implementations must live (via include) inside this file so
 * they are properly detected when drupal_alter() is invoked.
 */
bootsass_include('bootsass', 'theme/alter.inc');


function bootsass_preprocess_field(&$variables) {
  // do not preload audio files
  if ($variables['element']['#field_type'] == 'media') {
    if ($variables['items'][0]['#bundle'] == 'audio') {
      foreach ($variables['items'] as $key => $item) {
        $variables['items'][$key]['file']['#preload'] = 'none';
      }
    }
  }
}

function bootsass_ds_pre_render_alter (&$layout_render_array, $context, &$vars) {
  if ($vars['type'] == 'blog') {
    if (empty($vars['field_is_old_blog_content']) || (isset($vars['field_is_old_blog_content'][LANGUAGE_NONE][0]['value']) && $vars['field_is_old_blog_content'][LANGUAGE_NONE][0]['value'] != 1)) {
      $vars['classes_array'][] = 'mises-wire-blog';
    }
  }
}
