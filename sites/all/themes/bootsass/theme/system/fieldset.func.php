<?php
/**
 * @file
 * fieldset.func.php
 */

/**
 * Overrides theme_fieldset().
 */
function bootsass_fieldset($variables) {
  return theme('bootsass_panel', $variables);
}
