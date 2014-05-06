<?php
/**
 * @file
 * mises_stay_connected.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mises_stay_connected_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-mises-social-icons_facebook:https://www.facebook.com/mises.institute
  $menu_links['menu-mises-social-icons_facebook:https://www.facebook.com/mises.institute'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'https://www.facebook.com/mises.institute',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-774',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_774.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_facebook:https://www.facebook.com/mises.institute',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_google:https://plus.google.com/+mises
  $menu_links['menu-mises-social-icons_google:https://plus.google.com/+mises'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'https://plus.google.com/+mises',
    'router_path' => '',
    'link_title' => 'Google+',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-776',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_776.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_google:https://plus.google.com/+mises',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_instagram:http://instagram.com/misesinstitute
  $menu_links['menu-mises-social-icons_instagram:http://instagram.com/misesinstitute'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'http://instagram.com/misesinstitute',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-781',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_781.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_instagram:http://instagram.com/misesinstitute',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_itunes:https://itunes.apple.com/institution/mises-institute/id380675456#ls=1
  $menu_links['menu-mises-social-icons_itunes:https://itunes.apple.com/institution/mises-institute/id380675456#ls=1'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'https://itunes.apple.com/institution/mises-institute/id380675456#ls=1',
    'router_path' => '',
    'link_title' => 'iTunes',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-780',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_780.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_itunes:https://itunes.apple.com/institution/mises-institute/id380675456#ls=1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_picasa:https://picasaweb.google.com/MisesInstitute
  $menu_links['menu-mises-social-icons_picasa:https://picasaweb.google.com/MisesInstitute'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'https://picasaweb.google.com/MisesInstitute',
    'router_path' => '',
    'link_title' => 'Picasa',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-779',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_779.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_picasa:https://picasaweb.google.com/MisesInstitute',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_rss:<front>
  $menu_links['menu-mises-social-icons_rss:<front>'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'RSS',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-782',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_782.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_rss:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_twitter:https://twitter.com/mises
  $menu_links['menu-mises-social-icons_twitter:https://twitter.com/mises'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'https://twitter.com/mises',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-775',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_775.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_twitter:https://twitter.com/mises',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_vimeo:http://vimeo.com/misesmedia
  $menu_links['menu-mises-social-icons_vimeo:http://vimeo.com/misesmedia'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'http://vimeo.com/misesmedia',
    'router_path' => '',
    'link_title' => 'Vimeo',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-778',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_778.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_vimeo:http://vimeo.com/misesmedia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-mises-social-icons_youtube:http://www.youtube.com/user/misesmedia
  $menu_links['menu-mises-social-icons_youtube:http://www.youtube.com/user/misesmedia'] = array(
    'menu_name' => 'menu-mises-social-icons',
    'link_path' => 'http://www.youtube.com/user/misesmedia',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-777',
        ),
      ),
      'menu_icon' => array(
        'enable' => 1,
        'path' => 'public://menu_icons/menu_icon_777.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'menu-mises-social-icons_youtube:http://www.youtube.com/user/misesmedia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Facebook');
  t('Google+');
  t('Instagram');
  t('Picasa');
  t('RSS');
  t('Twitter');
  t('Vimeo');
  t('Youtube');
  t('iTunes');


  return $menu_links;
}
