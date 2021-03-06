<?php
/**
 * @file
 * mises_person_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_person_profile_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author_title|node|person_profile|full';
  $field_group->group_name = 'group_author_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author Title',
    'weight' => '45',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Author Title',
      'instance_settings' => array(
        'classes' => 'group-author-title page-title',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_author_title|node|person_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|person_profile|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_facebook',
      2 => 'field_featured_content',
      3 => 'field_first_name',
      4 => 'field_image_collection',
      5 => 'field_profile_type',
      6 => 'field_twitter',
      7 => 'field_last_name',
      8 => 'field_email_link',
      9 => 'field_social_media_image',
      10 => 'field_profile_phone_number',
      11 => 'field_profile_title',
      12 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|node|person_profile|form';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_bio_summary',
      2 => 'field_contributions',
      3 => 'field_award_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bio field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bio|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|person_profile|full';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '11',
    'children' => array(
      0 => 'field_contributions',
      1 => 'profile_author_articles',
      2 => 'profile_major_words',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => 'group-details panel-group clearfix',
        'element' => 'div',
        'attributes' => 'id="profile-accordion"',
      ),
    ),
  );
  $field_groups['group_details|node|person_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expertise|node|person_profile|form';
  $field_group->group_name = 'group_expertise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Areas of Expertise',
    'weight' => '1',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_expertise|node|person_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|person_profile|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Areas of Expertise',
    'weight' => '4',
    'children' => array(
      0 => 'field_austrian_school',
      1 => 'field_topics',
      2 => 'tags_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Areas of Expertise',
      'instance_settings' => array(
        'classes' => 'group-tags tags',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_tags|node|person_profile|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_works|node|person_profile|form';
  $field_group->group_name = 'group_works';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Works',
    'weight' => '3',
    'children' => array(
      0 => 'field_major_works',
      1 => 'field_published_in',
      2 => 'field_quote_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-works field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_works|node|person_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Areas of Expertise');
  t('Author Title');
  t('Basic Information');
  t('Biography');
  t('Details');
  t('Works');

  return $field_groups;
}
