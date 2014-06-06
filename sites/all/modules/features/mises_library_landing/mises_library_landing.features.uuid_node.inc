<?php
/**
 * @file
 * mises_library_landing.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function mises_library_landing_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Mises Library description for sidebar',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '63d143a5-43a3-4389-aa51-cc03e19e954c',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1401500928,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7b6ec892-e832-4495-98c4-b35aa1cfab21',
  'revision_uid' => 18,
  'field_display_title' => array(),
  'field_image' => array(),
  'field_image_link' => array(),
  'field_region' => array(
    'und' => array(
      0 => array(
        'value' => 'right_top',
      ),
    ),
  ),
  'field_section' => array(
    'und' => array(
      0 => array(
        'value' => 'library',
      ),
    ),
  ),
  'field_teaser_text' => array(
    'und' => array(
      0 => array(
        'value' => 'The Mises Library nisi hac habitasse porta dapibus magnis. Magnis vut nec penatibus dignissim, lectus. Ridiculus amet. Turpis tortor. ',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Mises Library nisi hac habitasse porta dapibus magnis. Magnis vut nec penatibus dignissim, lectus. Ridiculus amet. Turpis tortor.</p>
',
      ),
    ),
  ),
  'field_weight' => array(
    'und' => array(
      0 => array(
        'value' => 1,
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
  'name' => 'aeasterling',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'weight_weight' => FALSE,
  'date' => '2014-05-30 18:48:48 -0700',
);
  return $nodes;
}
