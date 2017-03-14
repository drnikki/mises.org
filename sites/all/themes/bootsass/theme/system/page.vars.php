<?php
/**
 * @file
 * page.vars.php
 */

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function bootsass_preprocess_page(&$variables) {
  // Set theme section
  if (isset($variables['node']) && ($variables['node']->type == 'giving_page' || $variables['node']->type == 'campaign_' || $variables['node']->type == 'giving_story')) {
    $variables['site_section'] = 'giving';
  } else {
    $variables['site_section'] = 'main';
  } 
     

  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && (!empty($variables['page']['sidebar_second']) || !empty($variables['page']['sidebar_second_top']))) {
    $variables['content_column_class'] = ' class="col-sm-6"';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['content_column_class'] = ' class="col-sm-10"';
  }
  elseif (!empty($variables['page']['sidebar_second']) || !empty($variables['page']['sidebar_second_top'])) {
    $variables['content_column_class'] = ' class="col-sm-8"';
  }
  else {
    $variables['content_column_class'] = ' class="col-sm-12"';
  }

  // Set bottom column class based on site section.
  if ($variables['site_section'] == 'giving') {
    $variables['bottom_column_class'] = ' class="giving-bottom"';
    $variables['menu_footer_class'] = ' class="giving-footer"';
    $variables['menu_footer_column_class'] = ' class="giving-footer-col"';
  }
  else {
    $variables['bottom_column_class'] = ' class="col-sm-3 col-xs-6"';
    $variables['menu_footer_class'] = ' class="menu-footer"';
    $variables['menu_footer_column_class'] = ' class="col-xs-6"';
  }

  // Container layout
  if (theme_get_setting('bootsass_container') == 'fluid') {
    $variables['container_classes_array'][] = 'container-fluid';
  }
  else {
    $variables['container_classes_array'][] = 'container';
  }

  // Custom Primary and Secondary nav based on site section.
  $variables['primary_nav'] = FALSE;
  // if a giving section page, use Secondary nav.
  if ($variables['site_section'] == 'giving') {
    $variables['secondary_nav'] = FALSE;
    if ($variables['secondary_menu']) {
      // Build links.
      $variables['secondary_nav'] = menu_tree(variable_get('menu_secondary_links_source', 'user-menu'));
      // Provide default theme wrapper function.
      $variables['secondary_nav']['#theme_wrappers'] = array('menu_tree__secondary');
    }
    //$variables['front_page'] = '/giving'; Use default home page instead
  } else {
    // Use Primary nav.
    if ($variables['main_menu']) {
      // Build links.
      $variables['primary_nav'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
      // Provide default theme wrapper function.
      $variables['primary_nav']['#theme_wrappers'] = array('menu_tree__primary');
    }
    
  }

  $variables['navbar_classes_array'] = array('navbar');

  if (theme_get_setting('bootsass_navbar_position') !== '') {
    $variables['navbar_classes_array'][] = 'navbar-' . theme_get_setting('bootsass_navbar_position');
  }
  else {
    $variables['navbar_classes_array'][] = 'container';
  }
  // Set navbar inverse or default based on giving section.
  if ($variables['site_section'] == 'giving') {
    $variables['navbar_classes_array'][] = 'navbar-default';
  }
  else {
    $variables['navbar_classes_array'][] = 'navbar-inverse';
  }

  
  // shield icon based on path
  if ($variables['site_section'] !== 'giving') {
    $path = drupal_get_path_alias($_GET['q']);
    $aliases = explode('/', $path);

    // default so it doesn't show a broken image
    $icon_suffix = 'library';

    foreach($aliases as $key => $alias) {
      if ($alias === 'press-room') {
        $icon_suffix = 'press';
      }
      elseif ($alias === 'events') {
        $icon_suffix = 'event';
      }
      elseif (in_array($alias, array('blog', 'wire'))) {
        $icon_suffix = 'wire';
      }
      elseif ($alias === 'courses') {
        //$icon_suffix = 'online';
      }
      elseif (in_array($alias, array('books', 'jobs', 'profile'))) {
        $icon_suffix = 'audience';
      }
      elseif ($alias == 'fedwatch') {
        $icon_suffix = 'fedwatch';
      }
    }

    // special cases
    if ($variables['is_front']) {
      $icon_suffix = 'wire';
    }
    // Add the terms to the body classes based on terms.
    elseif ($node = menu_get_object()) {
      // Return an array of taxonomy term ID's.
      $libraryids = field_get_items('node', $node, 'field_library_item_tree');
      $audienceids = field_get_items('node', $node, 'field_audience');
      if ($libraryids && $audienceids) {
        $termids =  array_merge($libraryids, $audienceids);
      } elseif ($audienceids) {
        $termids = $audienceids;
      } else {
        $termids = $libraryids;
      }
      // Load all the terms to get the name and vocab.
      if ($termids) {
        foreach ($termids as $termid) {
          $terms[] = isset($termid['tid']) ? taxonomy_term_load($termid['tid']) : taxonomy_term_load($termid['target_id']);
        }
        // Assign the taxonomy values for Library Item Type.
        $icon_set = false;
        foreach ($terms as $term) {
          if ($icon_set == false) {
            if ($term->tid == '541') {
              $icon_suffix = 'library';
              $icon_set = true;
            }
            elseif ($term->name == 'FedWatch') {
              $icon_suffix = 'fedwatch';
              $icon_set = true;
            }
            elseif ($term->tid == '185' || $term->tid == '434') {
              $icon_suffix = 'view';
              $icon_set = true;
            }
            elseif (in_array($term->tid, array('170'))) {
              $icon_suffix = 'books';
              $icon_set = true;
            }
            elseif ($term>tid == '367') {
              $icon_suffix = 'interview';
              $icon_set = true;
            }
            elseif (in_array($term->tid, array('442', '153', '158'))) {
              $icon_suffix = 'audio';
              $icon_set = true;
            }
          }
        }
        if (!$icon_set) {
          //$icon_suffix = strtolower(drupal_clean_css_identifier($term->name));
          $icon_suffix = 'library';
        }
      }
    }
    // Add special icons to nested term pages based on parents
    elseif (arg(0) == 'taxonomy' && arg(1) == 'term') {
      $term_tid = arg(2);
      $top_parent_term = null;
      $parent_terms = taxonomy_get_parents_all($term_tid);
      $icon_set = false;
      foreach($parent_terms as $parent) {
        if (!$icon_set) {
          if ($parent->tid == '185' || $parent->tid == '434') {
            $icon_suffix = 'view';
            $icon_set = true;
          }
          elseif ($parent->tid == '170') {
            $icon_suffix ='books';
            $icon_set = true;
          }
          elseif ($parent->tid == '367') {
            $icon_suffix = 'interview';
            $icon_set = true;
          }
          elseif ($parent->tid == '442') {
            $icon_suffix = 'audio';
            $icon_set = true;
          }
        }
      }
    }

    $theme_path = base_path() . path_to_theme();
    $shield_file_path = $theme_path . '/images/icons/shield-bg.png';
    $icon_file_path = $theme_path . '/images/icons/icon-' . $icon_suffix . '.png';

    $variables['page']['shield'] = array(
      '#theme' => 'image',
      '#path' => $shield_file_path,
      '#alt' => 'Shield icon',
      '#attributes' => array(
        'class' => array('shield-bg'),
      ),
    );

    $variables['page']['icon'] = array(
      '#theme' => 'image',
      '#path' => $icon_file_path,
      '#alt' => $icon_suffix,
      '#attributes' => array(
        'class' => array('icon'),
      ),
    );
  }
}

/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function bootsass_process_page(&$variables) {
  $variables['navbar_classes'] = implode(' ', $variables['navbar_classes_array']);
}
