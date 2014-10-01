<?php
/**
 * @file
 * mises_seo_settings.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function mises_seo_settings_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'description' => array(
        'value' => '',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'copyright' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.subject' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
      ),
      'dcterms.publisher' => array(
        'value' => '',
      ),
      'dcterms.contributor' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '',
      ),
      'dcterms.source' => array(
        'value' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
      ),
      'dcterms.relation' => array(
        'value' => '',
      ),
      'dcterms.coverage' => array(
        'value' => '',
      ),
      'dcterms.rights' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street-address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
      ),
      'og:country-name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:video' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:site' => array(
        'value' => '',
      ),
      'twitter:site:id' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'dcterms.title' => array(
        'value' => '[site:name]',
      ),
      'dcterms.identifier' => array(
        'value' => '[site:url]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'copyright' => array(
        'value' => '[node:field_copyright_info]',
      ),
      'dcterms.title' => array(
        'value' => '[node:title]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:author]',
      ),
      'dcterms.date' => array(
        'value' => '[node:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'dcterms.language' => array(
        'value' => '[node:language]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:book_digital_text.
  $config['node:book_digital_text'] = array(
    'instance' => 'node:book_digital_text',
    'config' => array(
      'description' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'nofollow' => 'nofollow',
          'noarchive' => 'noarchive',
          'nosnippet' => 'nosnippet',
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'noimageindex' => 'noimageindex',
          'notranslate' => 'notranslate',
          'index' => 0,
          'follow' => 0,
        ),
      ),
      'copyright' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
      ),
      'dcterms.type' => array(
        'value' => '',
      ),
      'dcterms.format' => array(
        'value' => '',
      ),
      'dcterms.identifier' => array(
        'value' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
      ),
      'og:title' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
      'og:url' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '',
      ),
      'twitter:title' => array(
        'value' => '',
      ),
      'twitter:description' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: node:campaign_.
  $config['node:campaign_'] = array(
    'instance' => 'node:campaign_',
    'config' => array(
      'description' => array(
        'value' => '[node:field_body]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '[node:field_body]',
      ),
      'og:description' => array(
        'value' => '[node:field_body]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_body]',
      ),
    ),
  );

  // Exported Metatag config instance: node:giving_story.
  $config['node:giving_story'] = array(
    'instance' => 'node:giving_story',
    'config' => array(
      'description' => array(
        'value' => '[node:field_body]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '[node:field_body]',
      ),
      'og:description' => array(
        'value' => '[node:field_body]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_body]',
      ),
    ),
  );

  // Exported Metatag config instance: node:job_posting_.
  $config['node:job_posting_'] = array(
    'instance' => 'node:job_posting_',
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_teaser]',
      ),
    ),
  );

  // Exported Metatag config instance: node:landing_page.
  $config['node:landing_page'] = array(
    'instance' => 'node:landing_page',
    'config' => array(
      'description' => array(
        'value' => '[node:field_teaser]',
      ),
      'author' => array(
        'value' => '[node:field-author-1:url]',
      ),
      'dcterms.creator' => array(
        'value' => '[node:field-author-1:title]',
      ),
      'dcterms.description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:description' => array(
        'value' => '[node:field_teaser]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'twitter:description' => array(
        'value' => '[node:field_teaser]',
      ),
    ),
  );

  // Exported Metatag config instance: node:person_profile.
  $config['node:person_profile'] = array(
    'instance' => 'node:person_profile',
    'config' => array(
      'description' => array(
        'value' => '[node:field_bio_summary]',
      ),
      'dcterms.creator' => array(
        'value' => '',
      ),
      'dcterms.description' => array(
        'value' => '[node:field_bio_summary]',
      ),
      'og:description' => array(
        'value' => '[node:field_bio_summary]',
      ),
      'og:type' => array(
        'value' => 'author',
      ),
      'twitter:description' => array(
        'value' => '[node:field_bio_summary]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[term:name] | [site:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.title' => array(
        'value' => '[term:name]',
      ),
      'dcterms.description' => array(
        'value' => '[term:description]',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[user:name] | [site:name]',
      ),
      'dcterms.title' => array(
        'value' => '[user:name]',
      ),
      'dcterms.date' => array(
        'value' => '[user:created:custom:Y-m-d\\TH:iP]',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'dcterms.creator' => array(
        'value' => '[user:name]',
      ),
      'og:type' => array(
        'value' => 'profile',
      ),
      'og:title' => array(
        'value' => '[user:name]',
      ),
      'og:image' => array(
        'value' => '[user:picture:url]',
      ),
    ),
  );

  // Exported Metatag config instance: view.
  $config['view'] = array(
    'instance' => 'view',
    'config' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
      ),
      'canonical' => array(
        'value' => '[view:url]',
      ),
    ),
  );

  return $config;
}
