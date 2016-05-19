<?php
/**
 * @file
 * mises_ga_counter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_ga_counter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_access_token';
  $strongarm->value = 'ya29.tAIVh5ivngbB7u6VQVjZVqvxOHz9w5wDD-BQChHHP85sSPLpb4ckZgZD8-BOvOlEgpE';
  $export['google_analytics_counter_access_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_chunk_node_process_time';
  $strongarm->value = 124;
  $export['google_analytics_counter_chunk_node_process_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_chunk_process_time';
  $strongarm->value = 54;
  $export['google_analytics_counter_chunk_process_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_client_id';
  $strongarm->value = '2407250155-it2ab0lp5vedve1rr2073ab7kk8lr376.apps.googleusercontent.com';
  $export['google_analytics_counter_client_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_client_secret';
  $strongarm->value = 'bHeKSs3eV-evvGWtyU95uBd5';
  $export['google_analytics_counter_client_secret'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_cron_next_execution';
  $strongarm->value = 1459260544;
  $export['google_analytics_counter_cron_next_execution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_data_step';
  $strongarm->value = 0;
  $export['google_analytics_counter_data_step'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_dayquota';
  $strongarm->value = array(
    0 => 1459258744,
    1 => 1,
  );
  $export['google_analytics_counter_dayquota'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_default_page';
  $strongarm->value = '/default.aspx';
  $export['google_analytics_counter_default_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_expires_at';
  $strongarm->value = 1459263032;
  $export['google_analytics_counter_expires_at'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_node_data_step';
  $strongarm->value = 16;
  $export['google_analytics_counter_node_data_step'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_profile_id';
  $strongarm->value = '436964';
  $export['google_analytics_counter_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_refresh_token';
  $strongarm->value = '1/FADmdsgqe_bAKV2zk9OVmhYWAfdsfl2ab25eN5QSnGo';
  $export['google_analytics_counter_refresh_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_totalhits';
  $strongarm->value = '';
  $export['google_analytics_counter_totalhits'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_totalnodes';
  $strongarm->value = 35258;
  $export['google_analytics_counter_totalnodes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_analytics_counter_totalpaths';
  $strongarm->value = '';
  $export['google_analytics_counter_totalpaths'] = $strongarm;

  return $export;
}
