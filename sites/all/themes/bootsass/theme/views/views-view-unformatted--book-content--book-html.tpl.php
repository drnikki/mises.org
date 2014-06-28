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
?>

<div class="panel">
  <?php if (!empty($title)): ?>
    <div class="group-title"><?php print $title; ?></div>
  <?php endif; ?>
  <div class="chapter collapse panel-group" id="chapter-<?php print $group_class; ?>">
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>