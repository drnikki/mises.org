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
      drupal_add_js($theme_path . '/js/misc/jquery.nestedAccordion.js', array('weight' => CSS_THEME));
      drupal_add_js($theme_path . '/js/custom.js', array('weight' => CSS_THEME));
      $variables['classes_array'][] = 'main-theme';
  }

  // Add the terms to the body classes based on terms.
  if ($node = menu_get_object()) {
    // Return an array of taxonomy term ID's.
    $libraryids = field_get_items('node', $node, 'field_library_item_tree');
    $audienceids = field_get_items('node', $node, 'field_audience');
    if ($libraryids && $audienceids) {
      $termids =  array_merge($libraryids, $audienceids);
    } elseif ($audienceids) {
      $termids = $audienceids;
    } else {
      $termids = $libraryids;
    }
    // Load all the terms to get the name and vocab.
    if ($termids) {
      foreach ($termids as $termid) {
        $terms[] = isset($termid['tid']) ? taxonomy_term_load($termid['tid']) : taxonomy_term_load($termid['target_id']);
      }
      // Assign the taxonomy values for Library Item Type.
      foreach ($terms as $term) {
        $class = strtolower(drupal_clean_css_identifier($term->name));
        $vocabulary = drupal_clean_css_identifier($term->vocabulary_machine_name);
        //$variables['classes_array'][] = 'icon-' . $vocabulary . '-' . $class;
        $variables['classes_array'][] = 'icon-' . $class;
      }
    }
  }
  // Add special icons to nested term pages based on parents
  if (arg(0) == 'taxonomy' && arg(1) == 'term') {
    $term_tid = arg(2);
    $top_parent_term = null;
    $parent_terms = taxonomy_get_parents_all($term_tid);
    foreach($parent_terms as $parent) {
      if ($parent->tid == '367') {
        $variables['classes_array'][] = 'icon-interviews';
        break;
      } else if ($parent->tid == '442') {
        $variables['classes_array'][] = 'icon-audiovideo';
      }
    }
  }

}
