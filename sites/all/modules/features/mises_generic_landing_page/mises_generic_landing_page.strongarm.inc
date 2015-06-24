<?php
/**
 * @file
 * mises_generic_landing_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_generic_landing_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'randomblocks';
  $strongarm->value = array(
    'non_library_item_profiles' => array(
      'machine_name' => 'non_library_item_profiles',
      'info' => 'Non-Library-Item Profile Blocks',
    ),
  );
  $export['randomblocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'randomblocks_non_library_item_profiles';
  $strongarm->value = array(
    'machine_name' => 'non_library_item_profiles',
    'info' => 'Non-Library-Item Profile Blocks',
    'config' => array(
      'num_items' => '1',
      'cycle' => 1,
    ),
    'blocks' => array(
      'views:term_landing-columnist' => array(
        'module' => 'views',
        'delta' => 'term_landing-columnist',
      ),
      'views:term_landing-featured_author' => array(
        'module' => 'views',
        'delta' => 'term_landing-featured_author',
      ),
      'views:blog-blogger' => array(
        'module' => 'views',
        'delta' => 'blog-blogger',
      ),
    ),
  );
  $export['randomblocks_non_library_item_profiles'] = $strongarm;

  return $export;
}
