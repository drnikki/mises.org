<?php
/**
 * @file
 * mises_campaign.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mises_campaign_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-campaign_-field_body'
  $field_instances['node-campaign_-field_body'] = array(
    'bundle' => 'campaign_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'simple_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'simplified' => 'simplified',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'simplified' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-campaign_-field_donate_link'
  $field_instances['node-campaign_-field_donate_link'] = array(
    'bundle' => 'campaign_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'simple_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_donate_link',
    'label' => 'Donate Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Give Now',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-campaign_-field_image'
  $field_instances['node-campaign_-field_image'] = array(
    'bundle' => 'campaign_',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'conditions' => array(),
          'image_style' => 'giving_full-width',
          'optionset' => 'node_slideshow',
        ),
        'type' => 'flexslider',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'conditions' => array(),
          'image_style' => 'giving_full-width',
          'optionset' => 'node_slideshow',
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
      'simple_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => 'giving_header',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-campaign_-field_registration_link'
  $field_instances['node-campaign_-field_registration_link'] = array(
    'bundle' => 'campaign_',
    'deleted' => 0,
    'description' => '<h3>Content Creators:</h3>
<ul><li>To add a Causeview form on this page, select "Add existing Causeview form," then start typing the title of the form. A list of matching forms will appear. Select the form you wish to use.</li>
<li>To replace an existing Causeview form, first click the "Remove" button next to the title of the form below. Then add a new one as described above.</li>
</ul>
<h3>Senior Editors:</h3>
<p>You have the option to use an existing Causeview forms or add a new one:</p>
<ul><li>To use an existing Causeview form, follow the instructions for Content Creators above.</li>
<li>To update an an existing Causeview form, click "Edit" next to the form title, then edit as needed.  <b>NOTE! Any changes you make in the Code Snippet field will apply to all uses of that form!</b></li>
<li>To create a new Causeview form, select "Add new Causeview form." Fill in the title, enter the code snippet provided by Causeview, set status to "Published" and click "Create Causeview form."</li>
</ul>
<p> </p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'links' => 0,
          'view_mode' => 'full',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'simple_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_registration_link',
    'label' => 'Causeview Form',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'label_plural' => 'Causeview forms',
          'label_singular' => 'Causeview form',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<h3>Content Creators:</h3>
<ul><li>To add a Causeview form on this page, select "Add existing Causeview form," then start typing the title of the form. A list of matching forms will appear. Select the form you wish to use.</li>
<li>To replace an existing Causeview form, first click the "Remove" button next to the title of the form below. Then add a new one as described above.</li>
</ul>
<h3>Senior Editors:</h3>
<p>You have the option to use an existing Causeview forms or add a new one:</p>
<ul><li>To use an existing Causeview form, follow the instructions for Content Creators above.</li>
<li>To update an an existing Causeview form, click "Edit" next to the form title, then edit as needed.  <b>NOTE! Any changes you make in the Code Snippet field will apply to all uses of that form!</b></li>
<li>To create a new Causeview form, select "Add new Causeview form." Fill in the title, enter the code snippet provided by Causeview, set status to "Published" and click "Create Causeview form."</li>
</ul>
<p> </p>');
  t('Body');
  t('Causeview Form');
  t('Donate Link');
  t('Image');

  return $field_instances;
}
