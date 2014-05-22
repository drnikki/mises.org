<?php
/**
 * @file
 * mises_popular_content_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_popular_content_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'popular_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Popular Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Most Popular Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'simple_teaser';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Please check back soon for popular posts.';
  $handler->display->display_options['empty']['area']['format'] = 'simplified';
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['required'] = TRUE;
  /* Sort criterion: Analytics Page Hits: Hit Count */
  $handler->display->display_options['sorts']['hit_count']['id'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['sorts']['hit_count']['field'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['relationship'] = 'entity_id';
  $handler->display->display_options['sorts']['hit_count']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['popular_content'] = $view;

  return $export;
}
