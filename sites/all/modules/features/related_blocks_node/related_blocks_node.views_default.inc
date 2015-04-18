<?php
/**
 * @file
 * related_blocks_node.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function related_blocks_node_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_blocks_node';
  $view->description = 'Page and contextual blocks for term page';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Related Blocks - Node';
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
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:books';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_topics_node']['id'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['field'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['relationship'] = 'field_topics_target_id';
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_topics_node';
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
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Related Topics Block */
  $handler = $view->new_display('block', 'Related Topics Block', 'topics');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'topic';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_topics_node']['id'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['field'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_topic' => 'featured_topic',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;

  /* Display: Related Level Block */
  $handler = $view->new_display('block', 'Related Level Block', 'level');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'level';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:library_block';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['relationships']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['field_level_target_id']['label'] = 'level';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_level_node']['id'] = 'reverse_field_level_node';
  $handler->display->display_options['relationships']['reverse_field_level_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_level_node']['field'] = 'reverse_field_level_node';
  $handler->display->display_options['relationships']['reverse_field_level_node']['relationship'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['reverse_field_level_node']['label'] = 'content reference';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_level_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_level' => 'featured_level',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;

  /* Display: Related Audience Block */
  $handler = $view->new_display('block', 'Related Audience Block', 'audience');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:mises_weekends';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_audience_target_id']['id'] = 'field_audience_target_id';
  $handler->display->display_options['relationships']['field_audience_target_id']['table'] = 'field_data_field_audience';
  $handler->display->display_options['relationships']['field_audience_target_id']['field'] = 'field_audience_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_audience_node']['id'] = 'reverse_field_audience_node';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['field'] = 'reverse_field_audience_node';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['relationship'] = 'field_audience_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_audience_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_audience' => 'featured_audience',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;

  /* Display: Related Course Block */
  $handler = $view->new_display('block', 'Related Course Block', 'courses');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'online-courses';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:online_courses';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';

  /* Display: Related Level Attachment */
  $handler = $view->new_display('attachment', 'Related Level Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel-footer';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['relationships']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['field_level_target_id']['label'] = 'level';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_level_node']['id'] = 'reverse_field_level_node';
  $handler->display->display_options['relationships']['reverse_field_level_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_level_node']['field'] = 'reverse_field_level_node';
  $handler->display->display_options['relationships']['reverse_field_level_node']['relationship'] = 'field_level_target_id';
  $handler->display->display_options['relationships']['reverse_field_level_node']['label'] = 'content reference';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_level_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span>Browse [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_level_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_level' => 'featured_level',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;
  $handler->display->display_options['displays'] = array(
    'level' => 'level',
    'default' => 0,
    'topics' => 0,
    'audience' => 0,
    'courses' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Related Topic Attachment */
  $handler = $view->new_display('attachment', 'Related Topic Attachment', 'attachment_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel-footer';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_topics_node']['id'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['field'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span> Browse [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_topic' => 'featured_topic',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;
  $handler->display->display_options['displays'] = array(
    'topics' => 'topics',
    'default' => 0,
    'level' => 0,
    'audience' => 0,
    'courses' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Related Audience Attachment */
  $handler = $view->new_display('attachment', 'Related Audience Attachment', 'attachment_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel-footer';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_audience_target_id']['id'] = 'field_audience_target_id';
  $handler->display->display_options['relationships']['field_audience_target_id']['table'] = 'field_data_field_audience';
  $handler->display->display_options['relationships']['field_audience_target_id']['field'] = 'field_audience_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_audience_node']['id'] = 'reverse_field_audience_node';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['field'] = 'reverse_field_audience_node';
  $handler->display->display_options['relationships']['reverse_field_audience_node']['relationship'] = 'field_audience_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_audience_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span> Browse [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_audience_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_audience' => 'featured_audience',
  );
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['displays'] = array(
    'audience' => 'audience',
    'default' => 0,
    'topics' => 0,
    'level' => 0,
    'courses' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Related Course Attachment */
  $handler = $view->new_display('attachment', 'Related Course Attachment', 'attachment_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'panel-footer';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_topics_node']['id'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['field'] = 'reverse_field_topics_node';
  $handler->display->display_options['relationships']['reverse_field_topics_node']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span> Browse Courses';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[name]?type=course';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_topics_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['displays'] = array(
    'courses' => 'courses',
    'default' => 0,
    'topics' => 0,
    'level' => 0,
    'audience' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['related_blocks_node'] = $view;

  return $export;
}
