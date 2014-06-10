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