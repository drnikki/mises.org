<?php

/**
 * Implements hook_views_data().
 *
 * Exposes analytics Solr click data to views.
 */
function mises_solr_clicks_views_data() {
  // Define the group index which will be used as a prefix in the UI for this table's fields, sort criteria, etc:
  $data['mises_solr_clicks']['table']['group'] = t('Solr Results Clicks');

  // Define this as a base table from which views can be made:
  $data['mises_solr_clicks']['table']['base'] = array(
    'field' => 'id',
    'title' => t('Solr Results Clicks'),
    'help' => t('The number of Solr page clicks as recorded by Google Analytics for a given entity\'s page.'),
    'weight' => -10,
  );

  // Allow relationships with node views and define analytics table fields
  $data['mises_solr_clicks']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'entity_id',
    ),
  );

  $data['mises_solr_clicks']['id'] = array(
    'title' => t('Entity Click ID'),
    'help' => t('The unique identifier of the record of an entity\'s solr click count.'),
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
  $data['mises_solr_clicks']['entity_type'] = array(
    'title' => t('Entity Type'),
    'help' => t('The type of entity whose Solr click statistics are being tracked by Google Analytics; for example, "node".'),
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
  $data['mises_solr_clicks']['entity_id'] = array(
    'title' => t('Entity ID'),
    'help' => t('The unique identifier of an entity whose Solr clicks have been tracked by Google Analytics.'),
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
      'label' => t('Analytics Clicks Entity'),
      'title' => t('Analytics Clicks Entity'),
      'help' => t('The unique identifier of an entity whose Solr clicks have been tracked by Google Analytics.'),
    ),
  );
  $data['mises_solr_clicks']['click_count'] = array(
    'title' => t('Click Count'),
    'help' => t('The number of Solr clicks for a given entity that have been tracked by Google Analytics.'),
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
