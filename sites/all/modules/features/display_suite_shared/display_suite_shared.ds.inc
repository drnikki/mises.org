<?php
/**
 * @file
 * display_suite_shared.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function display_suite_shared_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|block_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'block_teaser';
  $ds_fieldsetting->settings = array(
    'contextual_block_title_with_icon' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|block_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|library_item|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'library_item';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'teaser-title',
        'ft' => array(),
        'conditions' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mises_published_date' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_author_1' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_image_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'img-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|library_item|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|person_profile|author_full_name';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'person_profile';
  $ds_fieldsetting->view_mode = 'author_full_name';
  $ds_fieldsetting->settings = array(
    'author_full_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|person_profile|author_full_name'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function display_suite_shared_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'author_full_name';
  $ds_field->label = 'Author Full Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[node:field-first-name] [node:title]',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['author_full_name'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contextual_block_title_with_icon';
  $ds_field->label = 'Contextual Block Title with Icon';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
//print $entity->view->current_display;
$view_name = $entity->view->name;
$view_display = $entity->view->current_display;
switch ($view_display) { 
  case "press_room": 
    $ctitle = "Press Room"; 
    break;
  case "online_courses": 
    $ctitle = "Online Courses"; 
    break;
  case "mises_view": 
    $ctitle = "Mises View"; 
    break;
  case "library_block": 
    $ctitle = "Library"; 
    break;
  case "audience": 
    $ctitle = "Audience"; 
    break;
  case "level": 
    $ctitle = "Level"; 
    break;
  case "topics": 
    $ctitle = "Topics"; 
    break;
  case "books": 
    $ctitle = "Books"; 
    break;
  case "event": 
    $ctitle = "Events"; 
    break;
  case "free_market": 
    $ctitle = "Free Market"; 
    break;
  case "review": 
    $ctitle = "Review"; 
    break;
  case "audio": 
    $ctitle = "Featured Audio"; 
    break;
  case "video": 
    $ctitle = "Featured Video"; 
    break;
  case "academy": 
    $ctitle = "Mises Academy"; 
    break;
  case "research": 
    $ctitle = "Recent Research"; 
    break;
  case "blog": 
    $ctitle = "Blog"; 
    break;
  case "lecture": 
    $ctitle = "Lecture"; 
    break;
  default: 
    $ctitle = "Add case"; 
}

print \'<div class="panel-heading"><div class="panel-title">\'  . $ctitle . \'</div></div>\'; 


?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['contextual_block_title_with_icon'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function display_suite_shared_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|library_item|block_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'library_item';
  $ds_layout->view_mode = 'block_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_collection',
        1 => 'contextual_block_title_with_icon',
        2 => 'group_teaser',
        3 => 'title',
        4 => 'field_teaser_text',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'field_image_collection' => 'ds_content',
      'contextual_block_title_with_icon' => 'ds_content',
      'group_teaser' => 'ds_content',
      'title' => 'ds_content',
      'field_teaser_text' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|library_item|block_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person_profile|author_full_name';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person_profile';
  $ds_layout->view_mode = 'author_full_name';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'author_full_name',
      ),
    ),
    'fields' => array(
      'author_full_name' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|person_profile|author_full_name'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function display_suite_shared_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'block_teaser';
  $ds_view_mode->label = 'Block Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['block_teaser'] = $ds_view_mode;

  return $export;
}
