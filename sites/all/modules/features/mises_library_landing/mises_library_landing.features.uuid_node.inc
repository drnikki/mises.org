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
  'uid' => 17,
  'title' => 'Mises Library',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '677b1108-28cb-485e-bb71-60c32691ca63',
  'ds_switch' => '',
  'type' => 'landing_page',
  'language' => 'und',
  'created' => 1400714853,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ddb3573f-485a-4db1-9151-d226e7995842',
  'revision_uid' => 18,
  'field_banner_image' => array(),
  'field_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 17,
        'filename' => 'Library Landing Page',
        'uri' => 'public://city-q-c-640-480-6.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 6621,
        'status' => 1,
        'timestamp' => NULL,
        'type' => 'image',
        'uuid' => 'bea0c88c-f1eb-48ef-b454-1c098542977b',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 165,
          'width' => 240,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 240,
        'height' => 165,
        'uuid_features_file_data' => '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',
      ),
    ),
  ),
  'field_page_subtitle' => array(),
  'field_read_more_link' => array(
    'und' => array(
      0 => array(
        'url' => 'big-government',
        'title' => 'Search the library for everything Big Government',
        'attributes' => array(),
      ),
    ),
  ),
  'field_teaser' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>Block title</h3><p>Dictumst<span style="font-family: arial; line-height: normal;"> </span>mattis<span style="font-family: arial; line-height: normal;"> </span>sed<span style="font-family: arial; line-height: normal;"> </span>ultrices<span style="font-family: arial; line-height: normal;">! Et, </span>sociis<span style="font-family: arial; line-height: normal;">, ac </span>pulvinar<span style="font-family: arial; line-height: normal;">, </span>mauris<span style="font-family: arial; line-height: normal;">, </span>scelerisque<span style="font-family: arial; line-height: normal;"> </span>vut<span style="font-family: arial; line-height: normal;"> </span>ut<span style="font-family: arial; line-height: normal;"> </span>mauris<span style="font-family: arial; line-height: normal;"> </span>etiam<span style="font-family: arial; line-height: normal;"> </span>turpis<span style="font-family: arial; line-height: normal;"> </span>massa<span style="font-family: arial; line-height: normal;"> </span>porta<span style="font-family: arial; line-height: normal;"> </span>elementum<span style="font-family: arial; line-height: normal;"> </span>augue<span style="font-family: arial; line-height: normal;"> </span>elementum<span style="font-family: arial; line-height: normal;">, </span>augue<span style="font-family: arial; line-height: normal;"> </span>arcu<span style="font-family: arial; line-height: normal;">, </span>habitasse<span style="font-family: arial; line-height: normal;"> </span>ridiculus<span style="font-family: arial; line-height: normal;"> </span>scelerisque<span style="font-family: arial; line-height: normal;">! </span>Scelerisque<span style="font-family: arial; line-height: normal;"> a? </span>Phasellus<span style="font-family: arial; line-height: normal;"> </span>eu<span style="font-family: arial; line-height: normal;"> </span>tincidunt<span style="font-family: arial; line-height: normal;">? </span>Dis<span style="font-family: arial; line-height: normal;"> </span>penatibus<span style="font-family: arial; line-height: normal;"> </span>arcu<span style="font-family: arial; line-height: normal;"> </span>sed<span style="font-family: arial; line-height: normal;">, </span>aenean<span style="font-family: arial; line-height: normal;"> </span>amet<span style="font-family: arial; line-height: normal;"> </span>scelerisque<span style="font-family: arial; line-height: normal;"> integer </span>tempor<span style="font-family: arial; line-height: normal;"> </span>aenean<span style="font-family: arial; line-height: normal;"> </span>sociis<span style="font-family: arial; line-height: normal;"> integer </span>montes<span style="font-family: arial; line-height: normal;"> </span>amet<span style="font-family: arial; line-height: normal;">, </span>enim<span style="font-family: arial; line-height: normal;">? </span>Elementum<span style="font-family: arial; line-height: normal;"> </span>vel<span style="font-family: arial; line-height: normal;"> a </span>penatibus<span style="font-family: arial; line-height: normal;"> </span>duis<span style="font-family: arial; line-height: normal;"> in </span>augue<span style="font-family: arial; line-height: normal;">, </span>mauris<span style="font-family: arial; line-height: normal;"> </span>aenean<span style="font-family: arial; line-height: normal;">, </span>ultricies<span style="font-family: arial; line-height: normal;">, </span>vel<span style="font-family: arial; line-height: normal;">, parturient, </span>urna<span style="font-family: arial; line-height: normal;"> </span>augue<span style="font-family: arial; line-height: normal;"> </span>mauris<span style="font-family: arial; line-height: normal;">.</span></p>',
        'format' => 'simplified',
        'safe_value' => '<h3>Block title</h3><p>Dictumst mattis sed ultrices! Et, sociis, ac pulvinar, mauris, scelerisque vut ut mauris etiam turpis massa porta elementum augue elementum, augue arcu, habitasse ridiculus scelerisque! Scelerisque a? Phasellus eu tincidunt? Dis penatibus arcu sed, aenean amet scelerisque integer tempor aenean sociis integer montes amet, enim? Elementum vel a penatibus duis in augue, mauris aenean, ultricies, vel, parturient, urna augue mauris.</p>',
      ),
    ),
  ),
  'field_teaser_header' => array(
    'und' => array(
      0 => array(
        'value' => 'Featured Library Topic',
        'format' => NULL,
        'safe_value' => 'Featured Library Topic',
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
  'name' => 'newvalleymedia',
  'picture' => 0,
  'data' => NULL,
  'weight_weight' => FALSE,
  'date' => '2014-05-21 16:27:33 -0700',
);
  return $nodes;
}
