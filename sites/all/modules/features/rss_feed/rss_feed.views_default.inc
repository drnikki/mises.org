<?php
/**
 * @file
 * rss_feed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rss_feed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rss_feed';
  $view->description = 'XML Feeds for overall site feed, iTunes feeds.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RSS Feed';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Site Feed */
  $handler = $view->new_display('feed', 'Site Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'feed/rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Business Economics 100100 */
  $handler = $view->new_display('feed', 'iTunes Business Economics 100100', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    237 => '237',
    35 => '35',
    36 => '36',
    37 => '37',
    38 => '38',
    191 => '191',
    40 => '40',
    41 => '41',
    42 => '42',
    43 => '43',
    44 => '44',
    45 => '45',
    189 => '189',
    190 => '190',
    48 => '48',
    49 => '49',
    50 => '50',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'the_austrian_school_of_economics';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    194 => '194',
    21 => '21',
    22 => '22',
    28 => '28',
    193 => '193',
    24 => '24',
    195 => '195',
    25 => '25',
    26 => '26',
    27 => '27',
    29 => '29',
    30 => '30',
    32 => '32',
    33 => '33',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/economics-100100.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Law Politics 116 */
  $handler = $view->new_display('feed', 'iTunes Law Politics 116', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    47 => '47',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'the_austrian_school_of_economics';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    20 => '20',
    31 => '31',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/law-politics-116.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Law 116101 */
  $handler = $view->new_display('feed', 'iTunes Law 116101', 'feed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    197 => '197',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/law-116101.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Entrepreneurship 100107 */
  $handler = $view->new_display('feed', 'iTunes Entrepreneurship 100107', 'feed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    39 => '39',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'the_austrian_school_of_economics';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    23 => '23',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/entrepreneurship-100107.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes NA History 104108 */
  $handler = $view->new_display('feed', 'iTunes NA History 104108', 'feed_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    196 => '196',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/na-history-104108.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Foreign Policy 116100 */
  $handler = $view->new_display('feed', 'iTunes Foreign Policy 116100', 'feed_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/foreign-policy-116100.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes History 104 */
  $handler = $view->new_display('feed', 'iTunes History 104', 'feed_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    192 => '192',
  );
  $handler->display->display_options['filters']['tid_1']['group'] = 2;
  $handler->display->display_options['filters']['tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  $handler->display->display_options['path'] = 'feed/history-104.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';

  /* Display: iTunes Philosphy 114 */
  $handler = $view->new_display('feed', 'iTunes Philosphy 114', 'feed_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
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
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    46 => '46',
  );
  $handler->display->display_options['filters']['tid']['group'] = 2;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'the_austrian_school_of_economics';
  $handler->display->display_options['path'] = 'feed/philosophy-114.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = '1';
  $export['rss_feed'] = $view;

  return $export;
}
