<?php
/**
 * @file
 * mises_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ckeditor_styles:stylesheetparser:simplified';
  $strongarm->value = 0;
  $export['ckeditor_styles:stylesheetparser:simplified'] = $strongarm;

  return $export;
}
