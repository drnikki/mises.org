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
  $key_name = $view->name . '_' . $view->current_display ;
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
  $group_classes[] = $static[$key_name]['gc'];
  $group_class = implode(' ', $group_classes);
  //dpm($rows);
?>

<div class="panel">
  <?php if (!empty($title)): ?>
    <div class="group-title"><?php print $title; ?></div>
  <?php endif; ?>
  <div class="chapter collapse panel-group" id="chapter-<?php print $group_class; ?>">
    <div class="panel">
      <div class="hidden accordion-toggle" data-toggle="collapse" data-parent="#chapter-<?php print $group_class; ?>" data-target="#chapter-<?php print $group_class; ?>-intro"></div>
      <div class="chapter-intro collapse in" id="chapter-<?php print $group_class; ?>-intro"><?php print $view->result[$group_class]->field_field_book_chapter_content[0][rendered]['#markup']; ?></div>
    </div>
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>