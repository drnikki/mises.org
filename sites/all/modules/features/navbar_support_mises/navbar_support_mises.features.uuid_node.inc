<?php
/**
 * @file
 * navbar_support_mises.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function navbar_support_mises_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Support Mises nav block',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '186ac3d0-2347-45ec-85ab-d38b522ab375',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1399082969,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '70561a81-2904-4182-ab26-20d01f1a17f7',
  'revision_uid' => 18,
  'field_teaser_text' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 18,
        'filename' => 'Support Mises',
        'uri' => 'public://support-mises_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 4280,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => '1fdefd75-1747-49be-8c98-0e57829d743c',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 57,
          'width' => 258,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 258,
        'height' => 57,
        'uuid_features_file_data' => '/9j/4QAYRXhpZgAASUkqAAgAAAAAAAAAAAAAAP/sABFEdWNreQABAAQAAAA8AAD/4QMsaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLwA8P3hwYWNrZXQgYmVnaW49Iu+7vyIgaWQ9Ilc1TTBNcENlaGlIenJlU3pOVGN6a2M5ZCI/PiA8eDp4bXBtZXRhIHhtbG5zOng9ImFkb2JlOm5zOm1ldGEvIiB4OnhtcHRrPSJBZG9iZSBYTVAgQ29yZSA1LjUtYzAxNCA3OS4xNTE0ODEsIDIwMTMvMDMvMTMtMTI6MDk6MTUgICAgICAgICI+IDxyZGY6UkRGIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyI+IDxyZGY6RGVzY3JpcHRpb24gcmRmOmFib3V0PSIiIHhtbG5zOnhtcD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLyIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bXA6Q3JlYXRvclRvb2w9IkFkb2JlIFBob3Rvc2hvcCBDQyAoTWFjaW50b3NoKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoxMUYwODhGOUJEOTUxMUUzQTVCQUI4MTVGQUU4MUYwNCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDoxMUYwODhGQUJEOTUxMUUzQTVCQUI4MTVGQUU4MUYwNCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjExRjA4OEY3QkQ5NTExRTNBNUJBQjgxNUZBRTgxRjA0IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjExRjA4OEY4QkQ5NTExRTNBNUJBQjgxNUZBRTgxRjA0Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+/+4ADkFkb2JlAGTAAAAAAf/bAIQABgQEBAUEBgUFBgkGBQYJCwgG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',
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
    'nid' => 741,
    'enabled' => 1,
    'machine_name' => 741,
    'block_title' => 'Support Mises nav block',
    'view_mode' => 'teaser',
    'node_link' => 0,
    'comment_link' => 0,
    'translation_fallback' => 0,
  ),
  'name' => 'aeasterling',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'date' => '2014-05-02 19:09:29 -0700',
);
  return $nodes;
}
