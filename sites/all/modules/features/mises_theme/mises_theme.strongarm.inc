<?php
/**
 * @file
 * mises_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'menu-about-mises-sub-menu' => 'menu-about-mises-sub-menu',
    'menu-about-the-mises-institute' => 'menu-about-the-mises-institute',
    'menu-austrian-economics-sub-menu' => 'menu-austrian-economics-sub-menu',
    'menu-browse-library' => 'menu-browse-library',
    'devel' => 'devel',
    'menu-economist-resources-sub-men' => 'menu-economist-resources-sub-men',
    'menu-event-menu' => 'menu-event-menu',
    'features' => 'features',
    'menu-new-to-mises' => 'menu-new-to-mises',
    'menu-homeschool-sub-menu' => 'menu-homeschool-sub-menu',
    'menu-library-sub-menu' => 'menu-library-sub-menu',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
    'menu-press-room' => 'menu-press-room',
    'menu-mises-social-icons' => 'menu-mises-social-icons',
    'user-menu' => 'user-menu',
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_environment';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_search_page';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_box';
  $strongarm->value = 1;
  $export['features_admin_show_component_box'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_conditional_fields';
  $strongarm->value = 1;
  $export['features_admin_show_component_conditional_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_context';
  $strongarm->value = 1;
  $export['features_admin_show_component_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_current_search';
  $strongarm->value = 1;
  $export['features_admin_show_component_current_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_dependencies';
  $strongarm->value = 1;
  $export['features_admin_show_component_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_fields';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_field_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_layout_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_vd';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_view_modes';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_entityform_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_entityform_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_entity_boxes_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_entity_boxes_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_facetapi';
  $strongarm->value = 1;
  $export['features_admin_show_component_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_fe_block_boxes';
  $strongarm->value = 1;
  $export['features_admin_show_component_fe_block_boxes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_fe_block_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_fe_block_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_fe_nodequeue';
  $strongarm->value = 1;
  $export['features_admin_show_component_fe_nodequeue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_base';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_instance';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_display';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_type';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_filter';
  $strongarm->value = 1;
  $export['features_admin_show_component_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_flexslider_optionset';
  $strongarm->value = 1;
  $export['features_admin_show_component_flexslider_optionset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_image';
  $strongarm->value = 1;
  $export['features_admin_show_component_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_mailchimp_list';
  $strongarm->value = 1;
  $export['features_admin_show_component_mailchimp_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_custom';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_metatag';
  $strongarm->value = 1;
  $export['features_admin_show_component_metatag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_quicktabs';
  $strongarm->value = 1;
  $export['features_admin_show_component_quicktabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_rules_config';
  $strongarm->value = 1;
  $export['features_admin_show_component_rules_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_salesforce_mapping';
  $strongarm->value = 1;
  $export['features_admin_show_component_salesforce_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_index';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_server';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_taxonomy';
  $strongarm->value = 1;
  $export['features_admin_show_component_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_permission';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_role';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_term';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_variable';
  $strongarm->value = 1;
  $export['features_admin_show_component_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_views_view';
  $strongarm->value = 1;
  $export['features_admin_show_component_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_weight';
  $strongarm->value = 1;
  $export['features_admin_show_component_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_wysiwyg';
  $strongarm->value = 1;
  $export['features_admin_show_component_wysiwyg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'level' => array(
      'uuid_term' => '97fa45133d271d6fcad049ca09d34947',
      'taxonomy' => 'f510d33c31586dca06e810a225e24e3e',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'library_item_media_type' => array(
      'uuid_term' => '29330f9f731720ac2385f941fde5c257',
      'taxonomy' => '192d4ed1f96836a4dc3861ce65b5d84d',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'audience_reading_group' => array(
      'uuid_term' => '84cfc59377a7c1640bfaf0bafb896c34',
      'taxonomy' => 'a720e794ee1459ab881f873deace01dc',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'austrian_school' => array(
      'uuid_term' => '36c1ac8c8ed9ca8ecb44e4f56f5bee8b',
      'taxonomy' => '3940a5760639087ae13dea87f10a475b',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'topics' => array(
      'uuid_term' => '1fdd9ea096ab05bf1e78e31bfefa08f2',
      'taxonomy' => '18cd080d4f1885a9aafe7368b169d44c',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'mises_static_page' => array(
      'dependencies' => '18b3901353df7e701957645bdbf612ac',
      'field_base' => '9122c01976858908c9073516b6dd7020',
      'field_instance' => 'd18573c9e9ca288c3a64fe9cf69621f0',
      'field_group' => 'a44f6e6fb215f1bc576c93ccd5d3b06b',
      'node' => '9dfee635884446acac3cabad8dc80dca',
      'variable' => 'dde578969e6ec5cc40f87e20a59b9edb',
    ),
    'profile_type' => array(
      'uuid_term' => '06e744e513e1cdb3c4337b9c7f919f3a',
      'taxonomy' => '62a455ebbb8cc1825c2f61cd6a6f64f0',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'scheduler_settings' => array(
      'variable' => 'd58c44227a539bcfa8d3141624c104b6',
      'dependencies' => '4868375e77b7e9655589defd79e7ea22',
    ),
    'mises_theme' => array(
      'dependencies' => 'fc3326f2a9c165881b310339f7064e45',
      'image' => '4f70c64da9633d70273e0425dc4678ef',
      'fe_block_settings' => '125a4bc1134077be9582015bca3a3c30',
      'variable' => 'a6eeee71b48b11647d63ebdfac26fb28',
      'file_display' => 'c446a371c878f52322622e6077d2519c',
      'flexslider_optionset' => '29aed62a28e8415b01c4083e3edfe9a5',
      'conditional_fields' => '3c16f3b7f9d74cd9ac4ffc1ded7eb8d8',
    ),
    'footer_about_menu' => array(
      'menu_custom' => '521812a833761260832533aeadb93108',
      'menu_links' => '9c3338101a304403dca7dc8b731eae29',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'footer_browser_library' => array(
      'menu_custom' => 'f52f78ece10996c6f9872781987181f7',
      'menu_links' => '250f9bcb7b5e8ef3ad1f207d8f8fe2f7',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'main_menu' => array(
      'menu_custom' => '2042931cc12c0466aab8fc8a74f2d400',
      'menu_links' => '55bee687800f37aaee5a1b64bef5701a',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'menu_footer_austrian_school' => array(
      'menu_custom' => 'a5f9d0ac89b346e6d01757f629831b56',
      'menu_links' => '43251f01a14673b33d4fc10ac5a01b98',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'menu_footer_topics' => array(
      'menu_custom' => '2782c7ab095bcb3b7e8c66dca665f599',
      'menu_links' => '391fb3e762534137ec25c208c7ff409f',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'entity_box_box_with_image' => array(
      'field_base' => 'b7122ef43bf4a4618ac171a3def6f4ac',
      'field_instance' => '27cd759966aa09e1b679b65c643cc276',
      'user_permission' => '134baa17b257088f4eeb47f1d04138a0',
      'dependencies' => '58d2964b44b9d16858e6810c7a013520',
      'ds_field_settings' => '1d52b7ab0deb5afc0584b22adb3b53dd',
      'ds_fields' => 'b522b94fc4cfeddb39d158c99a812ea2',
      'ds_layout_settings' => '8495bbc5f53ac40b87deeb258ef707af',
      'entity_boxes_type' => '9eedbf2fdcd0d9c70307c35423c2a0db',
    ),
    'footer_right' => array(
      'fe_block_boxes' => FALSE,
      'fe_block_settings' => 'f1c5edbc12f77911d53b369219f4aa75',
      'dependencies' => '2f2a5edf64b29c8a2a26c7e3bbf660e9',
      'box' => 'e571ad45463a103d7445c441905e6bb5',
      'uuid_node' => '2261709e8e558c3282a67f9a68fa289b',
    ),
    'navbar_support_mises' => array(
      'fe_block_boxes' => FALSE,
      'fe_block_settings' => '131f64050914935f5551ac87e0d5b69d',
      'dependencies' => '2dfa96ee40019195961d7d2dc66b7a7a',
      'box' => 'fe334d89b0d2abcebe3499261b930fe5',
      'uuid_node' => 'd21d34abb279618b3d390ad4d2f440cc',
    ),
    'top_bar_ads' => array(
      'fe_block_boxes' => FALSE,
      'fe_block_settings' => 'b41b85c8a8b1b45600e82d012cafe937',
      'dependencies' => '5e81a18d7e5746ad36c5959464b88b0d',
      'box' => 'd9a8dfef60664e12c6d45d06f374d337',
      'uuid_node' => '5f9f1cddef2fbe4cf69cc57c01c6c166',
      'variable' => '9ea63d3315a7ba883eaada51106fc168',
    ),
    'sitewide_context' => array(
      'dependencies' => '4f1caf4e085a787692042d61e177ffc7',
      'context' => '6e35a0c7abad1475c559a181835a8303',
    ),
    'mises_institute_fellowship' => array(
      'variable' => '7a9594e4db77d0d065f7b8f0f83ca7ab',
      'field_base' => 'a55bc9e9fc5febc92a8843136fb5c105',
      'field_instance' => 'f48bee81b4a1e2484ee87f4beef8a772',
      'dependencies' => '8e7957bc35d7583be794565ebf6acbed',
      'node' => '805ce18a6c06e747c5b9ada0cd6bf555',
      'field_group' => 'bbb8f635daf77f3a3139d0739d805feb',
    ),
    'mises_person_profile' => array(
      'variable' => 'ee6b1e6d515053e5fa425aca29d5b391',
      'field_base' => '0bd64ddd592be2a4b91723299cd6d57e',
      'field_instance' => '8b2ecea3d81058c9c34872498b3f3b99',
      'dependencies' => '190381e40415e8b811228c85d126029b',
      'field_group' => 'df6d97ee5cd75b7e3c9580e98262b1dd',
      'field_validation_rule' => 'f62fb2d5df58469ed5ec5ed92ca84285',
      'node' => '63ba6b3364cbba422d31173c49b39b8c',
    ),
    'mises_library_item' => array(
      'variable' => 'f09c9f4763711d630b3b762aa1c16721',
      'field_base' => 'ea1abb859ec429e2a63dbc9c506767dd',
      'field_instance' => '4f7c673d46f5ae0e2530181a57f3df71',
      'dependencies' => '15afdc69e976cc29831b856f9b509e99',
      'field_group' => 'cec15f8d52c3e4e70b66117d10467cca',
      'node' => 'd0e4bc180ae114fe079a5dd35b1a8fc4',
      'views_view' => '603d88f9aa32dcceb7982ef97795b03e',
    ),
    'homepage_hero' => array(
      'variable' => '1edad3e55eabc3efe54c15d9279121a2',
      'field_instance' => '5fc1dcdf9148506b3e116b726dbeabf7',
      'dependencies' => '021a8f534d1e6c31420f6a85994568da',
      'image' => 'e122b18e81901c4ad3a2c90e489e6f16',
      'node' => 'b74f00fc68bf695fa30f68cb9f254524',
      'field_group' => '68172e19a9bf7e4ed45f12b56c219154',
      'field_base' => 'e746d5936011b6e30108c19172665348',
    ),
    'homepage' => array(
      'dependencies' => '56e9881707b34c11088461c33de02b0c',
      'box' => '9bad358d64ec815e4ea72fb3cee467c9',
      'context' => '17cdba839e34e02e1dbf696b9ad602a5',
      'views_view' => 'bbd0fed4924451b4f838cf19e0a03a9d',
      'uuid_node' => 'cca0a9271a56ae6efe516fd0a63e2aa8',
    ),
    'home_new_to_mises' => array(
      'menu_custom' => '3c939cb4a99ba68999eeb04207687a1b',
      'menu_links' => 'fbfddb1c264f75c2df601a984402f1ad',
      'dependencies' => 'f757d2fb6f4f70cc1cde6d5ae03f4220',
    ),
    'mises_award_ct' => array(
      'variable' => '3345ccc06f4ebdd68d58ce98125e4bdc',
      'field_base' => '276bc06964cb356d10f9b5da6128ef98',
      'field_instance' => '54f58baa212a965fef4bc4b4d3aa54d8',
      'dependencies' => 'dc98f94cf0f52135c0f1a8b99df747cc',
      'node' => '9df47833b237850d02772a18ca05273c',
      'field_group' => 'd540663e082a78104a287adf0c174f58',
    ),
    'mises_award_taxonomy' => array(
      'uuid_term' => 'a90e01fe5a04f685d2ffd5600d564cf3',
      'taxonomy' => '4a0048aa45cb8e81c724b55f64b661e9',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'mises_causeview_snippet' => array(
      'variable' => '14a90ab5b14bb2e87890ee10305cb362',
      'field_base' => '5fa7d188b55f3f5f3a9e4515a2ccad1d',
      'field_instance' => 'e3bfbdc8f8e00516992ad9ea9a44bf15',
      'dependencies' => 'd4285a187c33927b8ef93d4cff6a20b2',
      'node' => 'd992c1994407cb57ac6bd480f5ee4583',
      'field_group' => 'f781afbf368316b46f460bca5614f980',
    ),
    'mises_event_taxonomy' => array(
      'uuid_term' => '599add994a9cb3eebde01b2cb6722932',
      'taxonomy' => 'e63f15baf6e601c5f8edd6ed9b9d2483',
      'dependencies' => 'e4189acd0d448085096fef72e8df3a58',
    ),
    'mises_events' => array(
      'variable' => 'e022ce15991a1bb82f6aed0751d138d2',
      'field_base' => 'f1b53411ff578db1d9cfc99e8605160c',
      'field_instance' => 'eac3256b68ffc451a8da18aad7e229cd',
      'dependencies' => '60598f65b94f76349cd6c19b7819c9cc',
      'node' => '17d46796c5e3e76513cc26ee64e118da',
      'field_group' => 'ea93c6cafc723ad319f208c69024ea8b',
      'context' => '3a93345ee275bed35495165be25fd3b0',
      'views_view' => '96d6bcbc84760a4fd5049080031f6429',
      'conditional_fields' => 'b12cb4be3502ccd5d6e15364b1f07667',
      'menu_custom' => '902b287f0d587305bd3464340d43c68e',
      'menu_links' => '68c7cf1ea6f7f47e9ba76f8c16f3ad6f',
    ),
    'mises_photo_gallery' => array(
      'variable' => 'f22524a8eb62f49821cafa05987a4bfa',
      'field_base' => 'f80829b6929deacea9098b7d583213bb',
      'field_instance' => 'b66a455846fa3c7fecef658f9fca855a',
      'dependencies' => 'f0638f7bc8c07cddb171bd922226810a',
      'node' => '3279b011dc153dd4c250ec740fcf3654',
      'field_group' => '31b13b41c53b712a5bd3e091cc003e1f',
    ),
    'mises_job_posting' => array(
      'variable' => '77ffe97e5e72fd993d36f36d01a68403',
      'field_base' => '256d923c7eaabdb523e3087453b0b911',
      'field_instance' => '1582a72cba771cac0bdc7bd41d87ae3e',
      'dependencies' => '75706c9ade3b5be527ba4941058b9989',
      'node' => '9c9c57b1f9969d2188fe53d371053be1',
      'field_group' => '33ae5fb3d9d570455c5675bc29578e28',
      'ds_field_settings' => '86c55117cee806dddeb863c362fc2035',
      'ds_layout_settings' => '9bee90806fbe2e8762dcc42cb18d8e5c',
    ),
    'mises_article' => array(
      'variable' => FALSE,
      'field_base' => '26082cf563c9f4f46e027e44749691c1',
      'field_instance' => FALSE,
      'taxonomy' => FALSE,
      'dependencies' => 'bca03bbfc89cf547423db55c093f17f9',
      'field_group' => '2dc35bbcaaebd3272ea5cb8f62ea0f1f',
      'node' => '0ff501cb6696366d75a8de30e797fc21',
    ),
    'mises_blog' => array(
      'variable' => '9d515db7d36e64134eec917a75d54ca4',
      'field_base' => 'e8a4921a87d0936bd7378ea82725c2e6',
      'field_instance' => 'fc634d305a4d079f40ce4ead98be4bf2',
      'dependencies' => '6625af1603c59972488f13ed4ec71dfb',
      'field_group' => '438f4b76d088c808663d7a9f8a29f77b',
      'node' => '7cb250055e202de362d9c14e55406c69',
    ),
    'mises_course' => array(
      'variable' => 'bc8ccbe64b5a40d32e86f1876f82f821',
      'field_instance' => '7616cdf99cc2ce437a5aa0312523df6b',
      'dependencies' => 'fd0eca8da18cfcbfa8f058c594fb0a81',
      'field_group' => '06a9db4aa8cce218873f2bb5cbe70bd2',
      'node' => '06d880ccc2fb6659333cd1821731374c',
    ),
    'mises_product' => array(
      'variable' => '3dc4ca0578f8e516fef3825efa4b46e6',
      'field_instance' => '38c2dd418886682d5032ebef2a556925',
      'dependencies' => '7adeddf6784ea521a7783ba2f9363d5c',
      'field_group' => '72501be2a74773fccd934f86b441d1ef',
      'node' => '911ce45184640ea5cb013ba5cab14898',
    ),
    'display_suite_shared' => array(
      'ds_field_settings' => 'b9443cf53b889026d067d81135678bdf',
      'ds_fields' => '41b4988e172568150bcaff3b4cf864a9',
      'ds_layout_settings' => '6ede6aab29daf7ada3deee8e6cce06c7',
      'ds_view_modes' => 'ced25b4944fee00d4ffb477d456f3f2b',
      'dependencies' => 'c4e0490967785467ec271837e1683a6b',
      'field_group' => '7d80cc449058f07097b16bedf5eecf73',
      'variable' => 'b91ae5807cd8dbc0c5b19fb5b5839242',
      'conditional_fields' => '3c16f3b7f9d74cd9ac4ffc1ded7eb8d8',
    ),
    'homepage_views' => array(
      'dependencies' => '83cf887d5106e8114013a451f1c34f4d',
      'views_view' => '0e5e29441365d018632002db5b4cb8c4',
      'ds_view_modes' => '4a14dd02db7a8611e50eb3488e838a0a',
      'ds_layout_settings' => '9f9c14df70ad21f40da02636831b6279',
    ),
    'mises_campaign' => array(
      'variable' => '1616d205a0f0a1f88a8ddddb950b4eac',
      'field_base' => 'aa90734df7743bc49c894f9211882ad8',
      'field_instance' => '0687de0cfd71a8d64d1bc02905a1473f',
      'dependencies' => 'bddbe40778dbb0a03d18498f005fb68c',
      'field_group' => 'ca46e2e9c9bc937c917c2b0e57933b70',
      'node' => '26d0244da80cf14b2f2d168662acb1f1',
    ),
    'mises_giving_story' => array(
      'variable' => 'ab177c494cc0a803f2baf9b2cd631faa',
      'field_base' => 'dce7f0d354bb0a9150fbf50f451f9a52',
      'field_instance' => '75155993a6c2aa5fe260677a2e46e3ec',
      'dependencies' => '6b2d819f19015d6385ac8f0e48f8a6bc',
      'field_group' => 'e823d138e005814760e2a32d51f36255',
      'node' => 'b4393125e22f679371eb97833ed72033',
    ),
    'mises_social_media_configuration' => array(
      'variable' => '3a13a50ab00f86c48f66cb194ce4f5bc',
      'dependencies' => '0d758ec42915f4aded196098c1258e5a',
    ),
    'header_context' => array(
      'dependencies' => 'a00f626e67699059fed3e2dbf3d75c35',
      'context' => '748d658e8988ffaaeb664a6138764a96',
    ),
    'mises_flex_block' => array(
      'field_base' => 'f7b9c7477107bcd57b05aa3b33eb01cd',
      'field_instance' => '22b625e0fd84546848708723509a0aae',
      'dependencies' => 'b7def3f1afad3dd7fe9109970b3827b9',
      'ds_field_settings' => 'e465734168c9d214672b5a51e40c9335',
      'ds_layout_settings' => '4b844d76540732ce9188ee14e5237c47',
      'field_group' => '68982ad7f8de35bfd3a5f2a08644fe57',
      'node' => 'c58f59606425b74b5d3f427a3f0ec206',
    ),
    'flex_block_views' => array(
      'dependencies' => '87968a535b6b3e7429a82b2c600441f9',
      'views_view' => '337bbc781e48b05e9e7fc152c16a7d6f',
    ),
    'mises_stay_connected' => array(
      'dependencies' => 'f60f07889113e78c6abc9b689cf0fe86',
      'menu_custom' => 'e1c6c2801f0909218d4775b290b0c9d4',
      'menu_links' => 'a54189fa75967c3a505d1d552f7d26e7',
    ),
    'mises_contact_us' => array(
      'field_base' => 'dfcd6a2e5cf68cfbf3f648429068916c',
      'field_instance' => 'de9eeb14a5be9df088fbee53c05bf0e0',
      'dependencies' => 'adbfe51cb06e0932e176b04979178139',
      'entityform_type' => '77fdec46363bb6dd9541706a826c7505',
      'taxonomy' => 'f1796bc5d286c5446ce82c4fe73e5bc9',
      'uuid_term' => '50c58142b12146393d1cfd91efce7aa2',
    ),
    'mises_wysiwyg' => array(
      'filter' => 'ee524326ea5f6807bdb4a349bc068b65',
      'wysiwyg' => '717efef6d464436e743e8017567b2d18',
      'dependencies' => 'c317658c8905b7a9253f47d99a416429',
      'user_permission' => '265dc247184a913bfbc24fff07a5f476',
    ),
    'mises_pathauto' => array(
      'dependencies' => 'fafb8f4e54f3cfd7874f67b00cea0499',
      'variable' => '64de6d9b5ba19d70223419b2b0ed0166',
    ),
    'landing_page_daily' => array(
      'uuid_node' => 'df76abe90121253d0b91ffbd33d5fe70',
      'dependencies' => '15145e2bc8de6fb8dac1b86109f2c1a2',
      'context' => '8345d6574b59e5ac0624068f44293fa7',
      'views_view' => '9a3074ca61f7abd03c6db15a0af7ffa1',
    ),
    'landing_page_library_item' => array(
      'uuid_node' => 'b991700babfff903a18a3cd59b33bb7b',
      'dependencies' => 'cbc1f2ce2ae836f8c3f55e3efb77a8cd',
      'context' => 'cbf405a2391ba6d549aea6ac5761434c',
    ),
    'term_landing_page' => array(
      'dependencies' => 'f4d3ba928a3100295c774832caedad59',
      'views_view' => 'da421b2051d9a625aafc56d16d739d98',
    ),
    'google_analytics_settings' => array(
      'variable' => '893941058b7f626b9d880983bd0de4b3',
      'dependencies' => '48fdbbbb825a9183e730eadf9878a8ac',
    ),
    'mises_social_commenting' => array(
      'user_permission' => '40cfb258c34841116777f489f67f8670',
      'dependencies' => '192a5bf90b4cfc9359f5bb288da89c8f',
      'variable' => 'c5b8f72b6b04a486f4f8b31c1d3ce500',
      'context' => 'be305825f0655b7bfaaf9ebc31ee391c',
    ),
    'mises_breadcrumbs' => array(
      'variable' => 'ec3cd18c642b9fd7d5485b5bc90f969f',
      'dependencies' => 'ae7b2a285da323769c1a1d7a40ea702f',
    ),
    'social_media_hub' => array(
      'dependencies' => '76eea91eddd0f0dfdf6431202c8ae16b',
      'field_base' => 'b6c7f13b7281aa34c17f92146e3e9968',
      'field_instance' => '812976a12da7c65cf447d9a3790a56cf',
      'variable' => '177c87e74fb902904ae891629e1bf83d',
      'weight' => '88db5be58e0e4b89c7e6837af6b50d99',
      'field_group' => '71e0703d787d20dec9f40635ab6aca83',
      'node' => 'c38c2ce77269f06380ccb2bebf9514be',
      'views_view' => 'b24b32d13c8bd32c557009cdc71c1205',
      'image' => 'f9c577217b7dad532a83d73086a14fad',
    ),
    'search_404' => array(
      'dependencies' => 'b34a160259bf1487bb1350f898c25f55',
      'variable' => '5d4cfcc2df3f09128fe0e8363ddbe447',
    ),
    'rss_feed' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => '2c4c407857a055cad05a213319c8b5b6',
    ),
    'mises_popular_content_configuration' => array(
      'fe_block_settings' => '69a655b467b2b23fb6681f61950f6e5b',
      'variable' => '6e8d3ef061a98d16e0b8f917332f39e9',
      'dependencies' => '425edbb482750082282f41a263dac364',
    ),
    'mises_seo_settings' => array(
      'variable' => 'd064d1db9647a379dc24de084f95303f',
      'dependencies' => '0e5a5d18d30dbe5c7af652f4dd2d9675',
    ),
    'mises_landing_page' => array(
      'variable' => '3aa88021807ac47c47106662d739751d',
      'field_base' => '2e7ed9728b6bfd25eb8b7a412b34bb2c',
      'field_instance' => '4f58f4e554d2f1beef78ba0fcd4dd67f',
      'dependencies' => '6918f770974dfac86961cde84842a3fa',
      'field_group' => 'b66d8f39bfb8788d880cf0a395beae6d',
      'node' => 'fed150e51d33a9a18bfeadbcd81b1ce5',
      'context' => 'db41f1fbef1bed036206d7e79690bbd7',
    ),
    'related_blocks_node' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => '8cdab899a7b0445f469b7975a29bfa95',
    ),
    'library_item_node_context' => array(
      'dependencies' => '4e2e08b43bba2581efe937c7987793ba',
      'context' => '8cda6041e1eea3fd625e3bf7a86b97ec',
    ),
    'mises_popular_content_block' => array(
      'dependencies' => 'f6189d2520c6d15e365c8073d39389cf',
    ),
    'mises_library_landing' => array(
      'uuid_node' => 'a950b1fffb7b69d1811b833f1aa13ab5',
      'dependencies' => '3d7c34b2e7b59495b81ad8662584bb33',
      'context' => '3cf5b3914f8c6bcb82d31879bbf1b1d3',
      'views_view' => '635bcefb4d4a7ba82af1d0fa6fa6dd9b',
      'menu_custom' => 'aba97b813c1bef649eef16e921f12e7e',
      'menu_links' => '4e7d66c584e8427dd30ccdcff55baf4b',
      'fe_block_settings' => '6bc1318837b78c3e4ab328a854034242',
    ),
    'social_media_context' => array(
      'dependencies' => '8378991436ebd9eedb5d0e18ec927fcf',
      'context' => '92264be6199471eb0deeeced85f9fef5',
    ),
    'mises_redirect_import' => array(
      'dependencies' => 'b3bf5eead488fe33d7f305e3139e3144',
    ),
    'austrian_economics_landing_page' => array(
      'fe_nodequeue' => 'f9d426e389016ff0f615db74733be310',
      'dependencies' => 'ccf4e88682dcc7032ae2f6c314717e7f',
      'fe_block_settings' => '3140c56a16906efa8531652da009eb76',
      'menu_custom' => '80e2d679ec94987553bb6b91aaad2144',
      'menu_links' => 'b458b30ad439f05d30faf689d27920bf',
      'uuid_node' => 'a23892a8665ed5d3bd9559eeaac81dd8',
      'context' => 'fc22f0466474995b14a4e38cdc92d190',
      'views_view' => 'faab71d8af40dece152471d5b10b047b',
    ),
    'mises_economist_landing_page_resources' => array(
      'fe_nodequeue' => 'fb299a0b93877ef9d298a4d879fb37a0',
      'dependencies' => 'c37a17bdfa76eda0360d93dcdaa8df5a',
    ),
    'mises_generic_landing_page' => array(
      'fe_nodequeue' => 'de496a43c5359d5a8f90a36b84f05d12',
      'dependencies' => 'c37a17bdfa76eda0360d93dcdaa8df5a',
    ),
    'homeschool_resources_landing_page' => array(
      'dependencies' => 'e793c1ba82991ad7bffa8e6c68f4ec7b',
      'fe_nodequeue' => '9c3d4e508c71d79d7fc35faafa386925',
      'fe_block_settings' => '155d628b1dbd75bff066e7ae0dfb5680',
      'menu_custom' => '04d36c864376acd0a3ecbe0062116922',
      'menu_links' => '7acb326a8997fc7b951ec2fc800981b8',
      'context' => '6fb52d2280d59fc07a765ebf030482ad',
      'uuid_node' => 'febda80a3440e4812d70bac03a026678',
    ),
    'mises_social_widgets' => array(
      'variable' => 'de9ae0a4c36a631095dbc3feeb54bc13',
      'field_base' => '73a14ee8e2c7b83ae1b3e54c4c63bbe1',
      'dependencies' => 'b157ab84f3cbb64f72bf81d64dae7e48',
      'ds_fields' => '48d6eecb8a9049d9ddfe9be3f0de2558',
    ),
    'mises_mailchimp_configuration' => array(
      'variable' => 'a87004453d9ddae1458c81aff20e59dd',
      'dependencies' => '1a270e700c94c57ea1a801e88552f9e9',
    ),
    'mises_scholarship' => array(
      'variable' => 'a25c8fe0488786dd57db54265c3f22f7',
      'field_base' => 'a9f10ca3b107151f2fdb03c545d22384',
      'field_instance' => '98868580ad3baa258d5be75207ba4d2e',
      'dependencies' => '4ba75ce2a64d62c4906eb3b922a7f630',
      'field_group' => 'ab625f4281e2af5680a54c55de862d84',
      'node' => '6c618c4ada2fe2b035d66e215c595ee3',
    ),
    'mises_working_papers' => array(
      'variable' => '408b7602d2515d3b11ebfa161c7ce35d',
      'field_base' => '3808e4bfd32353a6badd9d0c2b066ab0',
      'field_instance' => '1ec1652971ff2533e3aa37ba0152db8b',
      'dependencies' => 'a11441c198fca6eaf094a142a69509e2',
      'field_group' => '97be017a83c3a6eb00ec1aaf2e9c72dd',
      'node' => 'f45a0b7796a78c0e85882860f298e56e',
    ),
    'legacy_book' => array(
      'variable' => '1b1a7a5ec4ceb77ab9432c217b435045',
      'field_base' => '5ff429f50101f415d0014898db25644c',
      'field_instance' => '5818914a38e61505b8b681b7a176d7d4',
      'dependencies' => '2f43417b84197bf7eb5b56fb963ec04d',
      'field_group' => 'ec87b5d831a67d56484dbe65b2c4fc79',
      'node' => '3d1deaf5fc249e590fd93ba08176ef19',
    ),
    'mises_document' => array(
      'variable' => 'd78cce4020a672bf7955df9e97455a67',
      'field_base' => '8b14dfe6a8726e84b1ac4ce76c07ffc4',
      'field_instance' => '6f91095840a765ecddc25906321f57f9',
      'dependencies' => 'c3a7a58a45f6360dfb35cacfc15750ea',
      'field_group' => '5f1495f0d7bc36cfa61af7a44dc04a75',
      'node' => 'ed3e70fad04a928cf291ef6f0ba08f35',
    ),
    'mises_roles_and_perms' => array(
      'user_role' => 'c831e418e07d69e69b2ffc19a1c62334',
      'user_permission' => '1da5e787125b0d33b052181a7f04e3e7',
      'dependencies' => 'be6d5a05076adbdecaeda0a7161b864b',
      'variable' => '15a39076842c301225db189e92dd14ad',
    ),
    'mises_book_digital_text' => array(
      'variable' => '0ce298c4663e33023465f6aac40db1d5',
      'field_base' => '65b5aa8a1b13121c3f2cbf200e866655',
      'field_instance' => '6118ce4a09c2c5275c364e5227da8a98',
      'dependencies' => 'eab544f1dbf582a98996a7c20f1bf22d',
      'field_group' => 'bbf4500e539ccda5a1466dea5975e35c',
      'node' => '2363d7f3918ffc5c2c469028982c4712',
    ),
    'mises_management_menu' => array(
      'menu_custom' => '5c98c8cc588b7d76c728553f4e4b8409',
      'menu_links' => '2d4893f9edf0c9953fe00905638bcb53',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'events_menu' => array(
      'menu_custom' => '902b287f0d587305bd3464340d43c68e',
      'menu_links' => 'aa9484b6b780a1f0b381c7e3ef0c8e76',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
    ),
    'mises_autopublish_content' => array(
      'dependencies' => '8e42f35417493378c67a040e36af35b1',
      'rules_config' => 'bd66164603fb74461cb968ffe9ca8d4d',
    ),
    'mises_migrate' => array(
      'dependencies' => '55d71a8eadceaa25e9013c4b3430ac97',
    ),
    'mises_press_room' => array(
      'uuid_node' => '5fb6b50901b449fc9d5c5ac5cc375864',
      'dependencies' => '2f1ec12390bdec3c4a9329d0c8256cf0',
      'context' => 'd970dd488989575b0f5d399b112adab3',
      'fe_block_settings' => 'a8cfc625fe6dd4200691f83000614bd5',
      'menu_custom' => 'ff08f2cd9ec63dc3ed969ab970442f1c',
      'menu_links' => '5075a58d7cda96d4496faf6e33c933f4',
    ),
    'featured_latest_view_blocks' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'd7ea1b05dc5eb29e4fcad7e7715c4276',
    ),
    'mises_person_profile_views' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'ab3ac5f70c8a6d7c83ca77aaa7008a0b',
    ),
    'mises_person_profile_node_context' => array(
      'fe_block_settings' => '54b8cc9a14cfe698c9208aa62d05df75',
      'dependencies' => '00c3b33f5f8266ece437c18f560e5a8b',
      'context' => 'd7c0e4cded3cc3b5a458fa5008e9a1ad',
      'quicktabs' => 'bb745839739bcdceda773674776b79cc',
    ),
    'menu_footer_blocks' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'fb703ee361f1a528060ea62a62806b38',
    ),
    'resources_for_economist' => array(
      'fe_block_settings' => '74f74b09525dddc3279d32c08b4a904d',
      'uuid_node' => '22cd786facf532d6a0e75f63216cb504',
      'menu_custom' => '69382f004fd726296ed21d8c9b161520',
      'menu_links' => '0e0c435b30b937aa6bf5607962af7cf7',
      'dependencies' => 'b2cc8e7acf0df26dcd6a3f378203ae3c',
      'context' => '0f9e9395c3169418e5495acde922d41d',
    ),
    'landing_page_views' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'dd90f9be9a5aaa87091b23f443543941',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules/features';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 1;
  $export['features_rebuild_on_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_image_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'list_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'single_image' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_author' => array(
        'custom_settings' => TRUE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => TRUE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_image_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_media_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'slideshow' => array(
        'custom_settings' => FALSE,
      ),
      'block_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'list_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_author' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'simple_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'single_image' => array(
        'custom_settings' => FALSE,
      ),
      'small_player' => array(
        'custom_settings' => TRUE,
      ),
      'wide_player' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_media_collection'] = $strongarm;

  return $export;
}
