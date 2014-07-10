<?php
/**
 * @file
 * html.vars.php
 *
 * @see html.tpl.php
 */

/**
 * Implements hook_preprocess_html().
 */
function bootsass_preprocess_html(&$variables) {
  switch (theme_get_setting('bootsass_navbar_position')) {
    case 'fixed-top':
      $variables['classes_array'][] = 'navbar-is-fixed-top';
      break;

    case 'fixed-bottom':
      $variables['classes_array'][] = 'navbar-is-fixed-bottom';
      break;

    case 'static-top':
      $variables['classes_array'][] = 'navbar-is-static-top';
      break;
  }
  // Body classes based on path
  $path = drupal_get_path_alias($_GET['q']);
  $aliases = explode('/', $path);

  foreach($aliases as $key => $alias) {
    if ($key == 0 ) {
      $variables['classes_array'][] = 'section-' . drupal_clean_css_identifier($alias);
    } else {
      $variables['classes_array'][] = drupal_clean_css_identifier($alias);
    }
  }
  $theme_path = drupal_get_path('theme', 'bootsass');
  if ($aliases[0] == 'giving') {
      drupal_add_css($theme_path . '/stylesheets/giving.css', array('weight' => CSS_THEME));
      drupal_add_js($theme_path . '/js/giving.js', array('weight' => CSS_THEME));
      $variables['classes_array'][] = 'giving-theme';
  } else {
      drupal_add_css($theme_path . '/stylesheets/styles.css', array('weight' => CSS_THEME));
      drupal_add_js($theme_path . '/js/custom.js', array('weight' => CSS_THEME));
      $variables['classes_array'][] = 'main-theme';
  }

}
