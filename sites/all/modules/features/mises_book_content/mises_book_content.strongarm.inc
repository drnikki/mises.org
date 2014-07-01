<?php
/**
 * @file
 * mises_book_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_book_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_book_digital_text';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_book_digital_text'] = $strongarm;

  return $export;
}
