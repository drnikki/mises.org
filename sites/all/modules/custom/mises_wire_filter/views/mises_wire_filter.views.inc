<?php
/**
 * Implements hook_views_data_alter().
 */
function mises_wire_filter_views_data_alter(&$data) {

  $data['node']['mises_wire'] = array(
    'title' => t('Mises Wire'),
    'help' => t('Filter the content that belong to the Mises Wire section'),
    'filter' => array(
      'handler' => 'mises_wire_handler_filter',
    ),
  );

  return $data;
}
