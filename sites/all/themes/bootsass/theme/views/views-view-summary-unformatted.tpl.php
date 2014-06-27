<?php
// Source https://www.drupal.org/node/403012#comment-7015180

$total = 0;
$letters = range ('A', 'Z');
$letters = array_merge($letters, range('1', '9'));
foreach($rows as $id => $row){
  $existing_letters[] = $row->link;
  $urls[$row->link] = $row->url;
  $counts[$row->link] = $row->count;
  $total += $row->count;
}
//add ALL at end
$letters[] = "ALL";
$existing_letters[] = "ALL";
$urls['ALL'] = str_replace(strtolower($row->link), "all", $row->url);
$counts['ALL'] = $total;
print '<div class="views-summary views-summary-unformatted">';
foreach($letters as $letter){
  if(in_array($letter, $existing_letters)){
    //$nav[] = '<span class="result"><a href=' . $urls[$letter] . '>' . $letter . '</a></span><span class="count">(' . $counts[$letter]. ')</span>';
    $nav[] = '<span class="result"><a href=' . $urls[$letter] . '>' . $letter . '</a></span>';
  }
  else {
    //$nav[] = '<span class="no-result">' . $letter . '</span>';
  }
}
print implode('', $nav);
print '</div>';
?>