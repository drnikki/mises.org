<?php
/**
 * @file
 * mises_book_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_book_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book Content';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['id'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['field'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['label'] = 'chapter';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_pages_target_id']['id'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['field'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['label'] = 'page';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = '#';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['sorts']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['sorts']['delta_1']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['sorts']['delta_1']['field'] = 'delta';
  /* Sort criterion: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'field_book_chapter_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Chapter: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
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
    'book_digital_text' => 'book_digital_text',
  );

  /* Display: Book Chapter */
  $handler = $view->new_display('page', 'Book Chapter', 'book_chapter');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['id'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['field'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['label'] = 'chapter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['element_default_classes'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Chapter: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/%';

  /* Display: Book Page */
  $handler = $view->new_display('page', 'Book Page', 'book_page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = '#';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Chapter: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Page: Id */
  $handler->display->display_options['arguments']['id_1']['id'] = 'id_1';
  $handler->display->display_options['arguments']['id_1']['table'] = 'eck_book_page';
  $handler->display->display_options['arguments']['id_1']['field'] = 'id';
  $handler->display->display_options['arguments']['id_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['arguments']['id_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id_1']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['id_1']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['id_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/%/%';

  /* Display: Table of Contents Block */
  $handler = $view->new_display('block', 'Table of Contents Block', 'book_content_toc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table of Contents';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'book_content_toc';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['id_1']['label'] = '';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['path'] = 'node/[nid]/[id]/[id_1]';
  $handler->display->display_options['fields']['page_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Book Content: Table of Contents';

  /* Display: Page (with Page Title) */
  $handler = $view->new_display('page_with_page_title', 'Page (with Page Title)', 'book_content');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = '#';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html';
  $handler->display->display_options['page_title_pattern'] = '[current-page:url:args:value:2]';
  $export['book_content'] = $view;

  return $export;
}
