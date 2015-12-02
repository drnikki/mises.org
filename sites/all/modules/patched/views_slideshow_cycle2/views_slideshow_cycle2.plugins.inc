<?php

/**
 * @file
 * Provide options for known plugins.
 */

function views_slideshow_cycle2_effect_options($view) {
  $form['tile'] = array(
    '#type' => 'container',
    '#states' => array(
      'visible' => array(
        ':input[name="style_options[views_slideshow_cycle2][effect]"]' => array(
          array('value' => 'tileBlind'),
          array('value' => 'tileSlide'),
        ),
      ),
    ),
  );

  $tile_options = $view->options['views_slideshow_cycle2']['effect_options']['tile'];

  $form['tile']['tile-vertical'] = array(
    '#type' => 'select',
    '#title' => t('Direction'),
    '#options' => array(
      'true' => t('Vertical'),
      'false' => t('Horizontal'),
    ),
    '#default_value' => $tile_options['tile-vertical'],
  );

  $form['tile']['tile-count'] = array(
    '#type' => 'textfield',
    '#title' => t('Tile Count'),
    '#default_value' => $tile_options['tile-count'],
  );

  $form['tile']['tile-delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Title Delay'),
    '#description' => t('The number of milliseconds to delay each individual tile transition.'),
    '#default_value' => $tile_options['tile-delay'],
  );

  return $form;
}
