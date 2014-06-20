<?php
/**
 * @file
 * bootstrap-search-form-wrapper.func.php
 */

/**
 * Theme function implementation for bootsass_search_form_wrapper.
 */
function bootsass_bootsass_search_form_wrapper($variables) {
  $output = '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<span class="input-group-btn">';
  $output .= '<button type="submit" class="btn btn-white">';
  // We can be sure that the font icons exist in theme.
  if (file_exists(drupal_get_path('theme', 'bootsass') . '/fonts/bootstrap/glyphicons-halflings-regular.ttf')) {
    $output .= _bootsass_icon('search');
  }
  else {
    $output .= t('Search');
  }
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div>';
  return $output;
}
