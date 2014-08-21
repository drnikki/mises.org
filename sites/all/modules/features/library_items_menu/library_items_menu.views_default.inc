<?php
/**
 * @file
 * library_items_menu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function library_items_menu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'library_items_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Library Items Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'tree';
  $handler->display->display_options['style_options']['main_field'] = 'tid';
  $handler->display->display_options['style_options']['parent_field'] = 'tid_1';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'tid_1' => 'tid_1',
    'tid' => 'tid',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Term with Parent Relationship */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['ui_name'] = 'Term with Parent Relationship';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'media_type' => 'media_type',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page (with Page Title) */
  $handler = $view->new_display('page_with_page_title', 'Page (with Page Title)', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library Item Menu Demo';
  $handler->display->display_options['path'] = 'library/menu';
  $export['library_items_menu'] = $view;

  return $export;
}
