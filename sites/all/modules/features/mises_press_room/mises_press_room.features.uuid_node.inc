<?php
/**
 * @file
 * mises_press_room.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function mises_press_room_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Press Room',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ba5ddf8f-68d8-436a-8a17-79c29235a2e3',
  'ds_switch' => '',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1402407680,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6077055b-d224-4526-ad0d-ad54706a565b',
  'revision_uid' => 18,
  'field_banner_image' => array(),
  'field_image' => array(),
  'field_page_subtitle' => array(),
  'field_read_more_link' => array(),
  'field_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The&nbsp;Mises&nbsp;Institute is the world&rsquo;s leading center of research, teaching, and outreach in the tradition of the Austrian school of economics.&nbsp; The Austrian school offers a unique perspective on economic theory and policy emphasizing free markets, entrepreneurship, private property, and sound money.</p><p>Our experts provide analysis and commentary on the US and global economies, controversies in economic theory and policy, and other issues related to economic and political freedom. Use the links here to review our essays, commentaries, and interviews, or to schedule an interview with one of our experts.</p>',
        'format' => 'simplified',
        'safe_value' => '<p>The&nbsp;Mises&nbsp;Institute is the world&rsquo;s leading center of research, teaching, and outreach in the tradition of the Austrian school of economics.&nbsp; The Austrian school offers a unique perspective on economic theory and policy emphasizing free markets, entrepreneurship, private property, and sound money.</p><p>Our experts provide analysis and commentary on the US and global economies, controversies in economic theory and policy, and other issues related to economic and political freedom. Use the links here to review our essays, commentaries, and interviews, or to schedule an interview with one of our experts.</p>',
      ),
    ),
  ),
  'field_teaser_header' => array(),
  'field_teaser_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Find an Expert in Austrian Economics',
        'format' => NULL,
        'safe_value' => 'Find an Expert in Austrian Economics',
      ),
    ),
  ),
  'field_resource_group' => array(),
  'field_featured_nodes' => array(
    'und' => array(
      0 => array(
        'target_id' => 710,
      ),
      1 => array(
        'target_id' => 705,
      ),
      2 => array(
        'target_id' => 722,
      ),
    ),
  ),
  'field_featured_videos' => array(
    'und' => array(
      0 => array(
        'target_id' => 757,
      ),
      1 => array(
        'target_id' => 725,
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
  'date' => '2014-06-10 08:41:20 -0500',
);
  return $nodes;
}
