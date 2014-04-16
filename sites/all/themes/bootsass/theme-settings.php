<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Bootsass based themes when admin theme is not.
 *
 * @see theme/settings.inc
 */

/**
 * Include common Bootsass functions.
 */
include_once dirname(__FILE__) . '/theme/common.inc';

/**
 * Implements hook_form_FORM_ID_alter().
 */
function bootsass_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  // Work-around for a core bug affecting admin themes.
  // @see https://drupal.org/node/943212
  if (isset($form_id)) {
    return;
  }
  // Include theme settings file.
  bootsass_include('bootsass', 'theme/settings.inc');
  // Alter theme settings form.
  _bootsass_settings_form($form, $form_state);
}
