<?php
/**
 * @file
 * bootsass-modal.vars.php
 */

/**
 * Implements theme_preprocess_bootsass_modal().
 *
 * @todo: Replace with "bootsass_effect_fade" theme setting.
 */
function bootsass_preprocess_bootsass_modal(&$variables) {
  if (empty($variables['attributes']['id'])) {
    $variables['attributes']['id'] = drupal_html_id(strip_tags($variables['heading']));
  }
  $variables['attributes']['class'][] = 'modal';
  $variables['attributes']['class'][] = 'fade';
  $variables['attributes']['tabindex'] = -1;
  $variables['attributes']['role'] = 'dialog';
  $variables['attributes']['aria-hidden'] = 'true';

  $variables['heading'] = $variables['html_heading'] ? $variables['heading'] : check_plain($variables['heading']);
  $variables['dialog_attributes']['class'][] = 'modal-dialog';

  if (!empty($variables['size'])) {
    $variables['dialog_attributes']['class'][] = drupal_html_class('modal-' . $variables['size']);
  }
}

/**
 * Implements theme_process_bootsass_modal().
 */
function bootsass_process_bootsass_modal(&$variables) {
  $variables['attributes'] = drupal_attributes($variables['attributes']);
  $variables['dialog_attributes'] = drupal_attributes($variables['dialog_attributes']);
  $variables['heading'] = _bootsass_filter_xss(render($variables['heading']));
  $variables['body'] = render($variables['body']);
  $variables['footer'] = render($variables['footer']);
}
