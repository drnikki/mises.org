<?php
/**
 * @file
 * Admin file for Getclicky settigns.
 */

/**
 * A form builder function returning a $form for configuring the module.
 */
function getclicky_admin_settings_form() {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('GetClicky Account Settings'),
    '#collapsible' => FALSE,
  );

  $form['account']['getclicky_site_id_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Site ID Number'),
    '#default_value' => variable_get('getclicky_site_id_number', ''),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('Example input: 130169<br>
    This number is unique to every website you track via Clicky(a.k.a. GetClicky).<br>
    - If you <b>do not</b> have an account with Clicky - you can obtain one from the <a href="@url1">GetClicky</a> website. (clicking on this link shows your support for my development of this module - especially if you decide to buy a Pro account with Clicky. Here is <a href="http://getclicky.com/#theotherguys">why</a> and here is <a href="http://getclicky.com/help/pricing">accounts comparison</a>)<br>
    - If you <b>DO</b> have a Clicky account - you can find that number here:<br>
      - anywhere you see a link like that <a href="@url2">http://getclicky.com/<b>130169</b></a> - take only the number - this is your Clicky site ID number.
      - you can find this in your affiliate link (if you have many sites tracked by one Clicky user account - the affiliate link uses the 1st site\'s ID), <br>
      - also in your tracking code and in your site prefs page ...',
        array('@url1' => 'http://getclicky.com/130169', '@url2' => 'http://getclicky.com/130169')),
  );

  $form['account']['getclicky_site_key_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Key Number (Optional: needed for displaying stats here in getclicky\s drupal admin area.)'),
    '#default_value' => variable_get('getclicky_site_key_number', ''),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => FALSE,
    '#description' => t('Optional.<br>
    Example input: 72543da7406597242<br>
    This number is an API key used to display stats.'),
  );



$form['conditions_notice'] = array(
  '#markup' => '<p><strong>' . t('NOTE: When deciding whether to show the clicky code or not, all conditions below (page conditions, role conditions) must be met at the same time
 in order to show the code.<br>
Example: When you select: Don\'t track admin pages AND roles to track include current user\'s role - for admin pages no tracking code will be included.<br>
Another example: When "Yes, track admin pages" is selected, and the user\'s role is NOT in the list of roles clicky should track: no tracking code will be put on admin pages.
If you need better logic handling of overlapping conditions cases, please submit an issue here:
 <a href="@link" target="_blank" title="Create new issue on drupal.org/project/getclicky">Create new issue on drupal.org/project/getclicky</a>',
  array('@link' => 'https://www.drupal.org/node/add/project-issue/getclicky')) . '</strong></p>'
);

  // page tracking settings

  $form['pages'] = array(
    '#type' => 'fieldset',
    '#title' => t('Page Tracking Conditions'),
    '#collapsible' => TRUE,
    '#description' => t('Choose on which pages to put the tracking code.'),
  );

  $form['pages']['getclicky_track_admin_pages'] = array(
    '#type' => 'radios',
    '#options' => array(
      0 => "Don't track admin pages",
      1 => "Yes, track admin pages",
  ),
    '#default_value' => variable_get('getclicky_track_admin_pages', GETCLICKY_ADMIN_PAGES_OPTIONS_DEFAULTS),
  );


  // TODO add the usual drupal filtering with <front>, page/* and 3 type of options...


  // role tracking settings

  $form['roles'] = array(
    '#type' => 'fieldset',
    '#title' => t('User Role Tracking Conditions'),
    '#collapsible' => TRUE,
    '#description' => t('Define what user roles should be tracked by Get Clicky.'),
  );

  $form['roles']['getclicky_track_roles'] = array(
    '#type' => 'checkboxes',
    '#options' => user_roles(),
    '#default_value' => variable_get('getclicky_track_roles',  unserialize(GETCLICKY_TRACK_ROLES_OPTIONS_DEFAULTS)),
  );

  $form['getclicky_pass_username'] = array(
    '#type' => 'checkbox',
    '#title' => t('Pass Usernames to GetClicky'),
    '#description' => t('Associate authenticated user traffic by passing the username to Clicky as a custom variable.'),
    '#default_value' => variable_get('getclicky_pass_username', FALSE),
  );

  $form['getclicky_banner_image'] = array(
    '#type' => 'fieldset',
    '#title' => t('GetClicky Banner Image'),
    '#collapsible' => TRUE,
  );

  $form['getclicky_banner_image']['getclicky_show_banner_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Inject GetClicky Banner Image in html code\'s footer? (right before the closing body tag)'),
    '#description' => t('Check this to show this in your site\'s footer automatically if you want visitors to click on your affiliate link.'),
    '#default_value' => variable_get('getclicky_show_banner_image', FALSE),
  );


  $form['getclicky_banner_image']['getclicky_banner_image_html_code_for_copying'] = array(
    '#type' => 'textarea',
    '#title' => t('HTML Banner code (used in the block we provide)'),
    '#description' => t('This code is used in the block we provide for you - go to <a href="/admin/build/block">/admin/build/block</a> to put it into a region.<br>
      <b>See here - <a href="http://getclicky.com/user/affiliate">http://getclicky.com/user/affiliate</a> for more banner images. Paste from there into here, and the block here will auto-update. </b>
    '),
    '#default_value' => variable_get('getclicky_banner_image_html_code_for_copying', '<a title="Clicky Web Analytics" href="http://getclicky.com/' . variable_get('getclicky_site_id_number', '') . '"><img alt="Clicky Web Analytics" src="http://static.getclicky.com/media/links/badge.gif" border="0" /></a>'),
  );

  $form['getclicky_trackfiles'] = array(
    '#type' => 'textfield',
    '#title' => t('File Extensions To Track'),
    '#default_value' => variable_get('getclicky_trackfiles', 'pdf|zip|mp3'),
    '#description' => t('A pipe seperated list of file extensions that should be tracked when clicked. Example !extensions', array('!extensions' => 'pdf|zip|mp3')),
  );

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced - custom JS code snippets'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t('You can add custom JS Clicky code here.'),
  );

  $form['advanced']['getclicky_codesnippet'] = array(
    '#type' => 'textarea',
    '#title' => t('JavaScript Code'),
    '#default_value' => variable_get('getclicky_codesnippet', ''),
    '#rows' => 15,
    '#description' => t('Paste custom JS code snippets here. These will be added to every page that Get Clicky appears on.'),
  );

  return system_settings_form($form);
}


/**
 * Implements hook_validate() for the getclicky_admin_settings_form() builder function.
 */
function getclicky_admin_settings_form_validate($form, &$form_state) {
  // Trim whitespace.
  $form_state['values']['getclicky_site_id_number'] = trim($form_state['values']['getclicky_site_id_number']);
  $form_state['values']['getclicky_site_key_number'] = trim($form_state['values']['getclicky_site_key_number']);

  // validate getclicky_site_id_number
  if ( empty( $form_state['values']['getclicky_site_id_number'] ) ) {
    form_set_error('getclicky_site_id_number', t('The "Site ID Number" can\'t be left empty!'));
  }
  elseif ( ! is_numeric( $form_state['values']['getclicky_site_id_number'] ) ) {
    form_set_error('getclicky_site_id_number', t('The "Site ID Number" should be all digits!'));
  }

}

