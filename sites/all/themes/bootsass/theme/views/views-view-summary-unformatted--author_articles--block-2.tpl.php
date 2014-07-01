<?php
// Source http://drupal.stackexchange.com/a/13429
?>

<div class="views-summary">
  <ul class="menu nav">
    <?php foreach ($rows as $id => $row): ?>
    <?php
      //print '<pre>';
      //print_r($row);
      //print '</pre>';
    $term_name = $row->taxonomy_term_data_field_data_field_library_item_tree_name;
    $term = taxonomy_get_term_by_name($term_name);
    $ms_term = array_shift($term);
    $ms_search_url = '/search/site/?f[0]=sm_field_author_1%3Anode%3A'.arg(1).'&f[1]=im_field_library_item_tree%3A'.$ms_term->tid;
     ?>
    <li>
      <a href="<?php print $ms_search_url; ?>"<?php print !empty($row_classes[$id]) ? ' class="'. $row_classes[$id] .'"' : ''; ?>>
        <?php
        /* begin replacement */
        print  $ms_term->name; 
        /* end replacement*/
        ?>
      </a>
      <?php if (!empty($options['count'])): ?>
      &nbsp;(<?php print $row->count?>)
      <?php endif; ?>
    </li>
    <?php endforeach; ?>
  </ul>
</div>
