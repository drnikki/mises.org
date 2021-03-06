<?php
/**
 * @file
 * resources_for_economist.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function resources_for_economist_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 18,
  'title' => 'Resources for the Economist',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '92183a35-5785-475d-a839-7037e15d8d55',
  'ds_switch' => '',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1402933337,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '427c9894-37f5-40e1-a693-042a9191cedc',
  'revision_uid' => 18,
  'field_banner_image' => array(),
  'field_image' => array(),
  'field_page_subtitle' => array(),
  'field_read_more_link' => array(),
  'field_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Scelerisque pellentesque porta scelerisque turpis rhoncus! Et tincidunt, in. Lacus ac cras pulvinar ut scelerisque mid, enim, augue? Diam aliquam, augue etiam! Urna pid! Augue lundium phasellus aliquam amet eros, ultricies nisi. Facilisis, facilisis parturient, ut ac amet? Platea velit placerat augue, nisi? Elementum? Pid, lundium purus nascetur arcu sociis.</p>',
        'format' => 'simplified',
        'safe_value' => '<p>Scelerisque pellentesque porta scelerisque turpis rhoncus! Et tincidunt, in. Lacus ac cras pulvinar ut scelerisque mid, enim, augue? Diam aliquam, augue etiam! Urna pid! Augue lundium phasellus aliquam amet eros, ultricies nisi. Facilisis, facilisis parturient, ut ac amet? Platea velit placerat augue, nisi? Elementum? Pid, lundium purus nascetur arcu sociis.</p>',
      ),
    ),
  ),
  'field_teaser_header' => array(),
  'field_teaser_title' => array(),
  'field_resource_group' => array(
    'und' => array(
      0 => array(
        'value' => 14663,
        'revision_id' => 14663,
      ),
    ),
  ),
  'field_featured_nodes' => array(),
  'field_featured_videos' => array(),
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
  'date' => '2014-06-16 10:42:17 -0500',
);
  $nodes[] = array(
  'uid' => 18,
  'title' => 'Resources for the Economist sidebar block',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4efed522-ba79-4353-8760-074193f06077',
  'ds_switch' => '',
  'type' => 'flex_block',
  'language' => 'und',
  'created' => 1402935106,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7e51a526-d203-4fe3-9bc7-cd1ca139f42f',
  'revision_uid' => 18,
  'field_display_title' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 18,
        'filename' => 'Flex Block Placeholder',
        'uri' => 'public://flex-block-placeholder.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 18584,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'b65fd82e-09da-4f0f-951d-ce1b6f034b5e',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 220,
          'width' => 343,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 343,
        'height' => 220,
        'uuid_features_file_data' => '/9j/4QAYRXhpZgAASUkqAAgAAAAAAAAAAAAAAP/sABFEdWNreQABAAQAAAAeAAD/4QNiaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLwA8P3hwYWNrZXQgYmVnaW49Iu+7vyIgaWQ9Ilc1TTBNcENlaGlIenJlU3pOVGN6a2M5ZCI/PiA8eDp4bXBtZXRhIHhtbG5zOng9ImFkb2JlOm5zOm1ldGEvIiB4OnhtcHRrPSJBZG9iZSBYTVAgQ29yZSA1LjUtYzAyMSA3OS4xNTQ5MTEsIDIwMTMvMTAvMjktMTE6NDc6MTYgICAgICAgICI+IDxyZGY6UkRGIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyI+IDxyZGY6RGVzY3JpcHRpb24gcmRmOmFib3V0PSIiIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9IjIzQjlCM0YyNjZFRDBDM0E5NjJFRTBCMjE2NUMwOEE3IiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjhGQkM1REZBRTVBODExRTNBMEJFODE0QTgxNjgwN0UzIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjhGQkM1REY5RTVBODExRTNBMEJFODE0QTgxNjgwN0UzIiB4bXA6Q3JlYXRvclRvb2w9IkFkb2JlIFBob3Rvc2hvcCBDQyBNYWNpbnRvc2giPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo3Nzk5NThjMi02ZmZhLTQ5ZTEtYWI2My1kNTlhYzBhMTgwY2EiIHN0UmVmOmRvY3VtZW50SUQ9IjIzQjlCM0YyNjZFRDBDM0E5NjJFRTBCMjE2NUMwOEE3Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hw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',
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
        'value' => 'economist',
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
  'field_media_collection' => array(),
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
  'date' => '2014-06-16 11:11:46 -0500',
);
  return $nodes;
}
