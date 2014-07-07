<?php
/**
 * @file
 * mises_giving_structure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mises_giving_structure_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving' => 'giving',
        'giving/*' => 'giving/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fieldblock-e32400f688b5b1150d46199e8c938d47' => array(
          'module' => 'fieldblock',
          'delta' => 'e32400f688b5b1150d46199e8c938d47',
          'region' => 'featured_left',
          'weight' => '-10',
        ),
        'menu-menu-browse-library' => array(
          'module' => 'menu',
          'delta' => 'menu-browse-library',
          'region' => 'footer_left',
          'weight' => '-10',
        ),
        'menu-menu-about-the-mises-institute' => array(
          'module' => 'menu',
          'delta' => 'menu-about-the-mises-institute',
          'region' => 'footer_center',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_2',
          'region' => 'footer_right',
          'weight' => '-10',
        ),
        'views-3aca65518d87e0b3e49ba644b07eb80c' => array(
          'module' => 'views',
          'delta' => '3aca65518d87e0b3e49ba644b07eb80c',
          'region' => 'footer_right',
          'weight' => '-9',
        ),
        'views-flex_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_3',
          'region' => 'footer_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'giving',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving_front';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving' => 'giving',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-giving_feature_blocks-block' => array(
          'module' => 'views',
          'delta' => 'giving_feature_blocks-block',
          'region' => 'featured_left',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'featured_right',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_18' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_18',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-giving_stories-block_1' => array(
          'module' => 'views',
          'delta' => 'giving_stories-block_1',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'giving-front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving_impact';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving/impact' => 'giving/impact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-giving_stories-block' => array(
          'module' => 'views',
          'delta' => 'giving_stories-block',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'giving-impact',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving_impact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving_inner';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving/*' => 'giving/*',
        '~giving/impact' => '~giving/impact',
        '~giving/now' => '~giving/now',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-giving_stories-block_1' => array(
          'module' => 'views',
          'delta' => 'giving_stories-block_1',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'giving-inner',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving_inner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving_membership';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving/membership' => 'giving/membership',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-flex_blocks-block_19' => array(
          'module' => 'views',
          'delta' => 'flex_blocks-block_19',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-membership_levels-block' => array(
          'module' => 'views',
          'delta' => 'membership_levels-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving_membership'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'giving_support';
  $context->description = '';
  $context->tag = 'Giving';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'giving/support' => 'giving/support',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-areas_to_support-block' => array(
          'module' => 'views',
          'delta' => 'areas_to_support-block',
          'region' => 'bottom_one',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Giving');
  $export['giving_support'] = $context;

  return $export;
}
