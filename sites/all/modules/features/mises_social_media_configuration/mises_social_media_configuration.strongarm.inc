<?php
/**
 * @file
 * mises_social_media_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_social_media_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_body_background';
  $strongarm->value = '#F6F6F2';
  $export['socialmedia_default_color_body_background'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_body_linktext';
  $strongarm->value = '#0779BF';
  $export['socialmedia_default_color_body_linktext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_body_text';
  $strongarm->value = '#3B3B3B';
  $export['socialmedia_default_color_body_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_border';
  $strongarm->value = '#D6D6D6';
  $export['socialmedia_default_color_border'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_header_background';
  $strongarm->value = '#DDDDDD';
  $export['socialmedia_default_color_header_background'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_color_header_text';
  $strongarm->value = '#3B3B3B';
  $export['socialmedia_default_color_header_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_height';
  $strongarm->value = '300';
  $export['socialmedia_default_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_rel_profile';
  $strongarm->value = '<none>';
  $export['socialmedia_default_link_rel_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_rel_sharing';
  $strongarm->value = '<none>';
  $export['socialmedia_default_link_rel_sharing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_target_profile';
  $strongarm->value = '_blank';
  $export['socialmedia_default_link_target_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_link_target_sharing';
  $strongarm->value = '_blank';
  $export['socialmedia_default_link_target_sharing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_default_width';
  $strongarm->value = '292';
  $export['socialmedia_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_icon_default_style';
  $strongarm->value = 'levelten_glossy:32x32';
  $export['socialmedia_icon_default_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_platforms_site';
  $strongarm->value = array(
    'twitter' => 'twitter',
    'facebook' => 'facebook',
    'googleplus' => 'googleplus',
    'vimeo' => 'vimeo',
    'youtube' => 'youtube',
    'flickr' => 0,
    'linkedin' => 0,
    'pinterest' => 0,
    'rss' => 0,
    'slideshare' => 0,
    'addthis' => 0,
  );
  $export['socialmedia_platforms_site'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_platforms_user';
  $strongarm->value = array(
    'twitter' => 0,
    'facebook' => 0,
    'flickr' => 0,
    'googleplus' => 0,
    'linkedin' => 0,
    'pinterest' => 0,
    'rss' => 0,
    'slideshare' => 0,
    'vimeo' => 0,
    'youtube' => 0,
    'addthis' => 0,
  );
  $export['socialmedia_platforms_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'socialmedia_widget_set_default_profile';
  $strongarm->value = array(
    'data' => array(
      'style' => 'horizontal',
      'cache' => array(
        'scope' => 'site',
      ),
    ),
    'elements' => array(
      0 => array(
        'name' => 'socialmedia_socialmedia-twitter-profile-button',
        'weight' => 1,
        'platform' => 'twitter',
        'label' => 'Socialmedia Twitter profile button',
        'group' => 'Social media: Twitter',
        'template' => '<a href="http://twitter.com/[?profile_username=[socialmedia:sm-twitter_username]?]" title="Visit [?profile_username=[socialmedia:sm-twitter_username]?] on Twitter"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-twitter_icon-path]?]" alt="Twitter icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      1 => array(
        'name' => 'socialmedia_socialmedia-facebook-profile-button',
        'weight' => 2,
        'platform' => 'facebook',
        'label' => 'Socialmedia Facebook profile button',
        'group' => 'Social media: Facebook',
        'template' => '<a href="[?profile_url=[socialmedia:sm-facebook_url]?]" title="Visit [?profile_username=[socialmedia:sm-facebook_username]?] on Facebook"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-facebook_icon-path]?]" alt="Facebook icon"></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      2 => array(
        'name' => 'socialmedia_socialmedia-googleplus-profile-button',
        'weight' => 3,
        'platform' => 'googleplus',
        'label' => 'Socialmedia Google+ profile button',
        'group' => 'Social media: Google+',
        'template' => '<a href="[?profile_url=[socialmedia:sm-googleplus_url]?]" title="Visit [?profile_username=[socialmedia:sm-googleplus_username]?] on Google+"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-googleplus_icon-path]?]" alt="Google+ icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      3 => array(
        'name' => 'socialmedia_socialmedia-vimeo-profile-button',
        'weight' => 4,
        'platform' => 'vimeo',
        'label' => 'Socialmedia Vimeo profile button',
        'group' => 'Social media: Vimeo',
        'template' => '<a href="[?profile_url=[socialmedia:sm-vimeo_url]?]" title="Visit [?profile_username=[socialmedia:sm-vimeo_username]?] on Vimeo"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-vimeo_icon-path]?]" alt="Vimeo icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
      4 => array(
        'name' => 'socialmedia_socialmedia-youtube-profile-button',
        'weight' => 5,
        'platform' => 'youtube',
        'label' => 'Socialmedia YouTube profile button',
        'group' => 'Social media: YouTube',
        'template' => '<a href="[?profile_url=[socialmedia:sm-youtube_url]?]" title="Visit [?profile_username=[socialmedia:sm-youtube_username]?] on YouTube"[?link-target= target="{[socialmedia:sm-default_link_target_profile]}"?][?link-rel= rel="{[socialmedia:sm-default_link_rel_profile]}"?]><img src="[?icon-path=[socialmedia:sm-youtube_icon-path]?]" alt="YouTube icon" ></a>',
        'form callback' => 'socialmedia_widgets_share_platforms_form',
        'module' => 'socialmedia',
        'data' => array(),
        'storage' => 4,
      ),
    ),
    'name' => 'socialmedia_profile-default',
    'module' => 'socialmedia',
    'storage' => 4,
  );
  $export['socialmedia_widget_set_default_profile'] = $strongarm;

  return $export;
}
