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
}

/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function bootsass_process_page(&$variables) {
  $variables['navbar_classes'] = implode(' ', $variables['navbar_classes_array']);
}
