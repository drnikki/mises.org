<?php
/**
 * @file
 * mises_library_landing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_library_landing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mises_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mises Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'latest-library-content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  /* Relationship: Taxonomy term: Content using Library Item Type */
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['id'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['field'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['relationship'] = 'field_library_item_tree_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_collection']['id'] = 'field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['field'] = 'field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['label'] = '';
  $handler->display->display_options['fields']['field_image_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_collection']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_image_collection']['settings'] = array(
    'view_mode' => 'single_image',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_image_collection']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_image_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_collection']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'Browse [name]';
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['tid']['element_type'] = 'div';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
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
  /* Filter criterion: Content: Image (field_image_collection:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  /* Filter criterion: Content: Topics (field_topics:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '1';

  /* Display: Latest Library Content */
  $handler = $view->new_display('block', 'Latest Library Content', 'latest_library_content');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'latest-library-content outset clearfix';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[name]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser_term';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array(
    'field_library_item_tree' => 'field_library_item_tree',
  );
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'block_teaser_term';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Image (field_image_collection:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Library Item Type (field_library_item_tree:delta) */
  $handler->display->display_options['filters']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['filters']['delta_1']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['delta_1']['field'] = 'delta';
  $handler->display->display_options['filters']['delta_1']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Latest Library Content';

  /* Display: Mises View */
  $handler = $view->new_display('block', 'Mises View', 'mises_view');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'latest-mises-video mises-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  /* Relationship: Taxonomy term: Content using Library Item Type */
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['id'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['field'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['relationship'] = 'field_library_item_tree_tid';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_collection']['id'] = 'field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['field'] = 'field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['label'] = '';
  $handler->display->display_options['fields']['field_media_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_media_collection']['settings'] = array(
    'view_mode' => 'small_player',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_media_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_media_collection']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading"><div class="panel-title">Mises View</div></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'sub-heading secondary';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span> Browse Mises View Videos';
  $handler->display->display_options['fields']['name']['element_type'] = 'p';
  $handler->display->display_options['fields']['name']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'panel-footer';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['sorts']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['order'] = 'DESC';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Media (field_media_collection) */
  $handler->display->display_options['filters']['field_media_collection_value']['id'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['filters']['field_media_collection_value']['field'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_media_collection_value']['group'] = 1;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Mises View';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_view' => 'featured_view',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;

  /* Display: Featured Video */
  $handler = $view->new_display('block', 'Featured Video', 'featured_video');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-video video';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = 'mises_library';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'video_block_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  /* Relationship: Taxonomy term: Content using Library Item Type */
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['id'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['field'] = 'reverse_field_library_item_tree_node';
  $handler->display->display_options['relationships']['reverse_field_library_item_tree_node']['relationship'] = 'field_library_item_tree_tid';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media */
  $handler->display->display_options['fields']['field_media_collection']['id'] = 'field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['field'] = 'field_media_collection';
  $handler->display->display_options['fields']['field_media_collection']['label'] = '';
  $handler->display->display_options['fields']['field_media_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_media_collection']['settings'] = array(
    'view_mode' => 'small_player',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_media_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_media_collection']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="panel-heading"><div class="panel-title">Featured Video</div></div>

<div class="panel-body">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'sub-heading secondary';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Browse Mises Audio/Video';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'panel-footer';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['sorts']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['sorts']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['sorts']['field_featured_content_value']['order'] = 'DESC';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Media (field_media_collection) */
  $handler->display->display_options['filters']['field_media_collection_value']['id'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['filters']['field_media_collection_value']['field'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_media_collection_value']['group'] = 1;
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Audio/Video';
  $handler->display->display_options['filters']['name']['group'] = 1;
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
  $export['mises_library'] = $view;

  return $export;
}
