<?php
/**
 * @file
 * mises_image_source.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_image_source_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_source';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Source';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Source';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Image (field_image_collection) */
  $handler->display->display_options['relationships']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['relationships']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['relationships']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['relationships']['field_image_collection_value']['delta'] = '-1';
  /* Field: Field: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['relationship'] = 'field_image_collection_value';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_source']['alter']['text'] = '<strong>Image source: </strong>[field_source]';
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_source']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['image_source'] = $view;

  return $export;
}
