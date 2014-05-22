<?php

/**
 * Implements hook_views_data().
 *
 * Exposes analytics hits data to views.
 */
function mises_popular_content_views_data() {
  // Define the group index which will be used as a prefix in the UI for this table's fields, sort criteria, etc:
  $data['mises_analytics_hits']['table']['group'] = t('Analytics Page Hits');

  // Define this as a base table from which views can be made:
  $data['mises_analytics_hits']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Analytics Page Hits'),
    'help' => t('The number of page hits as recorded by Google Analytics for a given entity\'s page.'),
    'weight' => -10,
  );

  // Allow relationships with node views and define analytics table fields
  $data['mises_analytics_hits']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'entity_id',
    ),
  );

  $data['mises_analytics_hits']['id'] = array(
    'title' => t('Entity Hits ID'),
    'help' => t('The unique identifier of the record of an entity\'s hits count.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  $data['mises_analytics_hits']['entity_type'] = array(
    'title' => t('Entity Type'),
    'help' => t('The type of entity whose page hit statistics are being tracked by Google Analytics; for example, "node".'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['mises_analytics_hits']['entity_id'] = array(
    'title' => t('Entity ID'),
    'help' => t('The unique identifier of an entity whose page hits have been tracked by Google Analytics.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
    'relationship' => array(
      'base' => 'node',
      'base field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Analytics Hits Entity'),
      'title' => t('Analytics Hits Entity'),
      'help' => t('The unique identifier of an entity whose page hits have been tracked by Google Analytics.'),
    ),
  );
  $data['mises_analytics_hits']['hit_count'] = array(
    'title' => t('Hit Count'),
    'help' => t('The number of page hits for a given entity that have been tracked by Google Analytics.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );
  return $data;
}
