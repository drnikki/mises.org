<?php

class mises_wire_handler_filter extends views_handler_filter {
      
  /*
  function value_form(&$form, &$form_state) {
    parent::value_form($form, $form_state);

    $query = db_select('node', 'n');
  }
   */
  function admin_summary() { }
  function operator_form() { }
  function query() {
    $join_tables = array(
      // node > field_data_field_library_item_tree
      'field_data_field_library_item_tree' => array(
        'join_type' => 'LEFT',
        'left_table' => 'node',
        'fields' => array(
          'left' => 'nid',
          'right' => 'entity_id',
        ),
        'extra' => array(
          'field' => 'entity_type',
          'value' => 'node',
          'operator' => '=',
          'type' => 'AND',
        ),
      ),
      // field_data_field_library_item_tree > taxonomy_term_data
      'taxonomy_term_data' => array(
        'join_type' => 'LEFT',
        'left_table' => 'field_data_field_library_item_tree',
        'fields' => array(
          'left' => 'field_library_item_tree_tid',
          'right' => 'tid',
        ),
      ),

      // field_data_field_library_item_tree > taxonomy_term_data
      'taxonomy_term_data' => array(
        'join_type' => 'LEFT',
        'left_table' => 'field_data_field_library_item_tree',
        'fields' => array(
          'left' => 'field_library_item_tree_tid',
          'right' => 'tid',
        ),
      ),


      // node > field_data_field_wire_include_exclude
      'field_data_field_wire_include_exclude' => array(
        'alias' => 'field_data_field_wire_include_exclude',
        'join_type' => 'LEFT',
        'left_table' => 'node',
        'fields' => array(
          'left' => 'nid',
          'right' => 'entity_id',
        ),
      ),

      // node > field_data_field_is_old_blog_content
      'field_data_field_is_old_blog_content' => array(
        'alias' => 'field_data_field_is_old_blog_content',
        'join_type' => 'LEFT',
        'left_table' => 'node',
        'fields' => array(
          'left' => 'nid',
          'right' => 'entity_id',
        ),
      ),
    );

    $table = $this->ensure_my_table();

    foreach ($join_tables as $table_name => $join_data) {
      $table_alias = $join_data['alias'];
      $join = new views_join();
      $join->table = $table_name;
      $join->left_table = $join_data['left_table'];
      $join->left_field = $join_data['fields']['left'];
      $join->field = $join_data['fields']['right'];
      $join->type = $join_data['join_type'];

      if ($join_data['extra']) {
        $join->extra[] = array(
          'field' => $join_data['extra']['field'],
          'value' => $join_data['extra']['value'],
        );
        $join->extra_type = $join_data['extra']['type'];
      }

      $this->query->ensure_table($table_name, $this->relationship, $join);
    }

    $db_and_grp1 = db_and();
    $db_and_grp1
      ->condition(
        'node.type',
        array('blog', 'event'),
        'IN'
      )
      ->condition(
        'field_data_field_wire_include_exclude.field_wire_include_exclude_value',
        'exclude',
        '!='
      )
      ->condition(
        'field_data_field_is_old_blog_content.field_is_old_blog_content_value',
        '1',
        '!='
      )
      ->condition(
        'node.status',
        '1',
        '='
      );

    $db_and_grp2 = db_and();
    $db_and_grp2
      ->condition(
        'node.type',
        'library_item',
        '='
      )
      ->condition(
        'taxonomy_term_data.name',
        'article',
        'LIKE'
      )
      ->condition(
        'field_data_field_wire_include_exclude.field_wire_include_exclude_value',
        'exclude',
        '!='
      )
      ->condition(
        'node.status',
        '1',
        '='
      );

    $db_and_grp3 = db_and();
    $db_and_grp3
      ->condition(
        'node.type',
        'library_item',
        '='
      )
      ->condition(
        'field_data_field_wire_include_exclude.field_wire_include_exclude_value',
        'include',
        '='
      )
      ->condition(
        'node.status',
        '1',
        '='
      );

    $db_or_mw = db_or();
    $db_or_mw
      ->condition($db_and_grp1)
      ->condition($db_and_grp2)
      ->condition($db_and_grp3);


    $this->query->add_where(
      $this->options['group'],
      $db_or_mw
    );

    $this->query->add_groupby('node.nid');
  }
}
