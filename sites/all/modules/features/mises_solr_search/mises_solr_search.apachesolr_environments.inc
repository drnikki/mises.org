<?php
/**
 * @file
 * mises_solr_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function mises_solr_search_apachesolr_environments() {
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
        'last_changed' => '1403035299',
        'last_entity_id' => '16716',
      ),
    ),
    'apachesolr_index_updated' => 1403035774,
    'apachesolr_last_optimize' => 1403035496,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'award',
      1 => 'blog',
      2 => 'book_digital_text',
      3 => 'course',
      4 => 'document',
      5 => 'event',
      6 => 'institute_fellowship',
      7 => 'job_posting_',
      8 => 'legacy_book',
      9 => 'library_item',
      10 => 'page',
      11 => 'person_profile',
      12 => 'photo_gallery',
      13 => 'product',
      14 => 'scholarship_',
      15 => 'working_papers',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
