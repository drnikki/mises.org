<?php
/**
 * @file
 * giving.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function giving_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_file_default';
  $file_display->weight = -45;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__sidebar_player__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_file_download_link';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['video__sidebar_player__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_file_table';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__sidebar_player__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__sidebar_player__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_file_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'controls' => 1,
    'autoplay' => 0,
    'loop' => 0,
    'width' => '330',
    'height' => '200',
    'multiple_file_behavior' => 'tags',
  );
  $export['video__sidebar_player__file_field_file_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__file_field_media_large_icon';
  $file_display->weight = -44;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__sidebar_player__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__media_youtube_image';
  $file_display->weight = -48;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__sidebar_player__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__sidebar_player__media_youtube_video';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '336',
    'height' => '189',
    'theme' => 'dark',
    'color' => 'white',
    'autohide' => '2',
    'captions' => FALSE,
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 0,
    'modestbranding' => 0,
    'rel' => 0,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__sidebar_player__media_youtube_video'] = $file_display;

  return $export;
}
