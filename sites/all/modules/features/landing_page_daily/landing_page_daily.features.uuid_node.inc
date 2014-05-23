<?php
/**
 * @file
 * landing_page_daily.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function landing_page_daily_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Mises Daily description for sidebar',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '35d8f181-8564-4eb0-9cd4-61ab53c79f38',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1399584967,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c5ae0d2-5547-48d1-b23a-6b739fa874c2',
  'revision_uid' => 18,
  'field_display_title' => array(
    'und' => array(
      0 => array(
        'value' => 'What Is the Mises Daily',
        'format' => NULL,
        'safe_value' => 'What Is the Mises Daily',
      ),
    ),
  ),
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
        'value' => 'daily',
      ),
    ),
  ),
  'field_teaser_text' => array(
    'und' => array(
      0 => array(
        'value' => 'Mises Daily presents new featured short articles from the Mises Institute. Written for a broad audience of laymen and students who are not necessarily economists or scholars, Mises Daily features a wide variety of topics including everything from the history of the state, to international trade, to drug prohibition, and business cycles. Updated six times per week. 

For information on submitting articles for publication click here.',
        'format' => 'full_html',
        'safe_value' => '<p>Mises Daily presents new featured short articles from the Mises Institute. Written for a broad audience of laymen and students who are not necessarily economists or scholars, Mises Daily features a wide variety of topics including everything from the history of the state, to international trade, to drug prohibition, and business cycles. Updated six times per week. </p>
<p>For information on submitting articles for publication click here.</p>
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
  'date' => '2014-05-08 14:36:07 -0700',
);
  return $nodes;
}
