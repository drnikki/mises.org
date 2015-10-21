<?php
/**
 * @file
 * mises_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_landing_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_intro|field_collection_item|field_resource_group|default';
  $field_group->group_name = 'group_block_intro';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_resource_group';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block Intro',
    'weight' => '0',
    'children' => array(
      0 => 'field_display_title',
      1 => 'field_description',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Block Intro',
      'instance_settings' => array(
        'classes' => 'group-block-intro bg-gray outset',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_block_intro|field_collection_item|field_resource_group|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_intro|field_collection_item|field_resource_group|full';
  $field_group->group_name = 'group_block_intro';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_resource_group';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block Intro',
    'weight' => '0',
    'children' => array(
      0 => 'field_display_title',
      1 => 'field_description',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Block Intro',
      'instance_settings' => array(
        'classes' => 'group-block-intro bg-gray outset',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_block_intro|field_collection_item|field_resource_group|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_intro|node|landing_page|full';
  $field_group->group_name = 'group_block_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '37',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-block-intro bg-gray outset',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_block_intro|node|landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blocks|node|landing_page|form';
  $field_group->group_name = 'group_blocks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blocks',
    'weight' => '2',
    'children' => array(
      0 => 'field_featured_nodes',
      1 => 'field_featured_videos',
      2 => 'field_resource_group',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Blocks',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-blocks field-group-tab',
        'description' => 'Use these fields to manually curate content for this landing page. Hints:

<ul><li>Press Room: Enter 3 Featured Content and 2 Featured Videos.</li>
<li>Homeschool Resources and Austrian Economics: Use Resource Group to enter groups of recommended resources.</li>
<li>Library Landing Page: No entries are needed on this form. The six most recently added Library Items and two most recent videos will automatically be pulled and output on the page. </li></ul>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_blocks|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|landing_page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_page_subtitle',
      1 => 'field_read_more_link',
      2 => 'field_teaser',
      3 => 'field_teaser_header',
      4 => 'field_teaser_title',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_content|node|landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_media|node|landing_page|form';
  $field_group->group_name = 'group_page_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'field_image',
      2 => 'field_social_media_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_media|node|landing_page|form'] = $field_group;

  return $export;
}
