<?php
/**
 * @file
 * mises_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function mises_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: simplified
  $profiles['simplified'] = array(
    'format' => 'simplified',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Styles' => 1,
          'CreateDiv' => 1,
          'Scayt' => 1,
        ),
        'footnotes' => array(
          'footnotes' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '/sites/all/themes/bootsass/stylesheets/styles.css',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div,fn',
      'advanced__active_tab' => 'edit-output',
      'forcePasteAsPlainText' => 0,
      'ckeditor_styles' => array(
        'stylesheetparser' => 0,
      ),
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
