<?php
/**
 * @file
 * menu-local-action.func.php
 */

/**
 * Overrides theme_menu_local_action().
 */
function bootsass_menu_local_action($variables) {
  $link = $variables['element']['#link'];

  $options = isset($link['localized_options']) ? $link['localized_options'] : array();

  // If the title is not HTML, sanitize it.
  if (empty($options['html'])) {
    $link['title'] = check_plain($link['title']);
  }

  $icon = _bootsass_iconize_button($link['title']);

  // Format the action link.
  $output = '<li>';
  if (isset($link['href'])) {
    // Turn link into a mini-button and colorize based on title.
    if ($class = _bootsass_colorize_button($link['title'])) {
      if (!isset($options['attributes']['class'])) {
        $options['attributes']['class'] = array();
      }
      $string = is_string($options['attributes']['class']);
      if ($string) {
        $options['attributes']['class'] = explode(' ', $options['attributes']['class']);
      }
      $options['attributes']['class'][] = 'btn';
      $options['attributes']['class'][] = 'btn-xs';
      $options['attributes']['class'][] = $class;
      if ($string) {
        $options['attributes']['class'] = implode(' ', $options['attributes']['class']);
      }
    }
    // Force HTML so we can add the icon rendering element.
    $options['html'] = TRUE;
    $title = _bootsass_filter_xss($link['title']);
    //$output .= l($icon . $link['title'], $link['href'], $options);
    $output .= l($icon . $title, $link['href'], $options);
  }
  else {
    $title = _bootsass_filter_xss($link['title']);
    //$output .= $icon . $link['title'];
    $output .= $icon . $title;
  }
  $output .= "</li>\n";

  return $output;
}
