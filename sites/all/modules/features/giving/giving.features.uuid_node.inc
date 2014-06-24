<?php
/**
 * @file
 * giving.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function giving_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 32,
  'title' => 'Giving Featured Video',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '080e0b5f-3258-49be-8d8e-a59dd247413b',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1402601877,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '35358035-f15b-460b-9259-da90b5b5f7ae',
  'revision_uid' => 32,
  'field_display_title' => array(),
  'field_image' => array(),
  'field_image_link' => array(),
  'field_region' => array(
    'und' => array(
      0 => array(
        'value' => 'right',
      ),
    ),
  ),
  'field_section' => array(
    'und' => array(
      0 => array(
        'value' => 'giving_member',
      ),
    ),
  ),
  'field_teaser_text' => array(),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_media_collection' => array(
    'und' => array(
      0 => array(
        'value' => 24,
        'revision_id' => 24,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'Aaron',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'date' => '2014-06-12 12:37:57 -0700',
);
  $nodes[] = array(
  'uid' => 32,
  'title' => 'Giving Front Video',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '33126a9a-dc8f-4d9c-8d73-f1c2f34ebf52',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1402601610,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c8e35b9-995c-44d2-9d83-0bb8c1dae561',
  'revision_uid' => 32,
  'field_display_title' => array(),
  'field_image' => array(),
  'field_image_link' => array(),
  'field_region' => array(
    'und' => array(
      0 => array(
        'value' => 'right',
      ),
    ),
  ),
  'field_section' => array(
    'und' => array(
      0 => array(
        'value' => 'giving_home',
      ),
    ),
  ),
  'field_teaser_text' => array(),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_media_collection' => array(
    'und' => array(
      0 => array(
        'value' => 23,
        'revision_id' => 23,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'Aaron',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'date' => '2014-06-12 12:33:30 -0700',
);
  return $nodes;
}
