<?php
/**
 * @file
 * mises_blog_twitter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_blog_twitter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter';
  $strongarm->value = array(
    'publish_away_consumer_key' => 'RIuH5QthWjur4ruHPZbznWnMK',
    'publish_away_consumer_secret' => 'tHpnRPYUAoiT9RrxYHJbVF1virQBHFYsfAspncu2OuZ4QjIHuL',
    'publish_away_oauth_token' => '3018438790-onVIaisfs3H6DmTHtYKTRGbORXEIBc6UnQB40JX',
    'publish_away_oauth_token_secret' => 'u2Ne0roMQnqP2RdHLoa5wEsmaoh3L5tDr2Mg5PrHYlPG3',
  );
  $export['twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_expire';
  $strongarm->value = '0';
  $export['twitter_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_host';
  $strongarm->value = 'http://twitter.com';
  $export['twitter_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_import';
  $strongarm->value = 1;
  $export['twitter_import'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_default_format';
  $strongarm->value = 'Blog: !title !tinyurl';
  $export['twitter_post_default_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_default_value';
  $strongarm->value = 0;
  $export['twitter_post_default_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_types';
  $strongarm->value = array(
    'blog' => 'blog',
    'award' => 0,
    'campaign_' => 0,
    'causeview_snippet' => 0,
    'course' => 0,
    'event' => 0,
    'flex_block' => 0,
    'giving_feature_block' => 0,
    'giving_page' => 0,
    'giving_story' => 0,
    'homepage_hero' => 0,
    'institute_fellowship' => 0,
    'job_posting_' => 0,
    'landing_page' => 0,
    'library_collection' => 0,
    'library_item' => 0,
    'membership_level' => 0,
    'book_digital_text' => 0,
    'person_profile' => 0,
    'photo_gallery' => 0,
    'product' => 0,
    'scholarship_' => 0,
    'social_media' => 0,
    'solr_online_text_chapter' => 0,
    'solr_online_text_page' => 0,
    'page' => 0,
    'working_papers' => 0,
  );
  $export['twitter_post_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_search';
  $strongarm->value = 'http://search.twitter.com';
  $export['twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_tinyurl';
  $strongarm->value = 'http://tinyurl.com';
  $export['twitter_tinyurl'] = $strongarm;

  return $export;
}
