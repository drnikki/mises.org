<?php
/**
 * @file
 * giving.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function giving_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-give_today'] = array(
    'cache' => -1,
    'css_class' => 'give-today-block',
    'custom' => 0,
    'machine_name' => 'give_today',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['fieldblock-e32400f688b5b1150d46199e8c938d47'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e32400f688b5b1150d46199e8c938d47',
    'module' => 'fieldblock',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-giving'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-giving',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['views-areas_to_support-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'areas_to_support-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-flex_blocks-block_18'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'flex_blocks-block_18',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-flex_blocks-block_19'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'flex_blocks-block_19',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-giving_feature_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'giving_feature_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-giving_stories-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'giving_stories-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => -50,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-giving_stories-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'giving_stories-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-membership_levels-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'membership_levels-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootsass' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootsass',
        'weight' => 0,
      ),
      'mises_giving' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mises_giving',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
