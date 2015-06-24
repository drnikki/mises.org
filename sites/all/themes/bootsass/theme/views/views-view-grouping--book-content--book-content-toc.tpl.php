<?php
/**
  * This template is used to print a single grouping in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $grouping: The grouping instruction.
  * - $grouping_level: Integer indicating the hierarchical level of the grouping.
  * - $rows: The rows contained in this grouping.
  * - $title: The title of this grouping.
  * - $content: The processed content output that will normally be used.
  */
?>

<?php if (!empty($title)): ?>
  <li class="view-grouping-header"><?php print $title; ?>
  <?php $content_length = strlen($content); ?>
  <?php if ($content_length > 1): ?>
    <ul class="view-grouping-content accordion nav">
      <?php print $content; ?>
    </ul>
  <?php endif; ?>
  </li>
<?php endif; ?>
