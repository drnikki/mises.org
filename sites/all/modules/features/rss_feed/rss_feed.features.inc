<?php
/**
 * @file
 * rss_feed.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rss_feed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
