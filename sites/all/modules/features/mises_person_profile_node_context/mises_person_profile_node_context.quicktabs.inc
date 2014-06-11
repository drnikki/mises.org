<?php
/**
 * @file
 * mises_person_profile_node_context.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function mises_person_profile_node_context_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'major_works_signif_contrib';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '&nbsp;';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_518725e88c5be93835ad07e45527ebd9',
      'hide_title' => 1,
      'title' => 'Major Works',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_c53aaefdc8461c0671804f548289709c',
      'hide_title' => 1,
      'title' => 'Significant Contributions',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('&nbsp;');
  t('Major Works');
  t('Significant Contributions');

  $export['major_works_signif_contrib'] = $quicktabs;

  return $export;
}
