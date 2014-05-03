<?php
/**
 * @file
 * homepage.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function homepage_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Summer Ad',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c919e629-0aaf-4237-bdfb-1d32973f8b59',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1399066129,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a0982713-1d86-4b6b-a8fa-7eb5e90defa2',
  'revision_uid' => 18,
  'field_teaser_text' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 18,
        'filename' => 'Summer',
        'uri' => 'public://summer-ad.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 10802,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'f3dd3efe-9ef5-4dcb-9e2f-7904143ea2a5',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 154,
          'width' => 325,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 325,
        'height' => 154,
        'uuid_features_file_data' => '/9j/4QAYRXhpZgAASUkqAAgAAAAAAAAAAAAAAP/sABFEdWNreQABAAQAAAAeAAD/4QN8aHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLwA8P3hwYWNrZXQgYmVnaW49Iu+7vyIgaWQ9Ilc1TTBNcENlaGlIenJlU3pOVGN6a2M5ZCI/PiA8eDp4bXBtZXRhIHhtbG5zOng9ImFkb2JlOm5zOm1ldGEvIiB4OnhtcHRrPSJBZG9iZSBYTVAgQ29yZSA1LjUtYzAyMSA3OS4xNTQ5MTEsIDIwMTMvMTAvMjktMTE6NDc6MTYgICAgICAgICI+IDxyZGY6UkRGIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyI+IDxyZGY6RGVzY3JpcHRpb24gcmRmOmFib3V0PSIiIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6ZDdiYzQzNWUtYmNiNS00ZGJiLWJmMmItZDcxYTBkMWRmMTBkIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjI0MzY5NjNDQ0EzODExRTNBNENDQzM3NUNCNTc1OEU3IiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjI0MzY5NjNCQ0EzODExRTNBNENDQzM3NUNCNTc1OEU3IiB4bXA6Q3JlYXRvclRvb2w9IkFkb2JlIFBob3Rvc2hvcCBDQyAoTWFjaW50b3NoKSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOmQ3YmM0MzVlLWJjYjUtNGRiYi1iZjJiLWQ3MWEwZDFkZjEwZCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpkN2JjNDM1ZS1iY2I1LTRkYmItYmYyYi1kNzFhMGQxZGYxMGQiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwv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',
      ),
    ),
  ),
  'field_image_link' => array(
    'und' => array(
      0 => array(
        'url' => '<front>',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
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
    'nid' => 738,
    'enabled' => 1,
    'machine_name' => 738,
    'block_title' => 'Summer Ad',
    'view_mode' => 'teaser',
    'node_link' => 0,
    'comment_link' => 0,
    'translation_fallback' => 0,
  ),
  'name' => 'aeasterling',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'date' => '2014-05-02 14:28:49 -0700',
);
  return $nodes;
}
