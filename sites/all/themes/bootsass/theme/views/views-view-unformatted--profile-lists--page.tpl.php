<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <?php $titleId = str_replace(" ","-",strtolower($title)); ?>
  <h2 id="<?php print $titleId; ?>"><?php print $title; ?></h2>
<?php endif; ?>
<div class="group clearfix">
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>
<p class="clearfix read-more text-right"><a href="#faculty-top">Back To Top</a></p>
