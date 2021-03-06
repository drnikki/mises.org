<?php
function mises_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'mises' => array(
        'title' => t('Mises'),
      ),
      'mises youtube' => array(
        'title' => t('Mises Youtube'),
      ),
      'mises images' => array(
        'title' => t('Mises Images'),
      ),
      'mises journals' => array(
        'title' => t('Mises Journals'),
      ),
    ),
    'migrations' => array(
      'Product' => array('class_name' => 'ProductMigration', 'group_name' => 'mises'),
      'Course' => array('class_name' => 'CourseMigration', 'group_name' => 'mises'),
      'Biography' => array('class_name' => 'BiographyMigration', 'group_name' => 'mises'),
      'Quotes' => array('class_name' => 'QuotesMigration', 'group_name' => 'mises'),
      'DailyArticles' => array('class_name' => 'DailyArticlesMigration', 'group_name' => 'mises'),
      'DailyArticlesImage' => array('class_name' => 'DailyArticlesImageMigration', 'group_name' => 'mises images'),
      'Document' => array('class_name' => 'DocumentMigration', 'group_name' => 'mises'),
      'DocumentImage' => array('class_name' => 'DocumentImageMigration', 'group_name' => 'mises images'),
      'DocumentFileDocument' => array('class_name' => 'DocumentFileDocumentMigration', 'group_name' => 'mises images'),
      'DocumentAuthors' => array('class_name' => 'DocumentAuthorsMigration', 'group_name' => 'mises'),
      'DocumentAuthorsImage' => array('class_name' => 'DocumentAuthorsImageMigration', 'group_name' => 'mises images'),
      'JLS' => array('class_name' => 'JLSMigration', 'group_name' => 'mises journals'),
      'QJAE' => array('class_name' => 'QJAEMigration', 'group_name' => 'mises journals'),
      'RAE' => array('class_name' => 'QJAEMigration', 'group_name' => 'mises journals'),
      'AEN' => array('class_name' => 'AENMigration', 'group_name' => 'mises journals'),
      'MisesReview' => array('class_name' => 'MisesReviewMigration', 'group_name' => 'mises journals'),
      'FreeMarket' => array('class_name' => 'FreeMarketMigration', 'group_name' => 'mises journals'),
      'Youtube' => array('class_name' => 'YoutubeMigration', 'group_name' => 'mises youtube'),
      'DocumentFileYoutube' => array('class_name' => 'DocumentFileYoutubeMigration', 'group_name' => 'mises youtube'),
    ),
  );
  return $api;
}
