<?php
function create_subject_mapping_csv() {

  $query = Database::getConnection('default', 'for_migration')
  ->query("SELECT Subject FROM {documentsubjects} WHERE Visible = 1 ORDER BY Subject ASC");

  $i = 0;
  $rows = array(array('OLD SUBJECT','MAPS TO TOPIC','MAPS TO AUSTRIAN SCHOOL','AVAILABLE TOPICS','AVAIALBE AUSTRIAN SCHOOL'));
  while($i < 100) {
    $rows[] = array('','','','','');
    $i++;
  }
  
  $i = 1;
  while($result = $query->fetch()) {
    $rows[$i][0] = $result->Subject;
    $i++;
  }
  $i = 1;
  $query = db_query("SELECT tid, name FROM {taxonomy_term_data} WHERE vid = 6 ORDER BY name ASC");
  while($result = $query->fetch()) {
    $rows[$i][3] = $result->name;
    $i++;
  }
  $i = 1;
  $query = db_query("SELECT tid, name FROM {taxonomy_term_data} WHERE vid = 7 ORDER BY name ASC");
  while($result = $query->fetch()) {
    $rows[$i][4] = $result->name;
    $i++;
  }
  foreach($rows as $k => $v) {
  	$rows[$k] = implode(',', $v);
  }
  dprint_r(implode("\n", $rows));
}

function generate_url_mappings() {
    //require_once('extras.inc');
  //create_subject_mapping_csv();
  //insert_mapping_url(1, 'mises_org');
  //require_once('mises_migrate.install');
  //insert_mapping_url(45, 2, 'document', 'Authors Forum: Property, Freedom & Society');
  $query = db_query("SELECT old_url, new_url FROM {mises_migrate_url_map} WHERE old_type = 'Author'");
  while($result = $query->fetch()) {
    $result->old_url = str_replace('"','', $result->old_url);
    $result->old_url = str_replace('http://www.mises.org/Author/', '', $result->old_url);
    $types = array(
      'daily/author',
      'Daily/Author',
      'Literature/Author',
      'literature/author'
    );
    $items[] = implode(',',(array)$result);
  }
  //print implode($items, "<br />");
}


function course_csv() {

  $query = Database::getConnection('default', 'course')
  ->query("SELECT * FROM {mdl_course}");
  $rows = array(implode(',',array('id', 'name', 'url')));
  while($result = $query->fetch()) {
    $rows[] = implode(',',array($result->id, '"'.$result->fullname.'"', ''));
  }
  dprint_r(implode("\n", $rows));
  $query = db_query("SELECT old_url, new_url FROM {mises_migrate_url_map}");
  while($result = $query->fetch()) {
    $result->old_url = str_replace('"','', $result->old_url);
    $items[] = implode(',',(array)$result);
  }
  print implode($items, "<br />");
}