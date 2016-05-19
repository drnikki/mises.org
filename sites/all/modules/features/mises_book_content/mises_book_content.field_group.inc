<?php
/**
 * @file
 * mises_book_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mises_book_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_content|node|book_digital_text|form';
  $field_group->group_name = 'group_book_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_digital_text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_citation',
      1 => 'field_book_chapter',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Book Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-book-content field-group-tab',
        'description' => '<p>Book content can be organized as chapters OR as pages within chapters. If the chapter content is longer than one vertical screen or has subtitles, the chapter can (and should) be broken into pages.</p>
<p>To add new HTML content:</p>
<ol><li>Begin by clicking <b>"Add a new Book Chapter"</b>. Enter chapter title (required) and chapter content (optional).</li>
<li>To add a page, click <b>"Add a new Book Page"</b> below the Chapter Content field. Enter the Page title and content. Click <b>"Create Book Page"</b> to save.</li>
<li>Repeat for all pages in that chapter.</li>
<li>Click <b>"Create Book Chapter"</b> to save the chapter and its pages.</li>
</ol>
<p>To edit existing HTML content:</p>
<ol><li>Click <b>"Edit"</b> under the Operations column next to the chapter you would like to edit.</li>
<li>Edit the Chapter Title and/or Chapter Content as needed. Click <b>"Update Book Chapter"</b> below the Pages list to save.</li>
<li>To edit an existing page, click <b>"Edit"</b> under the Operations column next to the Page you would like to edit. Edit as needed. Click <b>"Update Book Page"</b> to save.</li>
<li>To add a page, click <b>"Add a new Book Page"</b> below the Chapter Content field. Enter the Page title and content. Click <b>"Create Book Page"</b> to save.</li>
<li>After updating all Chapter and/or Pages, click <b>"Update Book Chapter"</b> to save the chapter and its pages.</li>
</ol>
<p>Tips:</p>
<ol><li>Create all of the other content for this Book/Digital Text (basic information, media and tagging) and save before entering Book Chapters and Pages. Then edit to create the Book Chapters and Pages.</li>
<li>Enter one Chapter and/or Page at a time, saving after each page (to avoid losing any work). </li>
<li>Remember to click <b>"Save"</b> at the bottom of the page to save all of your work.</li>
<li>If the chapter content is longer than one vertical screen or has subtitles, the chapter can (and should) be broken into pages.</li>
</ol>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_book_content|node|book_digital_text|form'] = $field_group;

  return $export;
}
