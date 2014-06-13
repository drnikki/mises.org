<?php
/**
 * @file
 * mises_apache_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function mises_apache_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'dev.mises.org.468elmp01.blackmesh.com';
  $environment->url = 'http://dev.mises.org.468elmp01.blackmesh.com:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1402669722',
        'last_entity_id' => '9997',
      ),
    ),
    'apachesolr_index_updated' => 1402670253,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'award',
      1 => 'blog',
      2 => 'book_digital_text',
      3 => 'campaign_',
      4 => 'causeview_snippet',
      5 => 'course',
      6 => 'document',
      7 => 'event',
      8 => 'flex_block',
      9 => 'giving_story',
      10 => 'homepage_hero',
      11 => 'institute_fellowship',
      12 => 'job_posting_',
      13 => 'landing_page',
      14 => 'legacy_book',
      15 => 'library_item',
      16 => 'page',
      17 => 'person_profile',
      18 => 'photo_gallery',
      19 => 'product',
      20 => 'scholarship_',
      21 => 'social_media',
      22 => 'webform',
      23 => 'working_papers',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
