<?php
/**
 * @file
 * mises_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_addit_blog_information|node|blog|form';
  $field_group->group_name = 'group_addit_blog_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '2',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'field_audience',
      3 => 'field_level',
      4 => 'field_featured_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tagging',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-addit-blog-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_addit_blog_information|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_information|node|blog|form';
  $field_group->group_name = 'group_blog_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog Information',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_author_1',
      2 => 'field_teaser_text',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_information|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|blog|full';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '4',
    'children' => array(
      0 => 'field_author_1',
      1 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => 'group-date-author field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_date_author|node|blog|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|blog|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '2',
    'children' => array(
      0 => 'field_author_1',
      1 => 'dynamic_field_1',
      2 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_date_author|node|blog|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|blog|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image / Media',
    'weight' => '1',
    'children' => array(
      0 => 'field_media_collection',
      1 => 'field_image_collection',
      2 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|blog|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'tags_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'classes' => 'tags',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_tags|node|blog|full'] = $field_group;

  return $export;
}
