<?php
function importDOM($body) {
  $doc = new DOMDocument();
  $doc->strictErrorChecking = FALSE;
  if($body) {
    // trick PHP into detecting the correct encoding
    $doc->loadHTML('<?xml encoding="UTF-8">' .$body);
    $doc->encoding = 'UTF-8';
    return $doc;
  }
  return FALSE;
}


function exportDOM($doc) {
  if($doc) {
    return preg_replace('/^<!DOCTYPE.+?>/', '', str_replace(array('<?xml encoding="UTF-8">' ,'<html>', '</html>', '<body>', '</body>'), array('', '', '', ''), $doc->saveHTML()));
  }
}

function generate_media_csv() {

  $tree = array();
  category_recurse(0, $tree);
  foreach($tree as $k1 => $v1) {
    $rows[] = array($k1);
    foreach($v1 as $k2 => $v2) {
      $rows[] = array($k1, $k2);
      foreach($v2 as $k3 => $v3) {
        $rows[] = array($k1, $k2, $k3); 
        foreach($v3 as $k4 => $v4) {
          $rows[] = array($k1, $k2, $k3, $k4); 
        }
      }
    }
  }
  foreach($rows as $row) {
    print "<br />";
    print sputcsv($row);
  }

}

function category_recurse($parent, &$tree) {
  $db = Database::getConnection('default', 'for_migration');
  $query = $db->query("SELECT * FROM {MediaCategory} WHERE ParentCategory = :parent", array('parent' => $parent)); 
  while($result = $query->fetch()) {
    $new_tree = array();

    category_recurse($result->CategoryId, $new_tree);
        $tree[$result->Category] = $new_tree;

  }
}

function sputcsv($row, $delimiter = ',', $enclosure = '"', $eol = "\n")
{
    static $fp = false;
    if ($fp === false)
    {
        $fp = fopen('php://temp', 'r+'); // see http://php.net/manual/en/wrappers.php.php - yes there are 2 '.php's on the end.
        // NB: anything you read/write to/from 'php://temp' is specific to this filehandle
    }
    else
    {
        rewind($fp);
    }
    
    if (fputcsv($fp, $row, $delimiter, $enclosure) === false)
    {
        return false;
    }
    
    rewind($fp);
    $csv = fgets($fp);
    
    if ($eol != PHP_EOL)
    {
        $csv = substr($csv, 0, (0 - strlen(PHP_EOL))) . $eol;
    }
    
    return $csv;
}