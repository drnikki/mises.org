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
  $strongarm->name = 'twitter_post_homepage_hero';
  $strongarm->value = 0;
  $export['twitter_post_homepage_hero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_job_posting_';
  $strongarm->value = 0;
  $export['twitter_post_job_posting_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_on_node_update';
  $strongarm->value = 0;
  $export['twitter_post_on_node_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_post_types';
  $strongarm->value = array(
    'award' => 'award',
    'blog' => 'blog',
    'campaign_' => 'campaign_',
    'causeview_snippet' => 'causeview_snippet',
    'course' => 'course',
    'event' => 'event',
    'flex_block' => 'flex_block',
    'giving_feature_block' => 'giving_feature_block',
    'giving_page' => 'giving_page',
    'giving_story' => 'giving_story',
    'homepage_hero' => 'homepage_hero',
    'institute_fellowship' => 'institute_fellowship',
    'job_posting_' => 'job_posting_',
    'landing_page' => 'landing_page',
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
    'membership_level' => 'membership_level',
    'book_digital_text' => 'book_digital_text',
    'solr_online_text_chapter' => 'solr_online_text_chapter',
    'solr_online_text_page' => 'solr_online_text_page',
    'person_profile' => 'person_profile',
    'photo_gallery' => 'photo_gallery',
    'product' => 'product',
    'scholarship_' => 'scholarship_',
    'social_media' => 'social_media',
    'page' => 'page',
    'working_papers' => 'working_papers',
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
