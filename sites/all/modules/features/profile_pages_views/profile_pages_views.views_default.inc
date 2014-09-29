<?php
/**
 * @file
 * profile_pages_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profile_pages_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_lists';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Lists';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 36;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'profile-item col-sm-3 col-xs-6';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No profiles matched your search criteria. Please reset, and select other search options.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'simplified';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['id'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_collection']['id'] = 'field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['field'] = 'field_image_collection';
  $handler->display->display_options['fields']['field_image_collection']['label'] = '';
  $handler->display->display_options['fields']['field_image_collection']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_collection']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_collection']['alter']['text'] = '<div class="image img-responsive border-gray">[field_image_collection]</div>';
  $handler->display->display_options['fields']['field_image_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_collection']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_collection']['element_wrapper_class'] = 'image img-responsive border-gray';
  $handler->display->display_options['fields']['field_image_collection']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_image_collection']['settings'] = array(
    'view_mode' => 'vertical_teaser',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_image_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_collection']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_image_collection]
<h3 class="list-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
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
  $handler->display->display_options['fields']['name']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
  );

  /* Display: All Profiles */
  $handler = $view->new_display('page', 'All Profiles', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People Directory';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  $handler->display->display_options['path'] = 'directory';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Alphabet Menu - All */
  $handler = $view->new_display('attachment', 'Alphabet Menu - All', 'glossary');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4 col-xs-6';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'page_1' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Speakers Bureau */
  $handler = $view->new_display('page', 'Speakers Bureau', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers Bureau';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['field_last_name_value']['transform_dash'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid']['value'] = array(
    198 => '198',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['relationship'] = 'field_topics_target_id';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Topic Expertise';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'topic';
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
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'currents_trends';
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid_2']['id'] = 'tid_2';
  $handler->display->display_options['filters']['tid_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_2']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_2']['relationship'] = 'field_austrian_school_target_id';
  $handler->display->display_options['filters']['tid_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_2']['expose']['operator_id'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['label'] = 'Austrian School Expertise';
  $handler->display->display_options['filters']['tid_2']['expose']['operator'] = 'tid_2_op';
  $handler->display->display_options['filters']['tid_2']['expose']['identifier'] = 'austrian';
  $handler->display->display_options['filters']['tid_2']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['tid_2']['vocabulary'] = 'the_austrian_school_of_economics';
  $handler->display->display_options['path'] = 'speakers-bureau';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Alphabet Menu - Speakers Bureau */
  $handler = $view->new_display('attachment', 'Alphabet Menu - Speakers Bureau', 'attachment_1');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4 col-xs-6';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid']['value'] = array(
    198 => '198',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
    'page_2' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Faculty and Staff */
  $handler = $view->new_display('page', 'Faculty and Staff', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty and Staff';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['id'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['relationships']['field_profile_type_target_id_1']['field'] = 'field_profile_type_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['id'] = 'field_austrian_school_target_id';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['table'] = 'field_data_field_austrian_school';
  $handler->display->display_options['relationships']['field_austrian_school_target_id']['field'] = 'field_austrian_school_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_topics_target_id']['id'] = 'field_topics_target_id';
  $handler->display->display_options['relationships']['field_topics_target_id']['table'] = 'field_data_field_topics';
  $handler->display->display_options['relationships']['field_topics_target_id']['field'] = 'field_topics_target_id';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_profile_type_target_id_1';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
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
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid']['value'] = array(
    199 => '199',
    200 => '200',
    206 => '206',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Faculty or Staff?';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'type';
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
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '199';
  $handler->display->display_options['filters']['tid_raw']['group'] = 2;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw_2']['id'] = 'tid_raw_2';
  $handler->display->display_options['filters']['tid_raw_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_2']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_2']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid_raw_2']['value']['value'] = '200';
  $handler->display->display_options['filters']['tid_raw_2']['group'] = 2;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw_1']['id'] = 'tid_raw_1';
  $handler->display->display_options['filters']['tid_raw_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw_1']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw_1']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid_raw_1']['value']['value'] = '206';
  $handler->display->display_options['filters']['tid_raw_1']['group'] = 2;
  $handler->display->display_options['path'] = 'faculty-staff';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Alphabet Menu - Faculty Staff */
  $handler = $view->new_display('attachment', 'Alphabet Menu - Faculty Staff', 'attachment_2');
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-sm-4 col-xs-6';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Last name (field_last_name) */
  $handler->display->display_options['arguments']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['arguments']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['arguments']['field_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_last_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_last_name_value']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_last_name_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_last_name_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_last_name_value']['path_case'] = 'lower';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person_profile' => 'person_profile',
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_profile_type_target_id_1';
  $handler->display->display_options['filters']['tid']['value'] = array(
    199 => '199',
    206 => '206',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_type';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $export['profile_lists'] = $view;

  return $export;
}
