<?php
/**
 * @file
 * mises_itunes_rss_feed.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_itunes_rss_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_rfc_822';
  $strongarm->value = 'D, d M Y 00:00:00 O';
  $export['date_format_rfc_822'] = $strongarm;

  return $export;
}
