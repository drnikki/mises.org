<?php

/**
 * @file
 * Adapted from views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php
  #### defs
  global $static;
  global $current_row;
  $key_name = $view->name . '_' . $view->current_display;
  foreach ($view->args as $value) {
    $key_name .= '_' . $value;
  }
  $group_classes = array();
  if (!isset($static[$key_name]['gc'])) {
    $static[$key_name]['gc'] = 0;
  }
  else {
    $static[$key_name]['gc']++;
  }
  // drupal_set_message('<pre>' . print_r($view->result, 1) . '</pre>');

  if (!isset($current_row)) {
    $current_row = 0;
  }
     
  if (!isset($view->result[$current_row]->field_field_book_chapter_content[0][rendered]['#markup'])) {
    $chap_id = $view->result[$current_row]->eck_book_chapter_field_data_field_book_chapter_id;
    for ($i = $current_row; $i < count($view->result); $i++) {
      if ($view->result[$i]->eck_book_chapter_field_data_field_book_chapter_id != $chap_id) {
        break;
      }
      if (isset($view->result[$i]->field_field_book_chapter_content[0][rendered]['#markup'])) {
        $chapter_markup = $view->result[$i]->field_field_book_chapter_content[0][rendered]['#markup'];
        break;
      }
    }
  } else {
    $chapter_markup = $view->result[$current_row]->field_field_book_chapter_content[0][rendered]['#markup'];
  }

  $group_classes[] = $static[$key_name]['gc'];
  $group_class = implode(' ', $group_classes);
  $current_row++;

  $current_chap = $view->result[$current_row]->eck_book_chapter_field_data_field_book_chapter_id;
  for ($i = $current_row; $i < count($view->result); $i++) {
    if (isset($view->result[$current_row + 1]->eck_book_chapter_field_data_field_book_chapter_id)) {
      if ($current_chap == $view->result[$current_row + 1]->eck_book_chapter_field_data_field_book_chapter_id) {
        $current_row++;
      } else {
        break;
      }
    }
  }
?>

<div class="panel">
  <?php if (!empty($title)): ?>
    <div class="group-title"> <?php print $title; ?></div>
  <?php endif; ?>
  <div class="chapter collapse panel-group" id="chapter-<?php print $group_class; ?>">
    <div class="panel">
      <div class="hidden accordion-toggle" data-toggle="collapse" data-parent="#chapter-<?php print $group_class; ?>" data-target="#chapter-<?php print $group_class; ?>-intro"></div>
      <div class="chapter-intro collapse in" id="chapter-<?php print $group_class; ?>-intro"><?php print $chapter_markup; ?></div>
    </div>
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
