<?php
/**
 * @file
 * fieldset.func.php
 */

/**
 * Overrides theme_fieldset().
 */
function giving_fieldset($variables) {
  return theme('giving_panel', $variables);
}
