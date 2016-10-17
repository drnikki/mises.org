<?php
/**
 * @file
 * mises_library_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_library_item_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|library_item|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_subtitle',
      1 => 'field_id',
      2 => 'field_published_date',
      3 => 'field_mises_published_date',
      4 => 'field_author_1',
      5 => 'title',
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
  $field_groups['group_basic|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|library_item|block_teaser_term';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'block_teaser_term';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Panel Body',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_text',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel Body',
      'instance_settings' => array(
        'classes' => 'group-body panel-body',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_body|node|library_item|block_teaser_term'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_digi_text_media|node|library_item|form';
  $field_group->group_name = 'group_book_digi_text_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Documents / Links',
    'weight' => '4',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_link_to_external_listing_',
      3 => 'field_mobi',
      4 => 'field_online_text',
      5 => 'field_pdf',
      6 => 'field_books',
      7 => 'field_audio_book',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Documents / Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-book-digi-text-media field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_book_digi_text_media|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_formats|node|library_item|teaser';
  $field_group->group_name = 'group_book_formats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Formats',
    'weight' => '8',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_link_to_external_listing_',
      2 => 'field_pdf',
      3 => 'field_audio_book',
      4 => 'dynamic_field_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Formats',
      'instance_settings' => array(
        'classes' => 'book-formats',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'span',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_book_formats|node|library_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|library_item|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_text',
      2 => 'field_document_attachment',
      3 => 'field_bibliography_footnote',
      4 => 'field_citation',
      5 => 'field_image_collection',
      6 => 'field_social_media_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|library_item|audio_teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'audio_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '6',
    'children' => array(
      0 => 'field_mises_published_date',
      1 => 'field_author_1',
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
  $field_groups['group_date_author|node|library_item|audio_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|library_item|full';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '5',
    'children' => array(
      0 => 'field_mises_published_date',
      1 => 'field_author_1',
      2 => 'custom_post_date',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'classes' => 'group-date-author',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_date_author|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_author|node|library_item|teaser';
  $field_group->group_name = 'group_date_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date Author',
    'weight' => '5',
    'children' => array(
      0 => 'field_mises_published_date',
      1 => 'field_author_1',
      2 => 'custom_post_date',
      3 => 'top_term',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Date Author',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-date-author',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_date_author|node|library_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_tags|node|library_item|form';
  $field_group->group_name = 'group_featured_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tagging';
  $field_group->data = array(
    'label' => 'Featured Tags',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-tags field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_featured_tags|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footnotes|node|library_item|full';
  $field_group->group_name = 'group_footnotes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '15',
    'children' => array(
      0 => 'field_bibliography_footnote',
      1 => 'field_citation',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-footnotes',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_footnotes|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_wrapper|node|library_item|full';
  $field_group->group_name = 'group_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_collection',
      1 => 'disqus_comment_count',
      2 => 'ga_page_counter',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Wrapper',
      'instance_settings' => array(
        'id' => 'slideshow',
        'classes' => 'group-image-wrapper field-group-html-element pull-left',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_wrapper|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_journal_data|node|library_item|form';
  $field_group->group_name = 'group_journal_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tagging';
  $field_group->data = array(
    'label' => 'Journal Data',
    'weight' => '15',
    'children' => array(
      0 => 'field_journal_number',
      1 => 'field_journal_volume',
      2 => 'field_journal_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Journal Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-journal-data field-group-fieldset sub-group three-children',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_journal_data|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|library_item|full';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '6',
    'children' => array(
      0 => 'field_epub',
      1 => 'field_kindle',
      2 => 'field_link_to_external_listing_',
      3 => 'field_mobi',
      4 => 'field_pdf',
      5 => 'field_audio_book',
      6 => 'dynamic_field_1',
      7 => 'dynamic_field_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'classes' => 'group-links list-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_links|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|library_item|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '3',
    'children' => array(
      0 => 'field_media_collection',
      1 => 'field_transcript',
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
  $field_groups['group_media|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_body|node|library_item|sidebar_teaser';
  $field_group->group_name = 'group_panel_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'sidebar_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_text',
      2 => 'node_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'classes' => 'panel-body padding-lg',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_panel_body|node|library_item|sidebar_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_body|node|library_item|video_block_teaser';
  $field_group->group_name = 'group_panel_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'video_block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_text',
      2 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-teaser panel-body',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_panel_body|node|library_item|video_block_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_secondary|node|library_item|form';
  $field_group->group_name = 'group_secondary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_original_title',
      1 => 'field_original_publication_link',
      2 => 'field_editor_s_note',
      3 => 'field_copyright_info',
      4 => 'field_hidden_solr_content',
      5 => 'field_show_disclaimer',
      6 => 'field_show_comment_policy',
      7 => 'field_exclude_disqus_comment',
      8 => 'field_show_support_mises_badge',
      9 => 'field_hide_copyright',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-secondary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_secondary|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sharing|node|library_item|full';
  $field_group->group_name = 'group_sharing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '53',
    'children' => array(
      0 => 'field_copyright_info',
      1 => 'print_link',
      2 => 'social_widget',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-sharing clearfix',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_sharing|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging|node|library_item|form';
  $field_group->group_name = 'group_tagging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '5',
    'children' => array(
      0 => 'field_featured_content',
      1 => 'field_timely_content',
      2 => 'field_audience',
      3 => 'field_level',
      4 => 'field_library_item_tree',
      5 => 'field_topics',
      6 => 'field_austrian_school',
      7 => 'group_featured_tags',
      8 => 'group_journal_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tagging|node|library_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|library_item|audio_teaser';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'audio_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_austrian_school',
      2 => 'tags_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'tags',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_tags|node|library_item|audio_teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|library_item|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_austrian_school',
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
  $field_groups['group_tags|node|library_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|library_item|teaser';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_topics',
      1 => 'field_austrian_school',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'tags',
      'instance_settings' => array(
        'classes' => 'tags',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_tags|node|library_item|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|library_item|block_teaser';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'library_item';
  $field_group->mode = 'block_teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_text',
      2 => 'title',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'wrapper' => 'aside',
      ),
    ),
  );
  $field_groups['group_teaser|node|library_item|block_teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Information');
  t('Body');
  t('Content');
  t('Date Author');
  t('Documents / Links');
  t('Featured Tags');
  t('Formats');
  t('Image Wrapper');
  t('Journal Data');
  t('Links');
  t('Media');
  t('Panel Body');
  t('Secondary Information');
  t('Tagging');
  t('Tags');
  t('tags');

  return $field_groups;
}
