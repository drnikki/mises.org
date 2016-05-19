<?php
/**
 * @file
 * mises_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entity_ref_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Ref Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  /* Filter criterion: Content: Image (field_image_collection) */
  $handler->display->display_options['filters']['field_image_collection_value']['id'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['table'] = 'field_data_field_image_collection';
  $handler->display->display_options['filters']['field_image_collection_value']['field'] = 'field_image_collection_value';
  $handler->display->display_options['filters']['field_image_collection_value']['operator'] = 'not empty';

  /* Display: Nodes with Image */
  $handler = $view->new_display('entityreference', 'Nodes with Image', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Nodes with Video */
  $handler = $view->new_display('entityreference', 'Nodes with Video', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Media (field_media_collection) */
  $handler->display->display_options['relationships']['field_media_collection_value']['id'] = 'field_media_collection_value';
  $handler->display->display_options['relationships']['field_media_collection_value']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['relationships']['field_media_collection_value']['field'] = 'field_media_collection_value';
  $handler->display->display_options['relationships']['field_media_collection_value']['delta'] = '-1';
  /* Relationship: Field collection item: Media (field_media:fid) */
  $handler->display->display_options['relationships']['field_media_fid']['id'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['table'] = 'field_data_field_media';
  $handler->display->display_options['relationships']['field_media_fid']['field'] = 'field_media_fid';
  $handler->display->display_options['relationships']['field_media_fid']['relationship'] = 'field_media_collection_value';
  $handler->display->display_options['relationships']['field_media_fid']['required'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Media (field_media_collection) */
  $handler->display->display_options['filters']['field_media_collection_value']['id'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['table'] = 'field_data_field_media_collection';
  $handler->display->display_options['filters']['field_media_collection_value']['field'] = 'field_media_collection_value';
  $handler->display->display_options['filters']['field_media_collection_value']['operator'] = 'not empty';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_media_fid';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'video' => 'video',
  );

  /* Display: Library Items - Quotes */
  $handler = $view->new_display('entityreference', 'Library Items - Quotes', 'library_item_quotes_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'media_type' => 'media_type',
    'award_type' => 0,
    'currents_trends' => 0,
    'the_austrian_school_of_economics' => 0,
    'level' => 0,
    'reading_group' => 0,
    'tags' => 0,
    'events' => 0,
    'profile_type' => 0,
    'reason_for_contact' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    162 => '162',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Library Items - Audio */
  $handler = $view->new_display('entityreference', 'Library Items - Audio', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'media_type' => 'media_type',
    'award_type' => 0,
    'currents_trends' => 0,
    'the_austrian_school_of_economics' => 0,
    'level' => 0,
    'reading_group' => 0,
    'tags' => 0,
    'events' => 0,
    'profile_type' => 0,
    'reason_for_contact' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'library_item' => 'library_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    442 => '442',
    149 => '149',
    158 => '158',
    546 => '546',
    543 => '543',
    415 => '415',
    534 => '534',
    417 => '417',
    386 => '386',
    420 => '420',
    410 => '410',
    389 => '389',
    408 => '408',
    390 => '390',
    385 => '385',
    414 => '414',
    409 => '409',
    419 => '419',
    401 => '401',
    391 => '391',
    535 => '535',
    392 => '392',
    393 => '393',
    394 => '394',
    407 => '407',
    412 => '412',
    418 => '418',
    413 => '413',
    395 => '395',
    405 => '405',
    403 => '403',
    440 => '440',
    439 => '439',
    399 => '399',
    400 => '400',
    435 => '435',
    436 => '436',
    437 => '437',
    438 => '438',
    406 => '406',
    398 => '398',
    396 => '396',
    402 => '402',
    404 => '404',
    397 => '397',
    388 => '388',
    416 => '416',
    524 => '524',
    411 => '411',
    387 => '387',
    384 => '384',
    148 => '148',
    153 => '153',
    367 => '367',
    441 => '441',
    434 => '434',
    379 => '379',
    368 => '368',
    378 => '378',
    364 => '364',
    185 => '185',
    365 => '365',
    370 => '370',
    372 => '372',
    375 => '375',
    373 => '373',
    374 => '374',
    376 => '376',
    377 => '377',
    369 => '369',
    366 => '366',
    532 => '532',
    145 => '145',
    240 => '240',
    241 => '241',
    422 => '422',
    561 => '561',
    139 => '139',
    556 => '556',
    548 => '548',
    526 => '526',
    423 => '423',
    425 => '425',
    527 => '527',
    426 => '426',
    428 => '428',
    529 => '529',
    424 => '424',
    430 => '430',
    429 => '429',
    427 => '427',
    142 => '142',
    277 => '277',
    275 => '275',
    280 => '280',
    276 => '276',
    279 => '279',
    282 => '282',
    278 => '278',
    271 => '271',
    274 => '274',
    272 => '272',
    281 => '281',
    273 => '273',
    152 => '152',
    298 => '298',
    297 => '297',
    296 => '296',
    299 => '299',
    177 => '177',
    290 => '290',
    287 => '287',
    289 => '289',
    288 => '288',
    292 => '292',
    293 => '293',
    285 => '285',
    286 => '286',
    294 => '294',
    284 => '284',
    291 => '291',
    174 => '174',
    169 => '169',
    256 => '256',
    248 => '248',
    246 => '246',
    247 => '247',
    249 => '249',
    250 => '250',
    245 => '245',
    251 => '251',
    252 => '252',
    253 => '253',
    254 => '254',
    255 => '255',
    528 => '528',
    257 => '257',
    445 => '445',
    557 => '557',
    160 => '160',
    547 => '547',
    446 => '446',
    302 => '302',
    163 => '163',
    269 => '269',
    268 => '268',
    267 => '267',
    266 => '266',
    265 => '265',
    264 => '264',
    263 => '263',
    262 => '262',
    259 => '259',
    261 => '261',
    260 => '260',
    186 => '186',
    180 => '180',
    565 => '565',
    346 => '346',
    354 => '354',
    342 => '342',
    363 => '363',
    347 => '347',
    350 => '350',
    345 => '345',
    361 => '361',
    339 => '339',
    352 => '352',
    343 => '343',
    351 => '351',
    358 => '358',
    348 => '348',
    338 => '338',
    341 => '341',
    353 => '353',
    340 => '340',
    349 => '349',
    356 => '356',
    360 => '360',
    362 => '362',
    355 => '355',
    344 => '344',
    242 => '242',
    357 => '357',
    359 => '359',
    146 => '146',
    549 => '549',
    533 => '533',
    536 => '536',
    332 => '332',
    324 => '324',
    308 => '308',
    311 => '311',
    336 => '336',
    310 => '310',
    317 => '317',
    313 => '313',
    312 => '312',
    531 => '531',
    530 => '530',
    328 => '328',
    320 => '320',
    330 => '330',
    309 => '309',
    329 => '329',
    318 => '318',
    315 => '315',
    314 => '314',
    326 => '326',
    322 => '322',
    321 => '321',
    323 => '323',
    333 => '333',
    307 => '307',
    331 => '331',
    316 => '316',
    327 => '327',
    443 => '443',
    334 => '334',
    319 => '319',
    325 => '325',
    335 => '335',
    188 => '188',
    304 => '304',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'media_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $export['entity_ref_filters'] = $view;

  return $export;
}
