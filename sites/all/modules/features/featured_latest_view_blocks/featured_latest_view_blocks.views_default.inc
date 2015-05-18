<?php
/**
 * @file
 * featured_latest_view_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function featured_latest_view_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_latest_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Latest Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['sorts']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Featured Video */
  $handler = $view->new_display('block', 'Featured Video', 'featured_video');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-block video border-contrast';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Media (field_media_collection) */
  $handler->display->display_options['relationships']['field_media_collection_value']['id'] = 'field_media_collection_value';
  $handler->display->display_options['relationships']['field_media_collection_value']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['relationships']['field_media_collection_value']['field'] = 'field_media_collection_value';
  $handler->display->display_options['relationships']['field_media_collection_value']['delta'] = '-1';
  /* Relationship: Field collection item: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['relationship'] = 'field_media_collection_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_video' => 'featured_video',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;
  $export['featured_latest_content'] = $view;

  return $export;
}
