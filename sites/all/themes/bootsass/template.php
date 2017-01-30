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

/**
 * Theme override of theme_data_display_range()
 * see: sites/all/modules/contrib/date/date.theme for original implementation
 * Returns HTML for a date element formatted as a range.
 */
function bootsass_date_display_range($variables) {
  $date1 = $variables['date1'];
  $date2 = $variables['date2'];
  $timezone = $variables['timezone'];
  $attributes_start = $variables['attributes_start'];
  $attributes_end = $variables['attributes_end'];
  $show_remaining_days = $variables['show_remaining_days'];

  $start_date = '<span class="date-display-start"' . drupal_attributes($attributes_start) . '>' . $date1 . '</span>';
  $end_date = '<span class="date-display-end"' . drupal_attributes($attributes_end) . '>' . $date2 . $timezone . '</span>';

  // If microdata attributes for the start date property have been passed in,
  // add the microdata in meta tags.
  if (!empty($variables['add_microdata'])) {
    $start_date .= '<meta' . drupal_attributes($variables['microdata']['value']['#attributes']) . '/>';
    $end_date .= '<meta' . drupal_attributes($variables['microdata']['value2']['#attributes']) . '/>';
  }

  // Wrap the result with the attributes.
  $output = '<div class="date-display-range">' . t('!start-date – !end-date', array(
    '!start-date' => $start_date,
    '!end-date' => $end_date,
  )) . '</div>';

  // Add remaining message and return.
  return $output . $show_remaining_days;
}


  /*
function bootsass_image ($variables) {
  $attributes = $variables['attributes'];
  //dpm('theme_image');
  $attributes['src'] = file_create_url($variables['path']);
  //dpm($attributes['src']);

  foreach (array('width', 'height', 'alt', 'title') as $key) {

    if (isset($variables[$key])) {
      $attributes[$key] = $variables[$key];
    }
  }

  return '<img' . drupal_attributes($attributes) . ' />';
}


function bootsass_preprocess_file_entity(&$variables) {
  //dpm('file_entity');
  if ($variables['type'] == 'image') {
  //dpm('file_entity is image');

    // Alt Text
    if (!empty($variables['field_media_alt_text'])) {
      $variables['content']['file']['#alt'] = $variables['field_media_alt_text']['und'][0]['safe_value'];
    }

    // Title
    if (!empty($variables['field_media_title'])) {
      $variables['content']['file']['#title'] = $variables['field_media_title']['und'][0]['safe_value'];
    }
  }
}
   */
