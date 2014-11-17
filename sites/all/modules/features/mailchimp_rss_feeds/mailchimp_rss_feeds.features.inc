<?php
/**
 * @file
 * mailchimp_rss_feeds.features.inc
 */

/**
 * Implements hook_views_api().
 */
function mailchimp_rss_feeds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
