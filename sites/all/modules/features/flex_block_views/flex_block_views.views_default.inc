<?php
/**
 * @file
 * flex_block_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function flex_block_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flex_blocks';
  $view->description = 'Helper for Flex Block context placement.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flex Blocks';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'top_left' => 'top_left',
  );

  /* Display: Flex Block Management */
  $handler = $view->new_display('page', 'Flex Block Management', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Flex Block Management';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_region_editable' => 'field_region_editable',
    'field_section_editable' => 'field_section_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section_editable' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Use the fields in the table below to quickly select the region, section and weight of Flex Blocks. After editing, click "SAVE" below the table.

Click the "Edit" link to edit an individual Flex Block.

To find a specific block, use the filters to narrow the list of blocks. You can search by descriptive or display title, as well as the region or section.';
  $handler->display->display_options['header']['area']['format'] = 'simplified';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Descriptive Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Region (editable) */
  $handler->display->display_options['fields']['field_region_editable']['id'] = 'field_region_editable';
  $handler->display->display_options['fields']['field_region_editable']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region_editable']['field'] = 'field_region_editable';
  $handler->display->display_options['fields']['field_region_editable']['label'] = 'Region';
  $handler->display->display_options['fields']['field_region_editable']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_region_editable']['widget_type'] = 'options_select';
  $handler->display->display_options['fields']['field_region_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_region_editable']['suppress_description'] = 0;
  /* Field: Content: Section (editable) */
  $handler->display->display_options['fields']['field_section_editable']['id'] = 'field_section_editable';
  $handler->display->display_options['fields']['field_section_editable']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section_editable']['field'] = 'field_section_editable';
  $handler->display->display_options['fields']['field_section_editable']['label'] = 'Section';
  $handler->display->display_options['fields']['field_section_editable']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_section_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_section_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_section_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_section_editable']['suppress_description'] = 0;
  /* Field: Content: Weight (editable) */
  $handler->display->display_options['fields']['field_weight_editable']['id'] = 'field_weight_editable';
  $handler->display->display_options['fields']['field_weight_editable']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight_editable']['field'] = 'field_weight_editable';
  $handler->display->display_options['fields']['field_weight_editable']['label'] = 'Weight';
  $handler->display->display_options['fields']['field_weight_editable']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_weight_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_weight_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_weight_editable']['suppress_description'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit Flex Block';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'flex_block' => 'flex_block',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Descriptive Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Field: Display Title (field_display_title) */
  $handler->display->display_options['filters']['field_display_title_value']['id'] = 'field_display_title_value';
  $handler->display->display_options['filters']['field_display_title_value']['table'] = 'field_data_field_display_title';
  $handler->display->display_options['filters']['field_display_title_value']['field'] = 'field_display_title_value';
  $handler->display->display_options['filters']['field_display_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_display_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_display_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_display_title_value']['expose']['operator_id'] = 'field_display_title_value_op';
  $handler->display->display_options['filters']['field_display_title_value']['expose']['label'] = 'Display Title';
  $handler->display->display_options['filters']['field_display_title_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_display_title_value']['expose']['operator'] = 'field_display_title_value_op';
  $handler->display->display_options['filters']['field_display_title_value']['expose']['identifier'] = 'field_display_title_value';
  $handler->display->display_options['filters']['field_display_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_section_value']['expose']['operator_id'] = 'field_section_value_op';
  $handler->display->display_options['filters']['field_section_value']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['field_section_value']['expose']['operator'] = 'field_section_value_op';
  $handler->display->display_options['filters']['field_section_value']['expose']['identifier'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/config/flex-blocks';

  /* Display: Content Btm Right Library */
  $handler = $view->new_display('block', 'Content Btm Right Library', 'block_15');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_right' => 'bottom_right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'library' => 'library',
  );

  /* Display: Content Btm Left Library */
  $handler = $view->new_display('block', 'Content Btm Left Library', 'block_14');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_left' => 'bottom_left',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'library' => 'library',
  );

  /* Display: Sidebar Library */
  $handler = $view->new_display('block', 'Sidebar Library', 'block_13');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'library' => 'library',
  );

  /* Display: Top Sidebar Library */
  $handler = $view->new_display('block', 'Top Sidebar Library', 'block_12');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'background-secondary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'library' => 'library',
  );

  /* Display: Content Btm Left Press Room */
  $handler = $view->new_display('block', 'Content Btm Left Press Room', 'block_16');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_left' => 'bottom_left',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'press' => 'press',
  );

  /* Display: Content Btm Right Press Room */
  $handler = $view->new_display('block', 'Content Btm Right Press Room', 'block_17');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_right' => 'bottom_right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'press' => 'press',
  );

  /* Display: Sidebar About */
  $handler = $view->new_display('block', 'Sidebar About', 'block_21');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'about' => 'about',
  );

  /* Display: Top Sidebar About */
  $handler = $view->new_display('block', 'Top Sidebar About', 'block_20');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'background-secondary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'about' => 'about',
  );

  /* Display: Sidebar Economist */
  $handler = $view->new_display('block', 'Sidebar Economist', 'block_19');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'economist' => 'economist',
  );

  /* Display: Top Sidebar Economist */
  $handler = $view->new_display('block', 'Top Sidebar Economist', 'block_18');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'background-secondary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'economist' => 'economist',
  );

  /* Display: Top Sidebar Daily */
  $handler = $view->new_display('block', 'Top Sidebar Daily', 'block_11');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'daily' => 'daily',
  );

  /* Display: Top Sidebar Inside */
  $handler = $view->new_display('block', 'Top Sidebar Inside', 'block_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'inside' => 'inside',
  );

  /* Display: Footer Bottom */
  $handler = $view->new_display('block', 'Footer Bottom', 'block_3');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'footer_bottom' => 'footer_bottom',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'sitewide' => 'sitewide',
  );

  /* Display: Footer Right */
  $handler = $view->new_display('block', 'Footer Right', 'block_2');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'footer_right' => 'footer_right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'sitewide' => 'sitewide',
  );

  /* Display: Top Right Ad */
  $handler = $view->new_display('block', 'Top Right Ad', 'block_1');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'top_right' => 'top_right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'sitewide' => 'sitewide',
  );

  /* Display: Top Left Ad */
  $handler = $view->new_display('block', 'Top Left Ad', 'block');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'top_left' => 'top_left',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'sitewide' => 'sitewide',
  );

  /* Display: Nav Bar */
  $handler = $view->new_display('block', 'Nav Bar', 'block_4');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'nav' => 'nav',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'sitewide' => 'sitewide',
  );

  /* Display: Sidebar Home */
  $handler = $view->new_display('block', 'Sidebar Home', 'block_5');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'home' => 'home',
  );

  /* Display: Featured Left Home */
  $handler = $view->new_display('block', 'Featured Left Home', 'block_8');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'featured_left' => 'featured_left',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'home' => 'home',
  );

  /* Display: Featured Right Home */
  $handler = $view->new_display('block', 'Featured Right Home', 'block_7');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'featured_right' => 'featured_right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'home' => 'home',
  );

  /* Display: Sidebar Daily */
  $handler = $view->new_display('block', 'Sidebar Daily', 'block_9');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'daily' => 'daily',
  );

  /* Display: Sidebar Inside */
  $handler = $view->new_display('block', 'Sidebar Inside', 'block_6');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'inside' => 'inside',
  );

  /* Display: Sidebar Daily */
  $handler = $view->new_display('block', 'Sidebar Daily', 'block_22');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'daily' => 'daily',
  );

  /* Display: Sidebar Blog */
  $handler = $view->new_display('block', 'Sidebar Blog', 'block_23');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Top Sidebar Blog */
  $handler = $view->new_display('block', 'Top Sidebar Blog', 'block_24');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'background-secondary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_value']['id'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_value']['field'] = 'field_section_value';
  $handler->display->display_options['filters']['field_section_value']['value'] = array(
    'blog' => 'blog',
  );
  $export['flex_blocks'] = $view;

  $view = new view();
  $view->name = 'flex_blocks_node_specific';
  $view->description = 'Helper for Flex Block context placement.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Flex Blocks - Node Specific';
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_on_page_target_id']['id'] = 'field_on_page_target_id';
  $handler->display->display_options['relationships']['field_on_page_target_id']['table'] = 'field_data_field_on_page';
  $handler->display->display_options['relationships']['field_on_page_target_id']['field'] = 'field_on_page_target_id';
  $handler->display->display_options['relationships']['field_on_page_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_on_page_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'top_left' => 'top_left',
  );

  /* Display: Top Sidebar */
  $handler = $view->new_display('block', 'Top Sidebar', 'block_20');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'background-secondary';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right_top' => 'right_top',
  );

  /* Display: Sidebar */
  $handler = $view->new_display('block', 'Sidebar', 'block_19');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'right' => 'right',
  );

  /* Display: Featured Left */
  $handler = $view->new_display('block', 'Featured Left', 'block_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'featured_left' => 'featured_left',
  );

  /* Display: Featured Right */
  $handler = $view->new_display('block', 'Featured Right', 'block_7');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'featured_right' => 'featured_right',
  );

  /* Display: Content Bottom Left */
  $handler = $view->new_display('block', 'Content Bottom Left', 'block_1');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_left' => 'bottom_left',
  );

  /* Display: Content Bottom Right */
  $handler = $view->new_display('block', 'Content Bottom Right', 'block_2');
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
    'flex_block' => 'flex_block',
  );
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'bottom_right' => 'bottom_right',
  );
  $export['flex_blocks_node_specific'] = $view;

  return $export;
}
