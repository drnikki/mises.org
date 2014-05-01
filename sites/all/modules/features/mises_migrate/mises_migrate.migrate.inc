<?php

/**
 * @file
 * Because the name of this file is the module name plus '.migrate.inc', when
 * hook_migrate_api is invoked by the Migrate module this file is automatically
 * loaded - thus, you don't need to implement your hook in the .module file.
 */

/*
 * You must implement hook_migrate_api(), setting the API level to 2, if you are
 * implementing any migration classes. As of Migrate 2.5, you should also
 * register your migration and handler classes explicitly here - the former
 * method of letting them get automatically registered on a cache clear will
 * break in certain environments (see http://drupal.org/node/1778952).
 */
function mises_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'mises' => array(
        'title' => t('Mises'),
      ),
    ),
    'migrations' => array(
      'Biography' => array('class_name' => 'BiographyMigration', 'group_name' => 'mises'),
      'Review' => array('class_name' => 'ReviewMigration', 'group_name' => 'mises'),
      'Tags' => array('class_name' => 'TagsMigration', 'group_name' => 'mises'),
      'DailyArticles' => array('class_name' => 'DailyArticlesMigration', 'group_name' => 'mises'),
      'Document' => array('class_name' => 'DocumentMigration', 'group_name' => 'mises'),
      'DocumentMediaType' => array('class_name' => 'DocumentMediaTypeMigration', 'group_name' => 'mises'),
      'DocumentAuthors' => array('class_name' => 'DocumentAuthorsMigration', 'group_name' => 'mises'),
      'DocumentSubjects' => array('class_name' => 'DocumentSubjectsMigration', 'group_name' => 'mises'),
    ),
  );
  return $api;
}

