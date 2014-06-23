<?php
/**
 * @file
 * giving.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function giving_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Give Today';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'give_today';
  $fe_block_boxes->body = '<h3 class="give"><a href="/giving/now"><span>Give Today</span></a></h3>
<div class="description">Mises Institute, a nonprofit organization, exists solely on voluntary contributions. Contributions are tax-deductible as permitted by law.</div>
<ul class="links">
  <li class="first"><a href="/giving/membership"><span>Membership Levels</span></a></li>
  <li><a href="http://www.google.ca"><span>Plan Your Legacy</span></a></li>
  <li class="last"><a href="/giving/payments"><span>Alternative Payments</span></a></li>
</ul>';

  $export['give_today'] = $fe_block_boxes;

  return $export;
}
