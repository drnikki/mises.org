<?php
function mises_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'mises' => array(
        'title' => t('Mises'),
      ),
    ),
    'migrations' => array(
      'Product' => array('class_name' => 'ProductMigration', 'group_name' => 'mises'),
      'Course' => array('class_name' => 'CourseMigration', 'group_name' => 'mises'),
      'Biography' => array('class_name' => 'BiographyMigration', 'group_name' => 'mises'),
      'Review' => array('class_name' => 'ReviewMigration', 'group_name' => 'mises'),
      'Tags' => array('class_name' => 'TagsMigration', 'group_name' => 'mises'),
      'DailyArticles' => array('class_name' => 'DailyArticlesMigration', 'group_name' => 'mises'),
      'DailyArticlesImage' => array('class_name' => 'DailyArticlesImageMigration', 'group_name' => 'mises images'),
      'Document' => array('class_name' => 'DocumentMigration', 'group_name' => 'mises'),
      'DocumentImage' => array('class_name' => 'DocumentImageMigration', 'group_name' => 'mises images'),
      'DocumentMediaType' => array('class_name' => 'DocumentMediaTypeMigration', 'group_name' => 'mises'),
      'DocumentAuthors' => array('class_name' => 'DocumentAuthorsMigration', 'group_name' => 'mises'),
      'DocumentAuthorsImage' => array('class_name' => 'DocumentAuthorsImageMigration', 'group_name' => 'mises images'),
      'DocumentSubjects' => array('class_name' => 'DocumentSubjectsMigration', 'group_name' => 'mises'),
    ),
  );
  return $api;
}