<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <li class="view-grouping-subtitle"><?php print $title; ?>
    <?php $rows_string = implode('',$rows); 
        $rows_length = strlen($rows_string); ?>
    <?php //if ($rows_length > 1) : ?>
    <?php if (array_filter($rows)) : ?>
    <ul class="accordion nav">
      <?php foreach ($rows as $id => $row): ?>
        <?php if(!empty($row)) : ?> 
          <li<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
            <?php print $row; ?>
          </li>
        <?php endif; ?>
      <?php endforeach; ?>
    </ul>
    <?php endif; ?>
  </li>
<?php endif; ?>
