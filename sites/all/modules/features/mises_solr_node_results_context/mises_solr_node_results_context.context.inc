<?php
/**
 * @file
 * mises_solr_node_results_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_solr_node_results_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'solr_node_search_results';
  $context->description = 'Defines the Solr search results page.';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/site' => 'search/site',
        'search/site/*' => 'search/site/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-wcg0Iab3Ypt1CaVQSYrNwXPAUmV70Pkt' => array(
          'module' => 'facetapi',
          'delta' => 'wcg0Iab3Ypt1CaVQSYrNwXPAUmV70Pkt',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-HKDC1cgxSxGM5l01Zl6ib89vWJGQP3se' => array(
          'module' => 'facetapi',
          'delta' => 'HKDC1cgxSxGM5l01Zl6ib89vWJGQP3se',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-iPEJ3yDpFeYs3VTS0wJ47jBa0E1eosI0' => array(
          'module' => 'facetapi',
          'delta' => 'iPEJ3yDpFeYs3VTS0wJ47jBa0E1eosI0',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-KbVB7FlF9uXEFwXVzYeesVHZTFryrT7k' => array(
          'module' => 'facetapi',
          'delta' => 'KbVB7FlF9uXEFwXVzYeesVHZTFryrT7k',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-mMxEw4F0XQAJbYdowwPSbgF1qyNau1xO' => array(
          'module' => 'facetapi',
          'delta' => 'mMxEw4F0XQAJbYdowwPSbgF1qyNau1xO',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-RA00U7wFQJgTkBi0N84wSTvi0Epwb0bZ' => array(
          'module' => 'facetapi',
          'delta' => 'RA00U7wFQJgTkBi0N84wSTvi0Epwb0bZ',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-6Ue6uHhAOBfNeZJvRpyIseGm5c0vygyU' => array(
          'module' => 'facetapi',
          'delta' => '6Ue6uHhAOBfNeZJvRpyIseGm5c0vygyU',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
        'facetapi-9vkTcu3AKyIRnRQDvEwlVpiijxfi0aAK' => array(
          'module' => 'facetapi',
          'delta' => '9vkTcu3AKyIRnRQDvEwlVpiijxfi0aAK',
          'region' => 'sidebar_first',
          'weight' => '-2',
        ),
        'facetapi-eFdsYzKmdlm3KMMSqDCo0IlN2zMmq0Tw' => array(
          'module' => 'facetapi',
          'delta' => 'eFdsYzKmdlm3KMMSqDCo0IlN2zMmq0Tw',
          'region' => 'sidebar_first',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines the Solr search results page.');
  t('Search');
  $export['solr_node_search_results'] = $context;

  return $export;
}