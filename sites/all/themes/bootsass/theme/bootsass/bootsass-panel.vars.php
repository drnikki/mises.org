<?php
/**
 * @file
 * bootsass-panel.vars.php
 */

/**
 * Implements hook_preprocess_bootsass_panel().
 */
function bootsass_preprocess_bootsass_panel(&$variables) {
  $element = &$variables['element'];
  $attributes = !empty($element['#attributes']) ? $element['#attributes'] : array();
  $attributes['class'][] = 'panel';
  $attributes['class'][] = 'panel-default';
  // states.js requires form-wrapper on fieldset to work properly.
  $attributes['class'][] = 'form-wrapper';
  $variables['collapsible'] = FALSE;
  if (isset($element['#collapsible'])) {
    $variables['collapsible'] = $element['#collapsible'];
  }
  $variables['collapsed'] = FALSE;
  if (isset($element['#collapsed'])) {
    $variables['collapsed'] = $element['#collapsed'];
  }
  // Force grouped fieldsets to not be collapsible (for vertical tabs).
  if (!empty($element['#group'])) {
    $variables['collapsible'] = FALSE;
    $variables['collapsed'] = FALSE;
  }
  $variables['id'] = '';
  if (isset($element['#id'])) {
    if ($variables['collapsible']) {
      $variables['id'] = $element['#id'];
    }
    else {
      $attributes['id'] = $element['#id'];
    }
  }
  $variables['content'] = $element['#children'];

  // Iterate over optional variables.
  $keys = array(
    'description',
    'prefix',
    'suffix',
    'title',
  );
  foreach ($keys as $key) {
    $variables[$key] = !empty($element["#$key"]) ? $element["#$key"] : FALSE;
  }
  $variables['attributes'] = $attributes;
}

/**
 * Implements hook_process_bootsass_panel().
 */
function bootsass_process_bootsass_panel(&$variables) {
  $variables['attributes'] = drupal_attributes($variables['attributes']);
  if (!empty($variables['title'])) {
    $variables['title'] = _bootsass_filter_xss(render($variables['title']));
  }
  if (!empty($variables['description'])) {
    $variables['description'] = _bootsass_filter_xss(render($variables['description']));
  }
}
