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
  $output .= '<button type="submit" class="btn btn-default">';
  $output .= t('GO');
  $output .= '</button>';
  $output .= '</span>';
  $output .= '</div>';
  return $output;
}
