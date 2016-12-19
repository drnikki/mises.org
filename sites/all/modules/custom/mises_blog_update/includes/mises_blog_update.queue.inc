<?php
/**
 * Worker callback defined in hook_cron_queue_info()
 * Update field_is_old_blog_content field for blog content older than 08/01/2015
 * @param $item
 */
function update_old_blogs($item) {
  $node = node_load($item);
  $node_wrapper = entity_metadata_wrapper('node', $node);
  $node_wrapper->field_is_old_blog_content->set(1);
  $node_wrapper->save();
}
