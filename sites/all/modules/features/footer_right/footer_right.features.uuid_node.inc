<?php
/**
 * @file
 * footer_right.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function footer_right_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5b56272c-3812-43ea-a90e-340dc8b8e9fc',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1399086569,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2ee2df79-7df4-4948-9d74-2165b9cc52e7',
  'revision_uid' => 18,
  'field_teaser_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p class="logo">Mises Institute</p>
<p>518 West Magnolia Avenue<br />
Auburn, Alabama 36832-4501</p>
<p>PHONE 334.321.2100  |  FAX 334.321.2119</p>
<p>contact@mises.org</p>',
        'format' => 'full_html',
        'safe_value' => '<p class="logo">Mises Institute</p>
<p>518 West Magnolia Avenue<br />
Auburn, Alabama 36832-4501</p>
<p>PHONE 334.321.2100  |  FAX 334.321.2119</p>
<p><a href="mailto:contact@mises.org">contact@mises.org</a></p>
',
      ),
    ),
  ),
  'field_image' => array(),
  'field_image_link' => array(),
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
  'nodeblock' => array(
    'nid' => 743,
    'enabled' => 1,
    'machine_name' => 743,
    'block_title' => 'Contact Us',
    'view_mode' => 'teaser',
    'node_link' => 0,
    'comment_link' => 0,
    'translation_fallback' => 0,
  ),
  'name' => 'aeasterling',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'date' => '2014-05-02 20:09:29 -0700',
);
  $nodes[] = array(
  'uid' => 18,
  'title' => '501(c)3 tagline',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '72c5b6c7-caee-43c8-b76a-0429c717f73d',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1399083550,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6fcd0b6e-cbce-4557-926a-9350cf07b9b2',
  'revision_uid' => 18,
  'field_teaser_text' => array(
    'und' => array(
      0 => array(
        'value' => '<p class="text-center italic">Mises Institute is a tax-exempt 501(c)3 nonprofit organization. Contributions are tax-deductible to the full extent the law allows.</p>',
        'format' => 'full_html',
        'safe_value' => '<p class="text-center italic">Mises Institute is a tax-exempt 501(c)3 nonprofit organization. Contributions are tax-deductible to the full extent the law allows.</p>
',
      ),
    ),
  ),
  'field_image' => array(),
  'field_image_link' => array(),
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
  'nodeblock' => array(
    'nid' => 742,
    'enabled' => 1,
    'machine_name' => 742,
    'block_title' => '501(c)3 tagline',
    'view_mode' => 'teaser',
    'node_link' => 0,
    'comment_link' => 0,
    'translation_fallback' => 0,
  ),
  'name' => 'aeasterling',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'date' => '2014-05-02 19:19:10 -0700',
);
  return $nodes;
}
