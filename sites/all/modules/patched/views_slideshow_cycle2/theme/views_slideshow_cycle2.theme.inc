<?php

/**
 * @file
 * Theme & preprocess functions for the Views Slideshow: cycle module.
 */

/**
 * Views Slideshow: Theme the main frame wrapper.
 *
 * @ingroup themeable
 */

function _views_slideshow_cycle2_preprocess_views_slideshow_cycle2_main_frame(&$vars) {
  $settings = $vars['settings'];
  $rows = $vars['rows'];
  $view = $vars['view'];
  $vss_id = $vars['vss_id'];

  // Cast the strings into int or bool as necessary.
  $new_settings = array();
  foreach ($settings as $key => $value) {
    if (is_string($value)) {
      $value = str_replace("\n", ' ', $value);

      $value = trim($value);

      if (is_numeric($value)) {
        $value = (int)$value;
      }
      elseif (strtolower($value) == 'true') {
        $value = TRUE;
      }
      elseif (strtolower($value) == 'false') {
        $value = FALSE;
      }
    }

    $new_settings[$key] = $value;
  }

  $settings = array_merge(
    array(
      'num_divs' => sizeof($rows),
      'id_prefix' => '#views_slideshow_cycle2_main_',
      'div_prefix' => '#views_slideshow_cycle2_div_',
      'vss_id' => $vss_id,
    ),
    $new_settings
  );

  // We need to go through the current js setting values to make sure the one we
  // want to add is not already there. If it is already there then append -[num]
  // to the id to make it unique.
  $slideshow_count = 1;
  $current_settings = drupal_add_js();
  foreach ($current_settings['settings']['data'] AS $current_setting) {
    if (isset($current_setting['viewsSlideshowCycle2'])) {
      $current_keys = array_keys($current_setting['viewsSlideshowCycle2']);
      if (stristr($current_keys[0], '#views_slideshow_cycle2_main_' . $vss_id)) {
        $slideshow_count++;
      }
    }
  }

  if ($slideshow_count > 1) {
    $vss_id .= '-' . $slideshow_count;
    $settings['vss_id'] = $vss_id;
  }

  $module_path = drupal_get_path('module', 'views_slideshow_cycle2');

  // Load our cycle css
  drupal_add_css($module_path . '/views_slideshow_cycle2.css', 'file');

  _views_slideshow_cycle2_load_js($module_path, array('#views_slideshow_cycle2_main_' . $vss_id => $settings));

  // Add the slideshow elements.
  $vars['classes_array'][] = 'views_slideshow_cycle2_teaser_section';

  $styles = '';
  if (isset($view->display_handler->display->display_options['style_options']['views_slideshow_cycle2'])) {
    $styles = $view->display_handler->display->display_options['style_options']['views_slideshow_cycle2'];
  }

  $styles_default = '';
  if (isset($view->display['default']->display_options['style_options']['views_slideshow_cycle2'])) {
    $styles_default = $view->display['default']->display_options['style_options']['views_slideshow_cycle2'];
  }

  // Retrive the number of items per frame
  if (isset($styles['items_per_slide']) && $styles['items_per_slide'] > 0) {
    $items_per_slide = $styles['items_per_slide'];
  }
  elseif (isset($styles_default['items_per_slide']) && $styles_default['items_per_slide'] > 0) {
    $items_per_slide = $styles_default['items_per_slide'];
  }
  else {
    $items_per_slide = 1;
  }

  $vars['items_per_slide'] = $items_per_slide;

  $items = array();
  $slideshow_count = 0;
  $rendered_rows = '';
  foreach ($rows as $count => $item) {
    $items[] = $item;
    if (count($items) == $items_per_slide || $count == (count($rows)-1)) {
      $rendered_rows .= theme(views_theme_functions('views_slideshow_cycle2_main_frame_row', $vars['view'], $vars['view']->display[$vars['view']->current_display]), array('vss_id' => $vss_id, 'items' => $items, 'count' => $slideshow_count, 'view' => $vars['view']));
      $items = array();
      $slideshow_count++;
    }
  }

  $vars['rendered_rows'] = $rendered_rows;

  $data_attributes = array(
    'allow-wrap' => $settings['nowrap'] == 0 ? true : false,
    'delay' => $settings['delay'],
    'fx' => $settings['effect'],
    'pause-on-hover' => $settings['pause'] == 0 ? false : true,
    'random' => $settings['random'] == 0 ? false : true,
    'speed' => $settings['speed'],
    'swipe' => $settings['swipe'] == 0 ? false : true,
    'timeout' => $settings['timeout'],
    'loader' => $settings['image_loader'],

    'log' => 'false',
    'pager' => '#widget_pager_bottom_' . $vss_id . ', #widget_pager_top_' . $vss_id, // TODO: Check that vss_id is always correct
    'pager-template' => '', // By default Cycle2 will add its own pager elements, but we have our own
    'prev' => '#views_slideshow_controls_text_' . $vss_id . ' .views-slideshow-controls-text-previous',
    'next' => '#views_slideshow_controls_text_' . $vss_id . ' .views-slideshow-controls-text-next',
    'slides' => '> .views_slideshow_slide',
  );

  // Implement effect-specific options
  
  preg_match('/[a-z]+/', $settings['effect'], $effect_base);
  
  if (isset($settings['effect_options'][$effect_base[0]])) {
    foreach ($settings['effect_options'][$effect_base[0]] as $key => $value) {
      $data_attributes[$key] = $value;
    }
  }

  $vars['data_attr'] = '';

  foreach ($data_attributes as $key => $value) {
    if ($value === true || $value === false) {
      $value = $value === true ? 'true' : 'false';
      $vars['data_attr'] .= "data-cycle-$key=$value ";
    } else {
      $vars['data_attr'] .= "data-cycle-$key=\"$value\" ";
    }
  }
}

/**
 * Views Slideshow slideshow rows.
 *
 * @ingroup themeable
 */
function _views_slideshow_cycle2_preprocess_views_slideshow_cycle2_main_frame_row(&$vars) {
  $current = $vars['count'] + 1;
  $vars['classes_array'][] = 'views_slideshow_cycle2_slide';
  $vars['classes_array'][] = 'views_slideshow_slide views-row-' . $current;

  if ($vars['count']) {
    $vars['classes_array'][] =  'views_slideshow_cycle2_hidden';
  }
  $vars['classes_array'][] = ($vars['count'] % 2) ? 'views-row-even' : 'views-row-odd';

  $vars['rendered_items'] = '';
  foreach ($vars['items'] as $item_count => $item) {
    $vars['rendered_items'] .= theme(views_theme_functions('views_slideshow_cycle2_main_frame_row_item', $vars['view'], $vars['view']->display[$vars['view']->current_display]), array('item' => $item, 'item_count' => $item_count, 'count' => $vars['count'], 'view' => $vars['view']));
  }
}

function _views_slideshow_cycle2_preprocess_views_slideshow_cycle2_main_frame_row_item(&$vars) {
  $vars['classes_array'][] = 'views-row views-row-' . $vars['item_count'];
  if (!$vars['item_count']) {
    $vars['classes_array'][] = 'views-row-first';
  }
  if ($vars['item_count'] % 2) {
    $vars['classes_array'][] = 'views-row-even';
  }
  else {
    $vars['classes_array'][] = 'views-row-odd';
  }

  /**
   * Support custom row classes.
   */
  if ($row_class = $vars['view']->style_plugin->get_row_class($vars['count'])) {
    $vars['classes_array'][] = $row_class;
  }
}
