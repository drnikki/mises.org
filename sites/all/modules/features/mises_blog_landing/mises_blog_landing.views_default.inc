<?php
/**
 * @file
 * mises_blog_landing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_blog_landing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog';
  $view->description = 'Visit the Mises Blog to see our thoughts on the latest news and events around the world through the lens of Austrian economics.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
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
  );
  /* Filter criterion: Content: Is Old Blog Content? (field_is_old_blog_content) */
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['id'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['table'] = 'field_data_field_is_old_blog_content';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['field'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['value'] = array(
    1 => '1',
  );

  /* Display: Landing Page */
  $handler = $view->new_display('page', 'Landing Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mises Wire';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
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
    'blog' => 'blog',
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['id'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['value'] = array(
    'exclude' => 'exclude',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['name']['value'] = 'article';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['id'] = 'field_wire_include_exclude_value_1';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['value'] = array(
    'exclude' => 'exclude',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['group'] = 2;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['id'] = 'field_wire_include_exclude_value_2';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['value'] = array(
    'include' => 'include',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['group'] = 3;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Content: Is Old Blog Content? (field_is_old_blog_content) */
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['id'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['table'] = 'field_data_field_is_old_blog_content';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['field'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['group'] = 1;
  $handler->display->display_options['path'] = 'wire';

  /* Display: Featured Block */
  $handler = $view->new_display('block', 'Featured Block', 'block_featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'topic panel border-contrast padding-lg';
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
  $handler->display->display_options['header']['area']['content'] = '<div class="panel-heading single"><div class="panel-title">Featured Posts</div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: Popular Block */
  $handler = $view->new_display('block', 'Popular Block', 'block_popular');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blog panel border-contrast padding-lg';
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
  $handler->display->display_options['header']['area']['content'] = '<div class="panel-heading single"><div class="panel-title">Most Popular Posts</div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Analytics Page Hits: Hit Count */
  $handler->display->display_options['sorts']['hit_count']['id'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['table'] = 'mises_analytics_hits';
  $handler->display->display_options['sorts']['hit_count']['field'] = 'hit_count';
  $handler->display->display_options['sorts']['hit_count']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Meet Our Bloggers */
  $handler = $view->new_display('block', 'Meet Our Bloggers', 'blogger');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience border-primary panel';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'sidebar_teaser';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="read-more text-right padding-lg"><a href="/blog/mises-wire-bloggers">More</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id']['id'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['field'] = 'field_profile_type_target_id';
  $handler->display->display_options['relationships']['field_profile_type_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    202 => '202',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_blogger' => 'featured_blogger',
  );

  /* Display: Mises Wire Bloggers */
  $handler = $view->new_display('page', 'Mises Wire Bloggers', 'page_bloggers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mises Wire Bloggers';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'landing-list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
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
  /* Filter criterion: Content: Featured (field_featured_content) */
  $handler->display->display_options['filters']['field_featured_content_value']['id'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['table'] = 'field_data_field_featured_content';
  $handler->display->display_options['filters']['field_featured_content_value']['field'] = 'field_featured_content_value';
  $handler->display->display_options['filters']['field_featured_content_value']['value'] = array(
    'featured_blogger' => 'featured_blogger',
  );
  $handler->display->display_options['path'] = 'blog/mises-wire-bloggers';

  /* Display: Homepage Mises Wire */
  $handler = $view->new_display('block', 'Homepage Mises Wire', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blog-home-block';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'wire-teaser';
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
  $handler->display->display_options['header']['area']['content'] = '<h2>Latest From <span>Mises Wire</span></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="glyphicon glyphicon-chevron-right"></span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'bullet';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_author_1']['element_wrapper_class'] = 'author';
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

  /* Display: The Wire Block */
  $handler = $view->new_display('block', 'The Wire Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Wire';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'event' => 'event',
    'library_item' => 'library_item',
  );
  /* Filter criterion: Content: Is Old Blog Content? (field_is_old_blog_content) */
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['id'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['table'] = 'field_data_field_is_old_blog_content';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['field'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['value'] = array(
    1 => '1',
  );

  /* Display: The Wire Page */
  $handler = $view->new_display('page', 'The Wire Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Wire';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['order'] = 'DESC';
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
    'event' => 'event',
    'library_item' => 'library_item',
  );
  /* Filter criterion: Content: Is Old Blog Content? (field_is_old_blog_content) */
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['id'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['table'] = 'field_data_field_is_old_blog_content';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['field'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'the-wire';

  /* Display: The Wire Homepage */
  $handler = $view->new_display('page', 'The Wire Homepage', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mises Wire';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/wire" alt="Continue to Mises Wire" title="Continue to Mises Wire" class="btn btn-default wire-btn" target="_self">Continue to Mises Wire</a>';
  $handler->display->display_options['footer']['area']['format'] = 'simplified';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
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
    'blog' => 'blog',
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['id'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['value'] = array(
    'exclude' => 'exclude',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 2;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['name']['value'] = 'article';
  $handler->display->display_options['filters']['name']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['id'] = 'field_wire_include_exclude_value_1';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['value'] = array(
    'exclude' => 'exclude',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value_1']['group'] = 2;
  /* Filter criterion: Content: Include or exclude from The Wire (field_wire_include_exclude) */
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['id'] = 'field_wire_include_exclude_value_2';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['table'] = 'field_data_field_wire_include_exclude';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['field'] = 'field_wire_include_exclude_value';
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['value'] = array(
    'include' => 'include',
  );
  $handler->display->display_options['filters']['field_wire_include_exclude_value_2']['group'] = 3;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Content: Is Old Blog Content? (field_is_old_blog_content) */
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['id'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['table'] = 'field_data_field_is_old_blog_content';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['field'] = 'field_is_old_blog_content_value';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_is_old_blog_content_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'homepage';

  /* Display: Landing Page v2 */
  $handler = $view->new_display('page', 'Landing Page v2', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mises Wire';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'wire-page-filtered landing-list';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'GO';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by:';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
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
    'field_library_item_tree_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Media Type',
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
        'any_label' => 'General Topics',
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
        'any_label' => 'Austrian School Topics',
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
    'field_last_name_value' => array(
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_1_target_id']['id'] = 'field_author_1_target_id';
  $handler->display->display_options['relationships']['field_author_1_target_id']['table'] = 'field_data_field_author_1';
  $handler->display->display_options['relationships']['field_author_1_target_id']['field'] = 'field_author_1_target_id';
  $handler->display->display_options['relationships']['field_author_1_target_id']['label'] = 'Author reference';
  /* Relationship: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['relationships']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['id'] = 'field_mises_published_date_value_1';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mises_published_date_value_1']['expose']['label'] = 'Newest First';
  /* Sort criterion: Content: Mises Published Date (field_mises_published_date) */
  $handler->display->display_options['sorts']['field_mises_published_date_value']['id'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['table'] = 'field_data_field_mises_published_date';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['field'] = 'field_mises_published_date_value';
  $handler->display->display_options['sorts']['field_mises_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_mises_published_date_value']['expose']['label'] = 'Oldest First';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_2']['id'] = 'title_2';
  $handler->display->display_options['sorts']['title_2']['table'] = 'node';
  $handler->display->display_options['sorts']['title_2']['field'] = 'title';
  $handler->display->display_options['sorts']['title_2']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['sorts']['title_2']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_2']['expose']['label'] = 'Writer A-Z';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_3']['id'] = 'title_3';
  $handler->display->display_options['sorts']['title_3']['table'] = 'node';
  $handler->display->display_options['sorts']['title_3']['field'] = 'title';
  $handler->display->display_options['sorts']['title_3']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['sorts']['title_3']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title_3']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title_3']['expose']['label'] = 'Writer Z-A';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Mises Wire */
  $handler->display->display_options['filters']['mises_wire']['id'] = 'mises_wire';
  $handler->display->display_options['filters']['mises_wire']['table'] = 'node';
  $handler->display->display_options['filters']['mises_wire']['field'] = 'mises_wire';
  $handler->display->display_options['filters']['mises_wire']['group'] = 1;
  /* Filter criterion: Content: Library Item Type (field_library_item_tree) */
  $handler->display->display_options['filters']['field_library_item_tree_tid']['id'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['table'] = 'field_data_field_library_item_tree';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['field'] = 'field_library_item_tree_tid';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['value'] = array(
    567 => '567',
    442 => '442',
    541 => '541',
    602 => '602',
    589 => '589',
    156 => '156',
    147 => '147',
    434 => '434',
    367 => '367',
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator_id'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['label'] = 'Media Type';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['operator'] = 'field_library_item_tree_tid_op';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['identifier'] = 'media_type';
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
    11 => 0,
  );
  $handler->display->display_options['filters']['field_library_item_tree_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_library_item_tree_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_library_item_tree_tid']['vocabulary'] = 'media_type';
  /* Filter criterion: Content: Topics (field_topics) */
  $handler->display->display_options['filters']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['filters']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['field_topics_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_topics_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['operator_id'] = 'field_topics_target_id_op';
  $handler->display->display_options['filters']['field_topics_target_id']['expose']['label'] = 'General Topics';
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
    11 => 0,
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
    11 => 0,
  );
  /* Filter criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['relationship'] = 'field_author_1_target_id';
  $handler->display->display_options['filters']['field_last_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Last name (field_last_name)';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['group_info']['label'] = 'Filter by Writer:';
  $handler->display->display_options['filters']['field_last_name_value']['group_info']['identifier'] = 'writer';
  $handler->display->display_options['filters']['field_last_name_value']['group_info']['group_items'] = array(
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
      'operator' => '=',
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
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
  $handler->display->display_options['path'] = 'wire';
  $export['blog'] = $view;

  return $export;
}
