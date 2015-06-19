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
  $handler->display->display_options['relationships']['field_online_text_target_id']['id'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['table'] = 'field_data_field_online_text';
  $handler->display->display_options['relationships']['field_online_text_target_id']['field'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['label'] = 'Online Text Reference';
  $handler->display->display_options['relationships']['field_online_text_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['id'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['field'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['label'] = 'chapter';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_pages_target_id']['id'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['field'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['label'] = 'page';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sub_page_target_id']['id'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['field'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['label'] = 'sub_page';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sub_page_target_id_1']['id'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['relationships']['field_sub_page_target_id_1']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['relationships']['field_sub_page_target_id_1']['field'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id_1']['label'] = 'sub_sub_page';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
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
  $handler->display->display_options['sorts']['delta_1']['relationship'] = 'field_online_text_target_id';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book_digital_text' => 'book_digital_text',
  );

  /* Display: Table of Contents Block */
  $handler = $view->new_display('block', 'Table of Contents Block', 'book_content_toc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'book-content-toc';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'page_title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'page_title_1',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="panel" id="menu">
  <h3 class="block-title">[title]</h3>
  <p class="book-author">[field_author_1]</p>
  [body]
  <p>[view_node] | <a href="#book-information">Book Information</a></p>
  <p>Select from the table of contents below to read this book.</p>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['alter']['text'] = '[field_author_1]';
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
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
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Other Formats';
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/html/c/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['alt'] = 'Read chapter [chapter_title].';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['empty_zero'] = TRUE;
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
  $handler->display->display_options['fields']['page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['path'] = 'node/[nid]/html/p/[id_1]';
  $handler->display->display_options['fields']['page_title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['alt'] = 'Read page [page_title].';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['page_title']['empty_zero'] = TRUE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_2']['separator'] = '';
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['path'] = 'node/[nid]/html/pp/[id_2]';
  $handler->display->display_options['fields']['page_title_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['alt'] = 'Read page [page_title_1].';
  $handler->display->display_options['fields']['page_title_1']['alter']['preserve_tags'] = '<b><i><em><strong>';
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_3']['id'] = 'id_3';
  $handler->display->display_options['fields']['id_3']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_3']['field'] = 'id';
  $handler->display->display_options['fields']['id_3']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['id_3']['label'] = '';
  $handler->display->display_options['fields']['id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['id_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['id_3']['separator'] = '';
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_2']['id'] = 'page_title_2';
  $handler->display->display_options['fields']['page_title_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_2']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_2']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['page_title_2']['label'] = '';
  $handler->display->display_options['fields']['page_title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['path'] = 'node/[nid]/html/ppp/[id_3]';
  $handler->display->display_options['fields']['page_title_2']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['alt'] = 'read page [page_title_2].';
  $handler->display->display_options['fields']['page_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['page_title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['sorts']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['sorts']['delta_1']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['sorts']['delta_1']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_1']['relationship'] = 'field_online_text_target_id';
  /* Sort criterion: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'field_book_chapter_target_id';
  /* Sort criterion: Book Page: Sub page (field_sub_page:delta) */
  $handler->display->display_options['sorts']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['sorts']['delta_2']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['sorts']['delta_2']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_2']['relationship'] = 'field_book_pages_target_id';
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

  /* Display: Book Landing */
  $handler = $view->new_display('page', 'Book Landing', 'book_landing');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'page_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'page_title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[field_citation]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'book-body';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Book Chapter */
  $handler->display->display_options['fields']['field_book_chapter']['id'] = 'field_book_chapter';
  $handler->display->display_options['fields']['field_book_chapter']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['fields']['field_book_chapter']['field'] = 'field_book_chapter';
  $handler->display->display_options['fields']['field_book_chapter']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_book_chapter']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter']['alter']['path'] = 'node/[nid]/html/c/[field_book_chapter-target_id]';
  $handler->display->display_options['fields']['field_book_chapter']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_book_chapter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_chapter']['element_wrapper_class'] = 'children';
  $handler->display->display_options['fields']['field_book_chapter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_book_chapter']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_book_chapter']['multi_type'] = 'ul';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['label'] = '';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes" id="book-information">
  <h3 class="label-above">Book Information</h3>
  [field_citation]
  <p class="read-more text-right"><a href="#menu">Return to Menu</a></p>
</div>';
  $handler->display->display_options['fields']['field_citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html';

  /* Display: Book Chapter */
  $handler = $view->new_display('page', 'Book Chapter', 'book_chapter');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right"><a href="#current">Return to Table of Contents</a></p>
[field_citation]
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['text'] = '[chapter_title]';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_class'] = 'book-title chapter';
  $handler->display->display_options['fields']['chapter_title']['element_default_classes'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_chapter_content']['element_wrapper_class'] = 'book-content';
  $handler->display->display_options['fields']['field_book_chapter_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Chapter: Pages */
  $handler->display->display_options['fields']['field_book_pages']['id'] = 'field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['field'] = 'field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_pages']['label'] = '';
  $handler->display->display_options['fields']['field_book_pages']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_book_pages']['alter']['path'] = 'node/[nid]/html/p/[field_book_pages-target_id]';
  $handler->display->display_options['fields']['field_book_pages']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_book_pages']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_book_pages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_pages']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_pages']['element_wrapper_class'] = 'children';
  $handler->display->display_options['fields']['field_book_pages']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_pages']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_book_pages']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_book_pages']['multi_type'] = 'ul';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes" id="book-information">
  <h3 class="label-above">Book Information</h3>
  [field_citation]
  <p class="read-more text-right"><a href="#menu">Return to Menu</a></p>
</div>';
  $handler->display->display_options['fields']['field_citation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html/c/%';

  /* Display: Book Page */
  $handler = $view->new_display('page', 'Book Page', 'book_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right"><a href="#current">Return to Table of Contents</a></p>
[field_citation]
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_author_1']['element_wrapper_class'] = 'book-author';
  $handler->display->display_options['fields']['field_author_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/html/c/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['alt'] = '[chapter_title]';
  $handler->display->display_options['fields']['chapter_title']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['chapter_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_class'] = 'book-subtitle chapter';
  $handler->display->display_options['fields']['chapter_title']['element_default_classes'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['page_title']['element_wrapper_class'] = 'book-title page';
  $handler->display->display_options['fields']['page_title']['element_default_classes'] = FALSE;
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_class'] = 'book-content';
  $handler->display->display_options['fields']['field_book_page_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Sub page */
  $handler->display->display_options['fields']['field_sub_page']['id'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['field'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_sub_page']['label'] = '';
  $handler->display->display_options['fields']['field_sub_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_page']['alter']['path'] = 'node/[nid]/html/pp/[field_sub_page-target_id]';
  $handler->display->display_options['fields']['field_sub_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_sub_page']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_sub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_page']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sub_page']['element_wrapper_class'] = 'children';
  $handler->display->display_options['fields']['field_sub_page']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sub_page']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sub_page']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sub_page']['multi_type'] = 'ul';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes" id="book-information">
  <h3 class="label-above">Book Information</h3>
  [field_citation]
  <p class="read-more text-right"><a href="#menu">Return to Menu</a></p>
</div>';
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Page: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_page';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html/p/%';

  /* Display: Book Sub-Page */
  $handler = $view->new_display('page', 'Book Sub-Page', 'book_subpage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right"><a href="#current">Return to Table of Contents</a></p>
[field_citation]
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/html/c/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['alt'] = '[chapter_title]';
  $handler->display->display_options['fields']['chapter_title']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['chapter_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['path'] = 'node/[nid]/html/p/[id_1]';
  $handler->display->display_options['fields']['page_title_1']['alter']['alt'] = '[page_title_1]';
  $handler->display->display_options['fields']['page_title_1']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['page_title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title_1']['element_default_classes'] = FALSE;
  /* Field: Breadcrumb */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Breadcrumb';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="sub-title chapter-page">[chapter_title] > [page_title_1]</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['page_title']['element_wrapper_class'] = 'book-title page';
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_class'] = 'book-content';
  $handler->display->display_options['fields']['field_book_page_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Sub page */
  $handler->display->display_options['fields']['field_sub_page']['id'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['field'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['field_sub_page']['label'] = '';
  $handler->display->display_options['fields']['field_sub_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_page']['alter']['path'] = 'node/[nid]/html/ppp/[field_sub_page-target_id]';
  $handler->display->display_options['fields']['field_sub_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_sub_page']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_sub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_page']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_sub_page']['element_wrapper_class'] = 'children';
  $handler->display->display_options['fields']['field_sub_page']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sub_page']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sub_page']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sub_page']['multi_type'] = 'ul';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes" id="book-information">
  <h3 class="label-above">Book Information</h3>
  [field_citation]
  <p class="read-more text-right"><a href="#menu">Return to Menu</a></p>
</div>';
  $handler->display->display_options['fields']['field_citation']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_citation']['element_wrapper_class'] = 'group-footnotes';
  $handler->display->display_options['fields']['field_citation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Page: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_page';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html/pp/%';

  /* Display: Book Sub-Sub-Page */
  $handler = $view->new_display('page', 'Book Sub-Sub-Page', 'book_subsubpage');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right"><a href="#current">Return to Table of Contents</a></p>
[field_citation]
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/html';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_1']['separator'] = ' ';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Book Chapter: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/html/c/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['alt'] = '[chapter_title]';
  $handler->display->display_options['fields']['chapter_title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['chapter_title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['chapter_title']['element_wrapper_class'] = 'book-subtitle chapter';
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
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['path'] = 'node/[nid]/html/p/[id_1]';
  $handler->display->display_options['fields']['page_title_1']['alter']['alt'] = '[page_title_1]';
  $handler->display->display_options['fields']['page_title_1']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['page_title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_2']['separator'] = '';
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_2']['id'] = 'page_title_2';
  $handler->display->display_options['fields']['page_title_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_2']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_2']['label'] = '';
  $handler->display->display_options['fields']['page_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['path'] = 'node/[nid]/html/pp/[id_2]';
  $handler->display->display_options['fields']['page_title_2']['alter']['alt'] = '[page_title_2]';
  $handler->display->display_options['fields']['page_title_2']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['page_title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['element_label_colon'] = FALSE;
  /* Field: Breadcrumb */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Breadcrumb';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="sub-title chapter-page-page">[chapter_title] > [page_title_1] > [page_title_2]</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['page_title']['element_wrapper_class'] = 'book-title page';
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_book_page_content']['element_wrapper_class'] = 'book-content';
  $handler->display->display_options['fields']['field_book_page_content']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Page: Sub page */
  $handler->display->display_options['fields']['field_sub_page']['id'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['field'] = 'field_sub_page';
  $handler->display->display_options['fields']['field_sub_page']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['field_sub_page']['label'] = '';
  $handler->display->display_options['fields']['field_sub_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_sub_page']['alter']['path'] = 'node/[nid]/html/ppp/[field_sub_page-target_id]';
  $handler->display->display_options['fields']['field_sub_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_page']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sub_page']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sub_page']['multi_type'] = 'ul';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes" id="book-information">
  <h3 class="label-above">Book Information</h3>
  [field_citation]
  <p class="read-more text-right"><a href="#menu">Return to Menu</a></p>
</div>';
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Book Page: Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'eck_book_page';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/html/ppp/%';

  /* Display: Table of Contents Block - Backup */
  $handler = $view->new_display('block', 'Table of Contents Block - Backup', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table of Contents';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'book-content-toc';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'view_link',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'view_link_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'view_link_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_online_text_target_id';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['chapter_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['text'] = '<span id="trigger-[id]">[chapter_title]</span>';
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'book_chapter/book_chapter/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['view_link']['label'] = '';
  $handler->display->display_options['fields']['view_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['text'] = '[chapter_title] - c[id]';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['path'] = 'node/[nid]/html/page/[id_1]';
  $handler->display->display_options['fields']['page_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_1']['id'] = 'view_link_1';
  $handler->display->display_options['fields']['view_link_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_1']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['view_link_1']['label'] = '';
  $handler->display->display_options['fields']['view_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_1']['alter']['text'] = '[page_title] - p[id_1]';
  $handler->display->display_options['fields']['view_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_1']['hide_empty'] = TRUE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['path'] = 'node/[nid]/html/page/[id_2]';
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_2']['id'] = 'view_link_2';
  $handler->display->display_options['fields']['view_link_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_2']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['view_link_2']['label'] = '';
  $handler->display->display_options['fields']['view_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_2']['alter']['text'] = '[page_title_1] -- pp[id_2]';
  $handler->display->display_options['fields']['view_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_2']['hide_empty'] = TRUE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_3']['id'] = 'id_3';
  $handler->display->display_options['fields']['id_3']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_3']['field'] = 'id';
  $handler->display->display_options['fields']['id_3']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['id_3']['label'] = '';
  $handler->display->display_options['fields']['id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['id_3']['empty_zero'] = TRUE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_2']['id'] = 'page_title_2';
  $handler->display->display_options['fields']['page_title_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_2']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_2']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['page_title_2']['label'] = '';
  $handler->display->display_options['fields']['page_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['text'] = '[page_title_2] - pp[id_3]';
  $handler->display->display_options['fields']['page_title_2']['alter']['path'] = 'node/[nid]/html/page/[id_3]';
  $handler->display->display_options['fields']['page_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['empty_zero'] = TRUE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_3']['id'] = 'view_link_3';
  $handler->display->display_options['fields']['view_link_3']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_3']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_3']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['view_link_3']['label'] = '';
  $handler->display->display_options['fields']['view_link_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_3']['alter']['text'] = '[page_title_2] - ppp[id_3]';
  $handler->display->display_options['fields']['view_link_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_link_3']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['sorts']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['sorts']['delta_1']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['sorts']['delta_1']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_1']['relationship'] = 'field_online_text_target_id';
  /* Sort criterion: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'field_book_chapter_target_id';
  /* Sort criterion: Book Page: Sub page (field_sub_page:delta) */
  $handler->display->display_options['sorts']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['sorts']['delta_2']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['sorts']['delta_2']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_2']['relationship'] = 'field_book_pages_target_id';
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

  /* Display: Table of Contents Block Original */
  $handler = $view->new_display('block', 'Table of Contents Block Original', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Table of Contents';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'book_content_toc';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'view_link',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'view_link_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'view_link_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_online_text_target_id';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = 'node/[nid]/html/chapter/[id]';
  $handler->display->display_options['fields']['chapter_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Link */
  $handler->display->display_options['fields']['view_link']['id'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['view_link']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['view_link']['label'] = '';
  $handler->display->display_options['fields']['view_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link']['alter']['text'] = '[chapter_title] - c[id]';
  $handler->display->display_options['fields']['view_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['page_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['path'] = 'node/[nid]/html/page/[id_1]';
  $handler->display->display_options['fields']['page_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_1']['id'] = 'view_link_1';
  $handler->display->display_options['fields']['view_link_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_1']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_1']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['view_link_1']['label'] = '';
  $handler->display->display_options['fields']['view_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_1']['alter']['text'] = '[page_title] - p[id_1]';
  $handler->display->display_options['fields']['view_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_1']['hide_empty'] = TRUE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_2']['id'] = 'id_2';
  $handler->display->display_options['fields']['id_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_2']['field'] = 'id';
  $handler->display->display_options['fields']['id_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['id_2']['label'] = '';
  $handler->display->display_options['fields']['id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_2']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['path'] = 'node/[nid]/html/page/[id_2]';
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_2']['id'] = 'view_link_2';
  $handler->display->display_options['fields']['view_link_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_2']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_2']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['view_link_2']['label'] = '';
  $handler->display->display_options['fields']['view_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_link_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_2']['alter']['text'] = '[page_title_1]';
  $handler->display->display_options['fields']['view_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_2']['hide_empty'] = TRUE;
  /* Field: Book Page: Id */
  $handler->display->display_options['fields']['id_3']['id'] = 'id_3';
  $handler->display->display_options['fields']['id_3']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['id_3']['field'] = 'id';
  $handler->display->display_options['fields']['id_3']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['id_3']['label'] = '';
  $handler->display->display_options['fields']['id_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_3']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_2']['id'] = 'page_title_2';
  $handler->display->display_options['fields']['page_title_2']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_2']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_2']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['page_title_2']['label'] = '';
  $handler->display->display_options['fields']['page_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['page_title_2']['alter']['path'] = 'node/[nid]/html/page/[id_3]';
  $handler->display->display_options['fields']['page_title_2']['element_label_colon'] = FALSE;
  /* Field: Book Page: Link */
  $handler->display->display_options['fields']['view_link_3']['id'] = 'view_link_3';
  $handler->display->display_options['fields']['view_link_3']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['view_link_3']['field'] = 'view_link';
  $handler->display->display_options['fields']['view_link_3']['relationship'] = 'field_sub_page_target_id_1';
  $handler->display->display_options['fields']['view_link_3']['label'] = '';
  $handler->display->display_options['fields']['view_link_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_link_3']['alter']['text'] = '[page_title_2]';
  $handler->display->display_options['fields']['view_link_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_link_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_link_3']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['sorts']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['sorts']['delta_1']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['sorts']['delta_1']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_1']['relationship'] = 'field_online_text_target_id';
  /* Sort criterion: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'field_book_chapter_target_id';
  /* Sort criterion: Book Page: Sub page (field_sub_page:delta) */
  $handler->display->display_options['sorts']['delta_2']['id'] = 'delta_2';
  $handler->display->display_options['sorts']['delta_2']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['sorts']['delta_2']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta_2']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Book Content: Table of Contents';

  /* Display: Book HTML Original */
  $handler = $view->new_display('page_with_page_title', 'Book HTML Original', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'panel';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>
<p class="read-more text-right">[view_node]</p>
<style>h4.sub-heading { color: #4F80A9; }</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[field_citation]
<p class="read-more text-right">[view_node]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_online_text_target_id']['id'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['table'] = 'field_data_field_online_text';
  $handler->display->display_options['relationships']['field_online_text_target_id']['field'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['label'] = 'Online Text Reference';
  $handler->display->display_options['relationships']['field_online_text_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['id'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['field'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['label'] = 'chapter';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_pages_target_id']['id'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['field'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['label'] = 'page';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sub_page_target_id']['id'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['field'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['label'] = 'Sub-Pages';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_wrapper_class'] = 'chapter-content-container';
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['text'] = '<h2 class="teaser-title contrast accordion-toggle"  data-toggle="collapse" data-parent="#book-html" data-target="#chapter-[delta]">[chapter_title]</h3>
';
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = '#';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['text'] = '<h3 class="sub-heading contrast accordion-toggle" data-toggle="collapse" data-parent="#chapter-[delta]" data-target="#page-[delta]-[delta_1]">[page_title]</h3>';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['element_default_classes'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['text'] = '<h4 class="sub-heading contrast accordion-toggle">[page_title_1]</h4>';
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content_1']['id'] = 'field_book_page_content_1';
  $handler->display->display_options['fields']['field_book_page_content_1']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content_1']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['field_book_page_content_1']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content_1']['alter']['text'] = '<div class="panel subpage">
[page_title_1]
<div class="collapse subpage-content">[field_book_page_content_1-value]</div>
</div>';
  $handler->display->display_options['fields']['field_book_page_content_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content_1']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content']['alter']['text'] = '<div class="collapse" id="page-[delta]-[delta_1]"><div class="page-content">[field_book_page_content]</div>[field_book_page_content_1]</div>';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes">
  <h3 class="label-above">Book Information</h3>
  <p>[field_citation]</p>
</div>';
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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
  $handler->display->display_options['path'] = 'node/%/htmloriginal';
  $handler->display->display_options['page_title_pattern'] = '[current-page:url:args:value:2]';

  /* Display: Book HTML */
  $handler = $view->new_display('page_with_page_title', 'Book HTML', 'book_html');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Books / Digital Text';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'chapter_title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'panel';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="page-title">[title]</h2>
<p class="read-more text-right">[view_node]</p>
<style>h4.sub-heading { color: #4F80A9; }</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[field_citation]
<p class="read-more text-right">[view_node]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_online_text_target_id']['id'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['table'] = 'field_data_field_online_text';
  $handler->display->display_options['relationships']['field_online_text_target_id']['field'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_online_text_target_id']['label'] = 'Online Text Reference';
  $handler->display->display_options['relationships']['field_online_text_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['id'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['field'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['relationships']['field_book_chapter_target_id']['label'] = 'chapter';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_book_pages_target_id']['id'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['field'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['relationships']['field_book_pages_target_id']['label'] = 'page';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sub_page_target_id']['id'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['table'] = 'field_data_field_sub_page';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['field'] = 'field_sub_page_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['relationships']['field_sub_page_target_id']['label'] = 'Sub-Pages';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Book Chapter (field_book_chapter:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_book_chapter';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Chapter Content */
  $handler->display->display_options['fields']['field_book_chapter_content']['id'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['table'] = 'field_data_field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['field'] = 'field_book_chapter_content';
  $handler->display->display_options['fields']['field_book_chapter_content']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_chapter_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_chapter_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_chapter_content']['element_wrapper_class'] = 'chapter-content-container';
  $handler->display->display_options['fields']['field_book_chapter_content']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Book Chapter: Chapter Title */
  $handler->display->display_options['fields']['chapter_title']['id'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['table'] = 'eck_book_chapter';
  $handler->display->display_options['fields']['chapter_title']['field'] = 'chapter_title';
  $handler->display->display_options['fields']['chapter_title']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['chapter_title']['label'] = '';
  $handler->display->display_options['fields']['chapter_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['chapter_title']['alter']['text'] = '<h2 class="teaser-title contrast accordion-toggle"  data-toggle="collapse" data-parent="#book-html" data-target="#chapter-[delta]">[chapter_title]</h3>
';
  $handler->display->display_options['fields']['chapter_title']['alter']['path'] = '#';
  $handler->display->display_options['fields']['chapter_title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['chapter_title']['element_label_colon'] = FALSE;
  /* Field: Book Chapter: Pages (field_book_pages:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['page_title']['label'] = '';
  $handler->display->display_options['fields']['page_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['page_title']['alter']['text'] = '<h3 class="sub-heading contrast accordion-toggle" data-toggle="collapse" data-parent="#chapter-[delta]" data-target="#page-[delta]-[delta_1]">[page_title]</h3>';
  $handler->display->display_options['fields']['page_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_title']['element_default_classes'] = FALSE;
  /* Field: Book Page: Page Title */
  $handler->display->display_options['fields']['page_title_1']['id'] = 'page_title_1';
  $handler->display->display_options['fields']['page_title_1']['table'] = 'eck_book_page';
  $handler->display->display_options['fields']['page_title_1']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['page_title_1']['label'] = '';
  $handler->display->display_options['fields']['page_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['page_title_1']['alter']['text'] = '<h4 class="sub-heading contrast accordion-toggle">[page_title_1]</h4>';
  $handler->display->display_options['fields']['page_title_1']['element_label_colon'] = FALSE;
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content_1']['id'] = 'field_book_page_content_1';
  $handler->display->display_options['fields']['field_book_page_content_1']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content_1']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content_1']['relationship'] = 'field_sub_page_target_id';
  $handler->display->display_options['fields']['field_book_page_content_1']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content_1']['alter']['text'] = '<div class="panel subpage">
[page_title_1]
<div class="collapse subpage-content">[field_book_page_content_1-value]</div>
</div>';
  $handler->display->display_options['fields']['field_book_page_content_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content_1']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Page Content */
  $handler->display->display_options['fields']['field_book_page_content']['id'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['table'] = 'field_data_field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['field'] = 'field_book_page_content';
  $handler->display->display_options['fields']['field_book_page_content']['relationship'] = 'field_book_pages_target_id';
  $handler->display->display_options['fields']['field_book_page_content']['label'] = '';
  $handler->display->display_options['fields']['field_book_page_content']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_book_page_content']['alter']['text'] = '<div class="collapse" id="page-[delta]-[delta_1]"><div class="page-content">[field_book_page_content]</div>[field_book_page_content_1]</div>';
  $handler->display->display_options['fields']['field_book_page_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_page_content']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['view_node']['text'] = 'Return to Book';
  /* Field: Content: Book Information */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['relationship'] = 'field_online_text_target_id';
  $handler->display->display_options['fields']['field_citation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citation']['alter']['text'] = '<div class="group-footnotes">
  <h3 class="label-above">Book Information</h3>
  <p>[field_citation]</p>
</div>';
  $handler->display->display_options['fields']['field_citation']['settings'] = array(
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

  /* Display: Book Page */
  $handler = $view->new_display('page', 'Book Page', 'book_page_original');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[title]';
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
  /* Field: Field: Page Content */
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/html/page/%';

  /* Display: Book Chapter */
  $handler = $view->new_display('page', 'Book Chapter', 'book_chapter_original');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[title]';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  /* Field: Book Chapter: Pages */
  $handler->display->display_options['fields']['field_book_pages']['id'] = 'field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['table'] = 'field_data_field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['field'] = 'field_book_pages';
  $handler->display->display_options['fields']['field_book_pages']['relationship'] = 'field_book_chapter_target_id';
  $handler->display->display_options['fields']['field_book_pages']['label'] = '';
  $handler->display->display_options['fields']['field_book_pages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_pages']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_book_pages']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_book_pages']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['path'] = 'book_chapter/%';
  $export['book_content'] = $view;

  return $export;
}
