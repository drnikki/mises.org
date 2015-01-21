<?php
/**
 * @file
 * mises_content_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_content_management_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mises_content_admin';
  $view->description = 'Custom Content Listings';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Custom Content Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Page Title List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'set page title';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 25, 50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'page_title' => 'page_title',
    'changed' => 'changed',
    'type' => 'type',
    'field_author_1' => 'field_author_1',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'page_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_author_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Header Text */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Header Text';
  $handler->display->display_options['header']['area']['content'] = 'Listed below are all the nodes on the site with their Page Title (if set).';
  /* No results behavior: Empty Text */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'Empty Text';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content to list.';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_1_target_id']['id'] = 'field_author_1_target_id';
  $handler->display->display_options['relationships']['field_author_1_target_id']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['relationships']['field_author_1_target_id']['field'] = 'field_author_1_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Page Title: Title */
  $handler->display->display_options['fields']['page_title']['id'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['table'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['field'] = 'page_title';
  $handler->display->display_options['fields']['page_title']['label'] = 'SEO Page Title';
  $handler->display->display_options['fields']['page_title']['link_to_node'] = 0;
  $handler->display->display_options['fields']['page_title']['use_node_title'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Content Type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Library Item Type */
  $handler->display->display_options['fields']['field_library_item_tree']['id'] = 'field_library_item_tree';
  $handler->display->display_options['fields']['field_library_item_tree']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['fields']['field_library_item_tree']['field'] = 'field_library_item_tree';
  $handler->display->display_options['fields']['field_library_item_tree']['type'] = 'term_reference_tree';
  $handler->display->display_options['fields']['field_library_item_tree']['settings'] = array(
    'token_display_selected' => '',
    'token_display_unselected' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_library_item_tree']['delta_offset'] = '0';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Online text */
  $handler->display->display_options['fields']['field_online_text']['id'] = 'field_online_text';
  $handler->display->display_options['fields']['field_online_text']['table'] = 'field_data_field_online_text';
  $handler->display->display_options['fields']['field_online_text']['field'] = 'field_online_text';
  $handler->display->display_options['fields']['field_online_text']['label'] = 'Related Online Text';
  $handler->display->display_options['fields']['field_online_text']['settings'] = array(
    'link' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Node ID (NID) is:';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title Contains:';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Page Title: Title */
  $handler->display->display_options['filters']['page_title']['id'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['table'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['field'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['page_title']['group'] = 1;
  $handler->display->display_options['filters']['page_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['page_title']['expose']['label'] = '"Page Title" Contains:';
  $handler->display->display_options['filters']['page_title']['expose']['identifier'] = 'page_title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator_id'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['label'] = 'Library Item Type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['identifier'] = 'library-type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/mises-content';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Content List with Filters';
  $handler->display->display_options['menu']['description'] = 'List all nodes with their Page Titles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Online Text List */
  $handler = $view->new_display('page', 'Online Text List', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Item Pages with Online Text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Node ID (NID) is:';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title Contains:';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Page Title: Title */
  $handler->display->display_options['filters']['page_title']['id'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['table'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['field'] = 'page_title';
  $handler->display->display_options['filters']['page_title']['operator'] = 'contains';
  $handler->display->display_options['filters']['page_title']['group'] = 1;
  $handler->display->display_options['filters']['page_title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['page_title']['expose']['label'] = '"Page Title" Contains:';
  $handler->display->display_options['filters']['page_title']['expose']['identifier'] = 'page_title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator_id'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['label'] = 'Library Item Type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['identifier'] = 'library-type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    9 => 0,
    8 => 0,
    6 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Online text (field_online_text) */
  $handler->display->display_options['filters']['field_online_text_target_id']['id'] = 'field_online_text_target_id';
  $handler->display->display_options['filters']['field_online_text_target_id']['table'] = 'field_data_field_online_text';
  $handler->display->display_options['filters']['field_online_text_target_id']['field'] = 'field_online_text_target_id';
  $handler->display->display_options['filters']['field_online_text_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'admin/content/related-online-text-pages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Library Items with Related Online Texts';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['mises_content_admin'] = $view;

  return $export;
}
