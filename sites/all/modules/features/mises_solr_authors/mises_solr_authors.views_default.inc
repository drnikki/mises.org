<?php
/**
 * @file
 * mises_solr_authors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_solr_authors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mises_solr_authors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mises Solr Authors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
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
  /* Field: Content: Biography Summary */
  $handler->display->display_options['fields']['field_bio_summary']['id'] = 'field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['table'] = 'field_data_field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['field'] = 'field_bio_summary';
  $handler->display->display_options['fields']['field_bio_summary']['label'] = '';
  $handler->display->display_options['fields']['field_bio_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_summary']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_bio_summary']['settings'] = array(
    'trim_length' => '400',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$arg = arg(2);
$keys = explode(\' \', urldecode($arg));

foreach ($keys as $key) {
  $node = node_load($row->nid);
  if (isset($node->field_last_name[LANGUAGE_NONE][0][\'value\'])) {
    $last = $node->field_last_name[LANGUAGE_NONE][0][\'value\'];
     if (stripos($last, $key) !== FALSE) {
      return FALSE;
    }
  }
  if (isset($node->field_first_name[LANGUAGE_NONE][0][\'value\'])) {
    $first = $node->field_first_name[LANGUAGE_NONE][0][\'value\'];
     if (stripos($first, $key) !== FALSE) {
      return FALSE;
    }
  }
}
return TRUE;';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['mises_solr_authors'] = $view;

  return $export;
}
