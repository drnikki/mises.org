<?php
/**
 * @file
 * solr_clicks_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function solr_clicks_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mises_solr_clicks_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'mises_solr_clicks';
  $view->human_name = 'Mises Solr Clicks Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mises Solr Clicks Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access site reports';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'click_count' => 'click_count',
    'created' => 'created',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'click_count';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'click_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Solr Results Clicks: Analytics Clicks Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_solr_clicks';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'entity_id';
  /* Field: Solr Results Clicks: Click Count */
  $handler->display->display_options['fields']['click_count']['id'] = 'click_count';
  $handler->display->display_options['fields']['click_count']['table'] = 'mises_solr_clicks';
  $handler->display->display_options['fields']['click_count']['field'] = 'click_count';
  $handler->display->display_options['fields']['click_count']['label'] = 'Clicks';
  $handler->display->display_options['fields']['click_count']['separator'] = '';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'entity_id';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'entity_id';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'entity_id';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Solr Results Clicks: Click Count */
  $handler->display->display_options['sorts']['click_count']['id'] = 'click_count';
  $handler->display->display_options['sorts']['click_count']['table'] = 'mises_solr_clicks';
  $handler->display->display_options['sorts']['click_count']['field'] = 'click_count';
  $handler->display->display_options['sorts']['click_count']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/mises/solr-clicks-report';
  $export['mises_solr_clicks_report'] = $view;

  return $export;
}
