<?php
/**
 * @file
 * mises_roles_and_perms.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mises_roles_and_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'overlay',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access send by email'.
  $permissions['access send by email'] = array(
    'name' => 'access send by email',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer any social profiles'.
  $permissions['administer any social profiles'] = array(
    'name' => 'administer any social profiles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer easy_breadcrumb'.
  $permissions['administer easy_breadcrumb'] = array(
    'name' => 'administer easy_breadcrumb',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'easy_breadcrumb',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mises code'.
  $permissions['administer mises code'] = array(
    'name' => 'administer mises code',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'mises_utility',
  );

  // Exported permission: 'administer mises popular content'.
  $permissions['administer mises popular content'] = array(
    'name' => 'administer mises popular content',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'mises_popular_content',
  );

  // Exported permission: 'administer mises settings'.
  $permissions['administer mises settings'] = array(
    'name' => 'administer mises settings',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'mises_utility',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own social profiles'.
  $permissions['administer own social profiles'] = array(
    'name' => 'administer own social profiles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer page titles'.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer salesforce'.
  $permissions['administer salesforce'] = array(
    'name' => 'administer salesforce',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'salesforce',
  );

  // Exported permission: 'administer salesforce mapping'.
  $permissions['administer salesforce mapping'] = array(
    'name' => 'administer salesforce mapping',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social media'.
  $permissions['administer social media'] = array(
    'name' => 'administer social media',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'assign node weight'.
  $permissions['assign node weight'] = array(
    'name' => 'assign node weight',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'weight',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create award content'.
  $permissions['create award content'] = array(
    'name' => 'create award content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create book_digital_text content'.
  $permissions['create book_digital_text content'] = array(
    'name' => 'create book_digital_text content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create campaign_ content'.
  $permissions['create campaign_ content'] = array(
    'name' => 'create campaign_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create causeview_snippet content'.
  $permissions['create causeview_snippet content'] = array(
    'name' => 'create causeview_snippet content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create flex_block content'.
  $permissions['create flex_block content'] = array(
    'name' => 'create flex_block content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create giving_story content'.
  $permissions['create giving_story content'] = array(
    'name' => 'create giving_story content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create homepage_hero content'.
  $permissions['create homepage_hero content'] = array(
    'name' => 'create homepage_hero content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institute_fellowship content'.
  $permissions['create institute_fellowship content'] = array(
    'name' => 'create institute_fellowship content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create job_posting_ content'.
  $permissions['create job_posting_ content'] = array(
    'name' => 'create job_posting_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create library_item content'.
  $permissions['create library_item content'] = array(
    'name' => 'create library_item content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create person_profile content'.
  $permissions['create person_profile content'] = array(
    'name' => 'create person_profile content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create photo_gallery content'.
  $permissions['create photo_gallery content'] = array(
    'name' => 'create photo_gallery content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create product content'.
  $permissions['create product content'] = array(
    'name' => 'create product content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create scholarship_ content'.
  $permissions['create scholarship_ content'] = array(
    'name' => 'create scholarship_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create social_media content'.
  $permissions['create social_media content'] = array(
    'name' => 'create social_media content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create working_papers content'.
  $permissions['create working_papers content'] = array(
    'name' => 'create working_papers content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any award content'.
  $permissions['delete any award content'] = array(
    'name' => 'delete any award content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any book_digital_text content'.
  $permissions['delete any book_digital_text content'] = array(
    'name' => 'delete any book_digital_text content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any campaign_ content'.
  $permissions['delete any campaign_ content'] = array(
    'name' => 'delete any campaign_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any causeview_snippet content'.
  $permissions['delete any causeview_snippet content'] = array(
    'name' => 'delete any causeview_snippet content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any ebook files'.
  $permissions['delete any ebook files'] = array(
    'name' => 'delete any ebook files',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any flex_block content'.
  $permissions['delete any flex_block content'] = array(
    'name' => 'delete any flex_block content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any giving_story content'.
  $permissions['delete any giving_story content'] = array(
    'name' => 'delete any giving_story content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_hero content'.
  $permissions['delete any homepage_hero content'] = array(
    'name' => 'delete any homepage_hero content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any institute_fellowship content'.
  $permissions['delete any institute_fellowship content'] = array(
    'name' => 'delete any institute_fellowship content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job_posting_ content'.
  $permissions['delete any job_posting_ content'] = array(
    'name' => 'delete any job_posting_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any library_item content'.
  $permissions['delete any library_item content'] = array(
    'name' => 'delete any library_item content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any person_profile content'.
  $permissions['delete any person_profile content'] = array(
    'name' => 'delete any person_profile content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any photo_gallery content'.
  $permissions['delete any photo_gallery content'] = array(
    'name' => 'delete any photo_gallery content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any product content'.
  $permissions['delete any product content'] = array(
    'name' => 'delete any product content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any scholarship_ content'.
  $permissions['delete any scholarship_ content'] = array(
    'name' => 'delete any scholarship_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any social_media content'.
  $permissions['delete any social_media content'] = array(
    'name' => 'delete any social_media content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any working_papers content'.
  $permissions['delete any working_papers content'] = array(
    'name' => 'delete any working_papers content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own award content'.
  $permissions['delete own award content'] = array(
    'name' => 'delete own award content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book_digital_text content'.
  $permissions['delete own book_digital_text content'] = array(
    'name' => 'delete own book_digital_text content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own campaign_ content'.
  $permissions['delete own campaign_ content'] = array(
    'name' => 'delete own campaign_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own causeview_snippet content'.
  $permissions['delete own causeview_snippet content'] = array(
    'name' => 'delete own causeview_snippet content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own ebook files'.
  $permissions['delete own ebook files'] = array(
    'name' => 'delete own ebook files',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own flex_block content'.
  $permissions['delete own flex_block content'] = array(
    'name' => 'delete own flex_block content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own giving_story content'.
  $permissions['delete own giving_story content'] = array(
    'name' => 'delete own giving_story content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_hero content'.
  $permissions['delete own homepage_hero content'] = array(
    'name' => 'delete own homepage_hero content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own institute_fellowship content'.
  $permissions['delete own institute_fellowship content'] = array(
    'name' => 'delete own institute_fellowship content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job_posting_ content'.
  $permissions['delete own job_posting_ content'] = array(
    'name' => 'delete own job_posting_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own library_item content'.
  $permissions['delete own library_item content'] = array(
    'name' => 'delete own library_item content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own person_profile content'.
  $permissions['delete own person_profile content'] = array(
    'name' => 'delete own person_profile content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own photo_gallery content'.
  $permissions['delete own photo_gallery content'] = array(
    'name' => 'delete own photo_gallery content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own product content'.
  $permissions['delete own product content'] = array(
    'name' => 'delete own product content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own scholarship_ content'.
  $permissions['delete own scholarship_ content'] = array(
    'name' => 'delete own scholarship_ content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own social_media content'.
  $permissions['delete own social_media content'] = array(
    'name' => 'delete own social_media content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own working_papers content'.
  $permissions['delete own working_papers content'] = array(
    'name' => 'delete own working_papers content',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in award_type'.
  $permissions['delete terms in award_type'] = array(
    'name' => 'delete terms in award_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in currents_trends'.
  $permissions['delete terms in currents_trends'] = array(
    'name' => 'delete terms in currents_trends',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in events'.
  $permissions['delete terms in events'] = array(
    'name' => 'delete terms in events',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in level'.
  $permissions['delete terms in level'] = array(
    'name' => 'delete terms in level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_type'.
  $permissions['delete terms in media_type'] = array(
    'name' => 'delete terms in media_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in profile_type'.
  $permissions['delete terms in profile_type'] = array(
    'name' => 'delete terms in profile_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in reading_group'.
  $permissions['delete terms in reading_group'] = array(
    'name' => 'delete terms in reading_group',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in reason_for_contact'.
  $permissions['delete terms in reason_for_contact'] = array(
    'name' => 'delete terms in reason_for_contact',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in the_austrian_school_of_economics'.
  $permissions['delete terms in the_austrian_school_of_economics'] = array(
    'name' => 'delete terms in the_austrian_school_of_economics',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any ebook files'.
  $permissions['download any ebook files'] = array(
    'name' => 'download any ebook files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own ebook files'.
  $permissions['download own ebook files'] = array(
    'name' => 'download own ebook files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'ds_switch award'.
  $permissions['ds_switch award'] = array(
    'name' => 'ds_switch award',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch blog'.
  $permissions['ds_switch blog'] = array(
    'name' => 'ds_switch blog',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch book_digital_text'.
  $permissions['ds_switch book_digital_text'] = array(
    'name' => 'ds_switch book_digital_text',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch campaign_'.
  $permissions['ds_switch campaign_'] = array(
    'name' => 'ds_switch campaign_',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch causeview_snippet'.
  $permissions['ds_switch causeview_snippet'] = array(
    'name' => 'ds_switch causeview_snippet',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch course'.
  $permissions['ds_switch course'] = array(
    'name' => 'ds_switch course',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch event'.
  $permissions['ds_switch event'] = array(
    'name' => 'ds_switch event',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch flex_block'.
  $permissions['ds_switch flex_block'] = array(
    'name' => 'ds_switch flex_block',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch giving_story'.
  $permissions['ds_switch giving_story'] = array(
    'name' => 'ds_switch giving_story',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch homepage_hero'.
  $permissions['ds_switch homepage_hero'] = array(
    'name' => 'ds_switch homepage_hero',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch institute_fellowship'.
  $permissions['ds_switch institute_fellowship'] = array(
    'name' => 'ds_switch institute_fellowship',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch job_posting_'.
  $permissions['ds_switch job_posting_'] = array(
    'name' => 'ds_switch job_posting_',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch landing_page'.
  $permissions['ds_switch landing_page'] = array(
    'name' => 'ds_switch landing_page',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch library_item'.
  $permissions['ds_switch library_item'] = array(
    'name' => 'ds_switch library_item',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch page'.
  $permissions['ds_switch page'] = array(
    'name' => 'ds_switch page',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch person_profile'.
  $permissions['ds_switch person_profile'] = array(
    'name' => 'ds_switch person_profile',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch photo_gallery'.
  $permissions['ds_switch photo_gallery'] = array(
    'name' => 'ds_switch photo_gallery',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch product'.
  $permissions['ds_switch product'] = array(
    'name' => 'ds_switch product',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch scholarship_'.
  $permissions['ds_switch scholarship_'] = array(
    'name' => 'ds_switch scholarship_',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch social_media'.
  $permissions['ds_switch social_media'] = array(
    'name' => 'ds_switch social_media',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch webform'.
  $permissions['ds_switch webform'] = array(
    'name' => 'ds_switch webform',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'ds_switch working_papers'.
  $permissions['ds_switch working_papers'] = array(
    'name' => 'ds_switch working_papers',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: 'eck add book_chapter book_chapter entities'.
  $permissions['eck add book_chapter book_chapter entities'] = array(
    'name' => 'eck add book_chapter book_chapter entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add book_chapter bundles'.
  $permissions['eck add book_chapter bundles'] = array(
    'name' => 'eck add book_chapter bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add book_page book_page entities'.
  $permissions['eck add book_page book_page entities'] = array(
    'name' => 'eck add book_page book_page entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add book_page bundles'.
  $permissions['eck add book_page bundles'] = array(
    'name' => 'eck add book_page bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add bundles'.
  $permissions['eck add bundles'] = array(
    'name' => 'eck add bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entities'.
  $permissions['eck add entities'] = array(
    'name' => 'eck add entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck add entity types'.
  $permissions['eck add entity types'] = array(
    'name' => 'eck add entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer book_chapter book_chapter entities'.
  $permissions['eck administer book_chapter book_chapter entities'] = array(
    'name' => 'eck administer book_chapter book_chapter entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer book_chapter bundles'.
  $permissions['eck administer book_chapter bundles'] = array(
    'name' => 'eck administer book_chapter bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer book_page book_page entities'.
  $permissions['eck administer book_page book_page entities'] = array(
    'name' => 'eck administer book_page book_page entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer book_page bundles'.
  $permissions['eck administer book_page bundles'] = array(
    'name' => 'eck administer book_page bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer bundles'.
  $permissions['eck administer bundles'] = array(
    'name' => 'eck administer bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entities'.
  $permissions['eck administer entities'] = array(
    'name' => 'eck administer entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer entity types'.
  $permissions['eck administer entity types'] = array(
    'name' => 'eck administer entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete book_chapter book_chapter entities'.
  $permissions['eck delete book_chapter book_chapter entities'] = array(
    'name' => 'eck delete book_chapter book_chapter entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete book_chapter bundles'.
  $permissions['eck delete book_chapter bundles'] = array(
    'name' => 'eck delete book_chapter bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete book_page book_page entities'.
  $permissions['eck delete book_page book_page entities'] = array(
    'name' => 'eck delete book_page book_page entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete book_page bundles'.
  $permissions['eck delete book_page bundles'] = array(
    'name' => 'eck delete book_page bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete bundles'.
  $permissions['eck delete bundles'] = array(
    'name' => 'eck delete bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entities'.
  $permissions['eck delete entities'] = array(
    'name' => 'eck delete entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete entity types'.
  $permissions['eck delete entity types'] = array(
    'name' => 'eck delete entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit book_chapter book_chapter entities'.
  $permissions['eck edit book_chapter book_chapter entities'] = array(
    'name' => 'eck edit book_chapter book_chapter entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit book_chapter bundles'.
  $permissions['eck edit book_chapter bundles'] = array(
    'name' => 'eck edit book_chapter bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit book_page book_page entities'.
  $permissions['eck edit book_page book_page entities'] = array(
    'name' => 'eck edit book_page book_page entities',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit book_page bundles'.
  $permissions['eck edit book_page bundles'] = array(
    'name' => 'eck edit book_page bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit bundles'.
  $permissions['eck edit bundles'] = array(
    'name' => 'eck edit bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entities'.
  $permissions['eck edit entities'] = array(
    'name' => 'eck edit entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit entity types'.
  $permissions['eck edit entity types'] = array(
    'name' => 'eck edit entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list book_chapter book_chapter entities'.
  $permissions['eck list book_chapter book_chapter entities'] = array(
    'name' => 'eck list book_chapter book_chapter entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list book_chapter bundles'.
  $permissions['eck list book_chapter bundles'] = array(
    'name' => 'eck list book_chapter bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list book_page book_page entities'.
  $permissions['eck list book_page book_page entities'] = array(
    'name' => 'eck list book_page book_page entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list book_page bundles'.
  $permissions['eck list book_page bundles'] = array(
    'name' => 'eck list book_page bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list bundles'.
  $permissions['eck list bundles'] = array(
    'name' => 'eck list bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entities'.
  $permissions['eck list entities'] = array(
    'name' => 'eck list entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck list entity types'.
  $permissions['eck list entity types'] = array(
    'name' => 'eck list entity types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view book_chapter book_chapter entities'.
  $permissions['eck view book_chapter book_chapter entities'] = array(
    'name' => 'eck view book_chapter book_chapter entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view book_chapter bundles'.
  $permissions['eck view book_chapter bundles'] = array(
    'name' => 'eck view book_chapter bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view book_page book_page entities'.
  $permissions['eck view book_page book_page entities'] = array(
    'name' => 'eck view book_page book_page entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view book_page bundles'.
  $permissions['eck view book_page bundles'] = array(
    'name' => 'eck view book_page bundles',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'eck view entities'.
  $permissions['eck view entities'] = array(
    'name' => 'eck view entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eck',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any award content'.
  $permissions['edit any award content'] = array(
    'name' => 'edit any award content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any book_digital_text content'.
  $permissions['edit any book_digital_text content'] = array(
    'name' => 'edit any book_digital_text content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any campaign_ content'.
  $permissions['edit any campaign_ content'] = array(
    'name' => 'edit any campaign_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any causeview_snippet content'.
  $permissions['edit any causeview_snippet content'] = array(
    'name' => 'edit any causeview_snippet content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any ebook files'.
  $permissions['edit any ebook files'] = array(
    'name' => 'edit any ebook files',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any flex_block content'.
  $permissions['edit any flex_block content'] = array(
    'name' => 'edit any flex_block content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any giving_story content'.
  $permissions['edit any giving_story content'] = array(
    'name' => 'edit any giving_story content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_hero content'.
  $permissions['edit any homepage_hero content'] = array(
    'name' => 'edit any homepage_hero content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any institute_fellowship content'.
  $permissions['edit any institute_fellowship content'] = array(
    'name' => 'edit any institute_fellowship content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job_posting_ content'.
  $permissions['edit any job_posting_ content'] = array(
    'name' => 'edit any job_posting_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any library_item content'.
  $permissions['edit any library_item content'] = array(
    'name' => 'edit any library_item content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any person_profile content'.
  $permissions['edit any person_profile content'] = array(
    'name' => 'edit any person_profile content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any photo_gallery content'.
  $permissions['edit any photo_gallery content'] = array(
    'name' => 'edit any photo_gallery content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any product content'.
  $permissions['edit any product content'] = array(
    'name' => 'edit any product content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any scholarship_ content'.
  $permissions['edit any scholarship_ content'] = array(
    'name' => 'edit any scholarship_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any social_media content'.
  $permissions['edit any social_media content'] = array(
    'name' => 'edit any social_media content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any working_papers content'.
  $permissions['edit any working_papers content'] = array(
    'name' => 'edit any working_papers content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own award content'.
  $permissions['edit own award content'] = array(
    'name' => 'edit own award content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book_digital_text content'.
  $permissions['edit own book_digital_text content'] = array(
    'name' => 'edit own book_digital_text content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own campaign_ content'.
  $permissions['edit own campaign_ content'] = array(
    'name' => 'edit own campaign_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own causeview_snippet content'.
  $permissions['edit own causeview_snippet content'] = array(
    'name' => 'edit own causeview_snippet content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own ebook files'.
  $permissions['edit own ebook files'] = array(
    'name' => 'edit own ebook files',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own flex_block content'.
  $permissions['edit own flex_block content'] = array(
    'name' => 'edit own flex_block content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own giving_story content'.
  $permissions['edit own giving_story content'] = array(
    'name' => 'edit own giving_story content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_hero content'.
  $permissions['edit own homepage_hero content'] = array(
    'name' => 'edit own homepage_hero content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own institute_fellowship content'.
  $permissions['edit own institute_fellowship content'] = array(
    'name' => 'edit own institute_fellowship content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job_posting_ content'.
  $permissions['edit own job_posting_ content'] = array(
    'name' => 'edit own job_posting_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own library_item content'.
  $permissions['edit own library_item content'] = array(
    'name' => 'edit own library_item content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own person_profile content'.
  $permissions['edit own person_profile content'] = array(
    'name' => 'edit own person_profile content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own photo_gallery content'.
  $permissions['edit own photo_gallery content'] = array(
    'name' => 'edit own photo_gallery content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own product content'.
  $permissions['edit own product content'] = array(
    'name' => 'edit own product content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own scholarship_ content'.
  $permissions['edit own scholarship_ content'] = array(
    'name' => 'edit own scholarship_ content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own social_media content'.
  $permissions['edit own social_media content'] = array(
    'name' => 'edit own social_media content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own working_papers content'.
  $permissions['edit own working_papers content'] = array(
    'name' => 'edit own working_papers content',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in award_type'.
  $permissions['edit terms in award_type'] = array(
    'name' => 'edit terms in award_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in currents_trends'.
  $permissions['edit terms in currents_trends'] = array(
    'name' => 'edit terms in currents_trends',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in events'.
  $permissions['edit terms in events'] = array(
    'name' => 'edit terms in events',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in level'.
  $permissions['edit terms in level'] = array(
    'name' => 'edit terms in level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_type'.
  $permissions['edit terms in media_type'] = array(
    'name' => 'edit terms in media_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in profile_type'.
  $permissions['edit terms in profile_type'] = array(
    'name' => 'edit terms in profile_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in reading_group'.
  $permissions['edit terms in reading_group'] = array(
    'name' => 'edit terms in reading_group',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in reason_for_contact'.
  $permissions['edit terms in reason_for_contact'] = array(
    'name' => 'edit terms in reason_for_contact',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in the_austrian_school_of_economics'.
  $permissions['edit terms in the_austrian_school_of_economics'] = array(
    'name' => 'edit terms in the_austrian_school_of_economics',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage book_chapter properties'.
  $permissions['manage book_chapter properties'] = array(
    'name' => 'manage book_chapter properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage book_page properties'.
  $permissions['manage book_page properties'] = array(
    'name' => 'manage book_page properties',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'menu edit devel'.
  $permissions['menu edit devel'] = array(
    'name' => 'menu edit devel',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit features'.
  $permissions['menu edit features'] = array(
    'name' => 'menu edit features',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit main-menu'.
  $permissions['menu edit main-menu'] = array(
    'name' => 'menu edit main-menu',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit management'.
  $permissions['menu edit management'] = array(
    'name' => 'menu edit management',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-about-mises-sub-menu'.
  $permissions['menu edit menu-about-mises-sub-menu'] = array(
    'name' => 'menu edit menu-about-mises-sub-menu',
    'roles' => array(),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-about-the-mises-institute'.
  $permissions['menu edit menu-about-the-mises-institute'] = array(
    'name' => 'menu edit menu-about-the-mises-institute',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-austrian-economics-sub-menu'.
  $permissions['menu edit menu-austrian-economics-sub-menu'] = array(
    'name' => 'menu edit menu-austrian-economics-sub-menu',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-austrian-school'.
  $permissions['menu edit menu-austrian-school'] = array(
    'name' => 'menu edit menu-austrian-school',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-browse-library'.
  $permissions['menu edit menu-browse-library'] = array(
    'name' => 'menu edit menu-browse-library',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-economist-resources-sub-men'.
  $permissions['menu edit menu-economist-resources-sub-men'] = array(
    'name' => 'menu edit menu-economist-resources-sub-men',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-event-menu'.
  $permissions['menu edit menu-event-menu'] = array(
    'name' => 'menu edit menu-event-menu',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-homeschool-sub-menu'.
  $permissions['menu edit menu-homeschool-sub-menu'] = array(
    'name' => 'menu edit menu-homeschool-sub-menu',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-library-sub-menu'.
  $permissions['menu edit menu-library-sub-menu'] = array(
    'name' => 'menu edit menu-library-sub-menu',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-mises-social-icons'.
  $permissions['menu edit menu-mises-social-icons'] = array(
    'name' => 'menu edit menu-mises-social-icons',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-new-to-mises'.
  $permissions['menu edit menu-new-to-mises'] = array(
    'name' => 'menu edit menu-new-to-mises',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-press-room'.
  $permissions['menu edit menu-press-room'] = array(
    'name' => 'menu edit menu-press-room',
    'roles' => array(
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit menu-topics'.
  $permissions['menu edit menu-topics'] = array(
    'name' => 'menu edit menu-topics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit navigation'.
  $permissions['menu edit navigation'] = array(
    'name' => 'menu edit navigation',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'menu edit user-menu'.
  $permissions['menu edit user-menu'] = array(
    'name' => 'menu edit user-menu',
    'roles' => array(
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'menu_editor',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send unlimited emails'.
  $permissions['send unlimited emails'] = array(
    'name' => 'send unlimited emails',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: 'set page title'.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: 'show format selection for book_chapter'.
  $permissions['show format selection for book_chapter'] = array(
    'name' => 'show format selection for book_chapter',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for book_page'.
  $permissions['show format selection for book_page'] = array(
    'name' => 'show format selection for book_page',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for entityform'.
  $permissions['show format selection for entityform'] = array(
    'name' => 'show format selection for entityform',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for rules_config'.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'use text format ds_code'.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view salesforce mapping'.
  $permissions['view salesforce mapping'] = array(
    'name' => 'view salesforce mapping',
    'roles' => array(
      'Drupal Developer' => 'Drupal Developer',
    ),
    'module' => 'salesforce_mapping',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Blog Author' => 'Blog Author',
      'Content Creator' => 'Content Creator',
      'Drupal Developer' => 'Drupal Developer',
      'Senior Editor' => 'Senior Editor',
      'Site Administrator' => 'Site Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
