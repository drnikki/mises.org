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