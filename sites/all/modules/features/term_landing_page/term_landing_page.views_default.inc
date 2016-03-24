<?php
/**
 * @file
 * term_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function term_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'filtered_landing_term_page';
  $view->description = 'Page and contextual blocks for term page';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Filtered Landing - Term Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer"><a href="/taxonomy/term/17">Visit Press Room</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
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
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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

  /* Display: Filtered Term Landing */
  $handler = $view->new_display('page', 'Filtered Term Landing', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => '',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'ALL',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_1_target_id_entityreference_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Authors',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Topics',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_austrian_school_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Austrian School',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_level_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Levels',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another option or the "Clear All" button to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Filter by Title:';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    2 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    5 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    9 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    10 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    11 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    12 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    16 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    17 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    18 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'R',
    ),
    19 => array(
      'title' => 'S',
      'operator' => 'starts',
      'value' => 'S',
    ),
    20 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    21 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    22 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
    23 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    24 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    25 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    26 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
  );
  /* Filter criterion: Field: Author (field_author_1) (reference filter) */
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['id'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['field'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator_id'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['hide_empty_filter'] = FALSE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['reference_display'] = 'filtered_landing_term_page:entityreference_1';
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator_id'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Austrian School (field_austrian_school) */
  $handler->display->display_options['filters']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator_id'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['label'] = 'Austrian School';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['identifier'] = 'austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Level (field_level) */
  $handler->display->display_options['filters']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['filters']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator_id'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['label'] = 'Level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['identifier'] = 'level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Book Filtered Term Landing */
  $handler = $view->new_display('page', 'Book Filtered Term Landing', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list filtered-books';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by:';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => '',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort',
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_books_target_id' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'ALL',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_1_target_id_entityreference_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Author',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Topic',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_austrian_school_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Austrian School',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_level_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Level',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another option or the "Clear All" button to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mises_published_date_value']['expose']['label'] = 'Newest First';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['id'] = 'field_mises_published_date_value_1';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['expose']['label'] = 'Oldest First';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title A-Z';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
  $handler->display->display_options['sorts']['title_1']['table'] = 'node';
  $handler->display->display_options['sorts']['title_1']['field'] = 'title';
  $handler->display->display_options['sorts']['title_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_1']['expose']['label'] = 'Title Z-A';
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
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Book Type (field_books) */
  $handler->display->display_options['filters']['field_books_target_id']['id'] = 'field_books_target_id';
  $handler->display->display_options['filters']['field_books_target_id']['table'] = 'field_data_field_books';
  $handler->display->display_options['filters']['field_books_target_id']['field'] = 'field_books_target_id';
  $handler->display->display_options['filters']['field_books_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_books_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_books_target_id']['expose']['operator_id'] = 'field_books_target_id_op';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['label'] = 'Select Format:';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['operator'] = 'field_books_target_id_op';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['identifier'] = 'book_type';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Filter by Title:';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    2 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    5 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    9 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    10 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    11 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    12 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    16 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    17 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    18 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'R',
    ),
    19 => array(
      'title' => 'S',
      'operator' => 'starts',
      'value' => 'S',
    ),
    20 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    21 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    22 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    23 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    24 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    25 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    26 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
  );
  /* Filter criterion: Field: Author (field_author_1) (reference filter) */
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['id'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['field'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator_id'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['hide_empty_filter'] = FALSE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['reference_display'] = 'filtered_landing_term_page:entityreference_2';
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator_id'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Austrian School (field_austrian_school) */
  $handler->display->display_options['filters']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator_id'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['label'] = 'Austrian School';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['identifier'] = 'austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Level (field_level) */
  $handler->display->display_options['filters']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['filters']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator_id'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['label'] = 'Level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['identifier'] = 'level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Journal Filtered Term Landing */
  $handler = $view->new_display('page', 'Journal Filtered Term Landing', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list filtered-journals';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'More Options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_library_item_tree_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Other Journals',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'The Austrian|Other Journals
Quarterly Journal of Austrian Economics|Other Journals',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_1_target_id_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All Authors',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_target_id_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Sort by Topic',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_austrian_school_target_id_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Sort by Austrian School',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => 'Search by Title',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_journal_volume_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Volume',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_journal_number_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 1,
        'any_label' => 'Number',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_journal_year_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Year',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>
<p class="small">For best results, first select a journal (first row options). To fine-tune the results, select from the remaining filters.</p>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="filter-triggers"><a href="#edit-journal" data-select="541">The Austrian</a> <a href="#edit-journal" data-select="151">Quarterly Journal of Austrian Economics</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another option or the "Clear All" button to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  /* Field: Content: Volume */
  $handler->display->display_options['fields']['field_journal_volume']['id'] = 'field_journal_volume';
  $handler->display->display_options['fields']['field_journal_volume']['table'] = 'field_data_field_journal_volume';
  $handler->display->display_options['fields']['field_journal_volume']['field'] = 'field_journal_volume';
  $handler->display->display_options['fields']['field_journal_volume']['label'] = '';
  $handler->display->display_options['fields']['field_journal_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_journal_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal_volume']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_journal_number']['id'] = 'field_journal_number';
  $handler->display->display_options['fields']['field_journal_number']['table'] = 'field_data_field_journal_number';
  $handler->display->display_options['fields']['field_journal_number']['field'] = 'field_journal_number';
  $handler->display->display_options['fields']['field_journal_number']['label'] = '';
  $handler->display->display_options['fields']['field_journal_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_journal_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_journal_year']['id'] = 'field_journal_year';
  $handler->display->display_options['fields']['field_journal_year']['table'] = 'field_data_field_journal_year';
  $handler->display->display_options['fields']['field_journal_year']['field'] = 'field_journal_year';
  $handler->display->display_options['fields']['field_journal_year']['label'] = '';
  $handler->display->display_options['fields']['field_journal_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_journal_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_journal_year']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_author_1']['delta_offset'] = '0';
  /* Field: Content: Austrian School */
  $handler->display->display_options['fields']['field_austrian_school']['id'] = 'field_austrian_school';
  $handler->display->display_options['fields']['field_austrian_school']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['fields']['field_austrian_school']['field'] = 'field_austrian_school';
  $handler->display->display_options['fields']['field_austrian_school']['label'] = '';
  $handler->display->display_options['fields']['field_austrian_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_austrian_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_austrian_school']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_austrian_school']['delta_offset'] = '0';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topics']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_topics']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  $handler->display->display_options['sorts']['type']['expose']['label'] = 'Type';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['expose']['label'] = 'Publication Date';
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
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Journals */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['ui_name'] = 'Journals';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['value'] = array(
    541 => '541',
    151 => '151',
    181 => '181',
    156 => '156',
    137 => '137',
    154 => '154',
    171 => '171',
    175 => '175',
    164 => '164',
    515 => '515',
    187 => '187',
    518 => '518',
    159 => '159',
    566 => '566',
    560 => '560',
    517 => '517',
    516 => '516',
    567 => '567',
    161 => '161',
    523 => '523',
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator_id'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['identifier'] = 'journal';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['hierarchy'] = 1;
  /* Filter criterion: Author (field_author_1) (selective) */
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['id'] = 'field_author_1_target_id_selective';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['field'] = 'field_author_1_target_id_selective';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['ui_name'] = 'Author (field_author_1) (selective)';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['selective_display_field'] = 'field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['selective_display_sort'] = 'ORIG';
  $handler->display->display_options['filters']['field_author_1_target_id_selective']['selective_items_limit'] = '';
  /* Filter criterion: Topics (field_topics) (selective) */
  $handler->display->display_options['filters']['field_topics_target_id_selective']['id'] = 'field_topics_target_id_selective';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['field'] = 'field_topics_target_id_selective';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['ui_name'] = 'Topics (field_topics) (selective)';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['expose']['label'] = 'Topics';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_topics_target_id_selective']['selective_display_field'] = 'field_topics';
  $handler->display->display_options['filters']['field_topics_target_id_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Content: Austrian School (field_austrian_school) (selective) */
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['id'] = 'field_austrian_school_target_id_selective';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['field'] = 'field_austrian_school_target_id_selective';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['expose']['label'] = 'Austrian School';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['expose']['identifier'] = 'austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['selective_display_field'] = 'field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id_selective']['selective_items_limit'] = '';
  /* Filter criterion: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['ui_name'] = 'Title';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Volume */
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['id'] = 'field_journal_volume_value_selective';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['table'] = 'field_data_field_journal_volume';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['field'] = 'field_journal_volume_value_selective';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['ui_name'] = 'Volume';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['expose']['label'] = 'Volume';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['expose']['identifier'] = 'vol';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['selective_display_field'] = 'field_journal_volume';
  $handler->display->display_options['filters']['field_journal_volume_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Number */
  $handler->display->display_options['filters']['field_journal_number_value_selective']['id'] = 'field_journal_number_value_selective';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['table'] = 'field_data_field_journal_number';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['field'] = 'field_journal_number_value_selective';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['ui_name'] = 'Number';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_journal_number_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_journal_number_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['expose']['label'] = 'Number';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['expose']['identifier'] = 'no';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_journal_number_value_selective']['selective_display_field'] = 'field_journal_number';
  $handler->display->display_options['filters']['field_journal_number_value_selective']['selective_items_limit'] = '100';
  /* Filter criterion: Year */
  $handler->display->display_options['filters']['field_journal_year_value_selective']['id'] = 'field_journal_year_value_selective';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['table'] = 'field_data_field_journal_year';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['field'] = 'field_journal_year_value_selective';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['ui_name'] = 'Year';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_journal_year_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_journal_year_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['expose']['label'] = 'Year ';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_journal_year_value_selective']['selective_display_field'] = 'field_journal_year';
  $handler->display->display_options['filters']['field_journal_year_value_selective']['selective_items_limit'] = '100';
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Daily Filtered Term Landing */
  $handler = $view->new_display('page', 'Daily Filtered Term Landing', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list daily-filtered';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => '',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'ALL',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_1_target_id_entityreference_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Author',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Topic',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_austrian_school_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Austrian School',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_level_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Level',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[field_mises_published_date]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another option or the "Clear All" button to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  /* Field: Content: Mises Published Date */
  $handler->display->display_options['fields']['field_mises_published_date']['id'] = 'field_mises_published_date';
  $handler->display->display_options['fields']['field_mises_published_date']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['fields']['field_mises_published_date']['field'] = 'field_mises_published_date';
  $handler->display->display_options['fields']['field_mises_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_mises_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mises_published_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mises_published_date']['alter']['text'] = 'date-[field_mises_published_date]';
  $handler->display->display_options['fields']['field_mises_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mises_published_date']['settings'] = array(
    'format_type' => 'super_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Filter by Title:';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    2 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    5 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    9 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    10 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    11 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    12 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    16 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    17 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    18 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'R',
    ),
    19 => array(
      'title' => 'S',
      'operator' => 'starts',
      'value' => 'S',
    ),
    20 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    21 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    22 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    23 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    24 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    25 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    26 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
  );
  /* Filter criterion: Field: Author (field_author_1) (reference filter) */
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['id'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['field'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator_id'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['hide_empty_filter'] = FALSE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['reference_display'] = 'filtered_landing_term_page:entityreference_4';
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator_id'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Austrian School (field_austrian_school) */
  $handler->display->display_options['filters']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator_id'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['label'] = 'Austrian School';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['identifier'] = 'austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Level (field_level) */
  $handler->display->display_options['filters']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['filters']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator_id'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['label'] = 'Level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['identifier'] = 'level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Author Entity Reference */
  $handler = $view->new_display('entityreference', 'Author Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Profile (field_profile_type) */
  $handler->display->display_options['filters']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['filters']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['value'] = array(
    201 => '201',
  );

  /* Display: Book Author Entity Reference */
  $handler = $view->new_display('entityreference', 'Book Author Entity Reference', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Profile (field_profile_type) */
  $handler->display->display_options['filters']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['filters']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['value'] = array(
    569 => '569',
  );

  /* Display: Journal Author Entity Reference */
  $handler = $view->new_display('entityreference', 'Journal Author Entity Reference', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Profile (field_profile_type) */
  $handler->display->display_options['filters']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['filters']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['value'] = array(
    572 => '572',
  );

  /* Display: Columnist Profile Entity Reference */
  $handler = $view->new_display('entityreference', 'Columnist Profile Entity Reference', 'entityreference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Profile (field_profile_type) */
  $handler->display->display_options['filters']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['filters']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['value'] = array(
    203 => '203',
  );
  $export['filtered_landing_term_page'] = $view;

  $view = new view();
  $view->name = 'term_landing';
  $view->description = 'Page and contextual blocks for term page';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Landing - Term Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer"><a href="/taxonomy/term/17">Visit Press Room</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
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
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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

  /* Display: Filtered Term Landing */
  $handler = $view->new_display('page', 'Filtered Term Landing', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => '',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_books_target_id' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'title' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'ALL',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_author_1_target_id_entityreference_filter' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All Authors',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topics_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Sort by Topic',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_austrian_school_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Sort by Austrian School',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_level_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All Levels',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another option or the "Clear All" button to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Book Type (field_books) */
  $handler->display->display_options['filters']['field_books_target_id']['id'] = 'field_books_target_id';
  $handler->display->display_options['filters']['field_books_target_id']['table'] = 'field_data_field_books';
  $handler->display->display_options['filters']['field_books_target_id']['field'] = 'field_books_target_id';
  $handler->display->display_options['filters']['field_books_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_books_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_books_target_id']['expose']['operator_id'] = 'field_books_target_id_op';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['operator'] = 'field_books_target_id_op';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['identifier'] = 'book_type';
  $handler->display->display_options['filters']['field_books_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['title']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    2 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    5 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    9 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
    10 => array(
      'title' => 'J',
      'operator' => 'starts',
      'value' => 'J',
    ),
    11 => array(
      'title' => 'K',
      'operator' => 'starts',
      'value' => 'K',
    ),
    12 => array(
      'title' => 'L',
      'operator' => 'starts',
      'value' => 'L',
    ),
    13 => array(
      'title' => 'M',
      'operator' => 'starts',
      'value' => 'M',
    ),
    14 => array(
      'title' => 'N',
      'operator' => 'starts',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'O',
      'operator' => 'starts',
      'value' => 'O',
    ),
    16 => array(
      'title' => 'P',
      'operator' => 'starts',
      'value' => 'P',
    ),
    17 => array(
      'title' => 'Q',
      'operator' => 'starts',
      'value' => 'Q',
    ),
    18 => array(
      'title' => 'R',
      'operator' => 'starts',
      'value' => 'R',
    ),
    19 => array(
      'title' => 'S',
      'operator' => 'starts',
      'value' => 'S',
    ),
    20 => array(
      'title' => 'T',
      'operator' => 'starts',
      'value' => 'T',
    ),
    21 => array(
      'title' => 'U',
      'operator' => 'starts',
      'value' => 'U',
    ),
    22 => array(
      'title' => 'V',
      'operator' => 'starts',
      'value' => 'V',
    ),
    23 => array(
      'title' => 'W',
      'operator' => 'starts',
      'value' => 'W',
    ),
    24 => array(
      'title' => 'X',
      'operator' => 'starts',
      'value' => 'X',
    ),
    25 => array(
      'title' => 'Y',
      'operator' => 'starts',
      'value' => 'Y',
    ),
    26 => array(
      'title' => 'Z',
      'operator' => 'starts',
      'value' => 'Z',
    ),
  );
  /* Filter criterion: Field: Author (field_author_1) (reference filter) */
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['id'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['field'] = 'field_author_1_target_id_entityreference_filter';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator_id'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['operator'] = 'field_author_1_target_id_entityreference_filter_op';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['expose']['hide_empty_filter'] = FALSE;
  $handler->display->display_options['filters']['field_author_1_target_id_entityreference_filter']['reference_display'] = 'term_landing:entityreference_1';
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator_id'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['identifier'] = 'topic';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Austrian School (field_austrian_school) */
  $handler->display->display_options['filters']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator_id'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['label'] = 'Austrian School';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['operator'] = 'field_austrian_school_target_id_op';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['identifier'] = 'austrian_school';
  $handler->display->display_options['filters']['field_austrian_school_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Level (field_level) */
  $handler->display->display_options['filters']['field_level_target_id']['id'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['table'] = 'field_data_field_level';
  $handler->display->display_options['filters']['field_level_target_id']['field'] = 'field_level_target_id';
  $handler->display->display_options['filters']['field_level_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_level_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator_id'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['label'] = 'Level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['operator'] = 'field_level_target_id_op';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['identifier'] = 'level';
  $handler->display->display_options['filters']['field_level_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    8 => 0,
    10 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Term Landing */
  $handler = $view->new_display('page', 'Term Landing', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_books_target_id_selective' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'simplified';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<p class="text-right"><em>Displaying @start - @end of @total</em></p>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No items match the options selected. Please select another menu item or the "All" option to start over.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Book Type */
  $handler->display->display_options['fields']['field_books']['id'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['table'] = 'field_data_field_books';
  $handler->display->display_options['fields']['field_books']['field'] = 'field_books';
  $handler->display->display_options['fields']['field_books']['label'] = '';
  $handler->display->display_options['fields']['field_books']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_books']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_books']['settings'] = array(
    'link' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_books']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_collection' => 'library_collection',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Related Books Block */
  $handler = $view->new_display('block', 'Related Books Block', 'books');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'books';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer"><a href="/library/books"><span class="glyphicon glyphicon-chevron-right"></span> Browse Books</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:books';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Filter criterion: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['value'] = array(
    170 => '170',
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_book' => 'featured_book',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 2;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value_1']['id'] = 'field_featured_content_value_1';
  $handler->display->display_options['filters']['field_featured_content_value_1']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value_1']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_featured_content_value_1']['group'] = 2;

  /* Display: Related Online Courses Block */
  $handler = $view->new_display('block', 'Related Online Courses Block', 'online_courses');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'online-courses';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer"><a href="/search/site//type/course"><span class="glyphicon glyphicon-chevron-right"></span> Browse Mises Academy</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:online_courses';
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
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;

  /* Display: Related Mises View Block */
  $handler = $view->new_display('block', 'Related Mises View Block', 'mises_view');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mises-view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer"><a href="/library/mises-view"><span class="glyphicon glyphicon-chevron-right"></span> Browse Mises View</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:mises_weekends';
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
  /* Filter criterion: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['value'] = array(
    185 => '185',
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
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

  /* Display: Related Library Block */
  $handler = $view->new_display('block', 'Related Library Block', 'library_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'library-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'block_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="panel-footer">[name]</div>';
  $handler->display->display_options['footer']['area']['format'] = 'ds_code';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'daily_landing:library_block';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
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
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span> Browse [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featued' => 'featued',
  );

  /* Display: Meet Our Columnists */
  $handler = $view->new_display('block', 'Meet Our Columnists', 'columnist');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience border-primary panel';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right padding-lg"><a href="/profile-type/columnist">More</a></p>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_profile_type_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_collection_value']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['name']['value'] = 'Columnist';
  $handler->display->display_options['filters']['name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$args = drupal_get_path_alias();
if ($args == \'library/mises-daily\') {
  return TRUE;
}
return FALSE;';

  /* Display: Featured Author */
  $handler = $view->new_display('block', 'Featured Author', 'featured_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['name']['value'] = 'Author';
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_author' => 'featured_author',
  );

  /* Display: Featured Author Articles */
  $handler = $view->new_display('block', 'Featured Author Articles', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'simple_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_1_target_id']['id'] = 'field_author_1_target_id';
  $handler->display->display_options['relationships']['field_author_1_target_id']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['relationships']['field_author_1_target_id']['field'] = 'field_author_1_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Teaser Text */
  $handler->display->display_options['fields']['field_teaser_text']['id'] = 'field_teaser_text';
  $handler->display->display_options['fields']['field_teaser_text']['table'] = 'field_data_field_teaser_text';
  $handler->display->display_options['fields']['field_teaser_text']['field'] = 'field_teaser_text';
  $handler->display->display_options['fields']['field_teaser_text']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_teaser_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_teaser_text']['settings'] = array(
    'trim_length' => '120',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'summary';
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

  /* Display: Most Popular Posts */
  $handler = $view->new_display('block', 'Most Popular Posts', 'popular');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'books panel border-contrast padding-lg';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'simple_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="panel-heading single"><div class="panel-title">Most Popular Articles</div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Analytics Page Hits: Hit Count */
  $handler->display->display_options['sorts']['hit_count']['id'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['sorts']['hit_count']['field'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['relationship'] = 'entity_id';
  $handler->display->display_options['sorts']['hit_count']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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

  /* Display: Today's Article */
  $handler = $view->new_display('attachment', 'Today\'s Article', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'todays-article';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'books' => 0,
    'online_courses' => 0,
    'mises_view' => 0,
    'library_block' => 0,
    'columnist' => 0,
    'featured_author' => 0,
    'block_1' => 0,
    'popular' => 0,
  );

  /* Display: Sortable Term Landing - Audio */
  $handler = $view->new_display('page', 'Sortable Term Landing - Audio', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'audio_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Draggableviews: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'term_landing:page_2';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Sortable Term Landing - Other */
  $handler = $view->new_display('page', 'Sortable Term Landing - Other', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'landing-list result-[counter]';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Draggableviews: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'term_landing:page_2';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Sortable Term Order */
  $handler = $view->new_display('page', 'Sortable Term Order', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'draggableviews' => 'draggableviews',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Analytics Page Hits: Analytics Hits Entity */
  $handler->display->display_options['relationships']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['relationships']['entity_id']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['relationships']['entity_id']['field'] = 'entity_id';
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_view'] = 'term_landing:page_2';
  $handler->display->display_options['sorts']['weight_1']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'blog' => 'blog',
    'course' => 'course',
    'event' => 'event',
    'library_item' => 'library_item',
    'person_profile' => 'person_profile',
    'product' => 'product',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/audiobook-order/%';

  /* Display: Meet the Blogger */
  $handler = $view->new_display('block', 'Meet the Blogger', 'meet_blogger');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Featured Columnist */
  $handler = $view->new_display('block', 'Featured Columnist', 'featured_columnist');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_columnist' => 'featured_columnist',
  );
  $handler->display->display_options['filters']['field_featured_content_value']['group'] = 1;

  /* Display: Meet the Columnist */
  $handler = $view->new_display('block', 'Meet the Columnist', 'meet_columnist');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel  border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid']['value'] = array(
    147 => '147',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    0 => '174',
    1 => '185',
    2 => '434',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'media_type';

  /* Display: Meet the Author */
  $handler = $view->new_display('block', 'Meet the Author', 'meet_author');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid']['operator'] = 'not';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '174',
    1 => '147',
    2 => '185',
    3 => '434',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';

  /* Display: Meet the Guest */
  $handler = $view->new_display('block', 'Meet the Guest', 'meet_guest');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Author (field_author_1:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid']['value'] = array(
    434 => '434',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    0 => '174',
    1 => '147',
    2 => '185',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'media_type';

  /* Display: Meet the Speaker */
  $handler = $view->new_display('block', 'Meet the Speaker', 'meet_speaker');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid']['value'] = array(
    174 => '174',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    0 => '147',
    1 => '185',
    2 => '434',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'media_type';

  /* Display: Meet the Expert */
  $handler = $view->new_display('block', 'Meet the Expert', 'meet_expert');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience panel border-contrast';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_author';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['id'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['field'] = 'reverse_field_author_1_node';
  $handler->display->display_options['relationships']['reverse_field_author_1_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Author (field_author_1:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_author_1_node';
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '185',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'reverse_field_author_1_node';
  $handler->display->display_options['filters']['tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    0 => '174',
    1 => '147',
    2 => '434',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'media_type';

  /* Display: Author Entity Reference */
  $handler = $view->new_display('entityreference', 'Author Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of Profile (field_profile_type) */
  $handler->display->display_options['filters']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['filters']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['field_profile_type_target_id']['value'] = array(
    201 => '201',
  );
  $export['term_landing'] = $view;

  return $export;
}
