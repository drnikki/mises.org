<?php

class DocumentFileDocumentMigration extends MisesMigration {
  public function __construct($arguments) {
    ini_set('max_execution_time', 4000);
    // get an instance of the group to pass into parent constructor
    $group = MigrateGroup::getInstance($arguments['group_name']);
    // pass $group instead of $arguments
    parent::__construct($group);
	$query = $this->db
		->select('DocumentFiles', 'd')
		->fields('d')
    ->where('d.MediaTypeId NOT IN(5,16,4,3,9,6)');
    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationFieldCollection(
      'field_media_collection',
      array('host_entity_type' => 'node')
    );
   // $this->dependencies = array($parent_migration);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'FileId' => array(
          'type' => 'int',
          'not null' => true,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );
    $this->addFieldMapping('host_entity_id', 'DocumentId')->sourceMigration('Document');
    $this->addFieldMapping('field_media', 'file');
    // Indicate that we want each file to maintain its name, replacing any
    // previous file of the same name (as opposed to being renamed to avoid
    // collisions, which is the default).
    $this->addFieldMapping('field_media:file_replace')
         ->defaultValue(FILE_EXISTS_REPLACE);
  }
  public function prepareRow($row) {
    if(!strpos($row->URL,'ttp://') !== false) {
      // some of these image links are broken lolz, 
      // lets fix them
      if($row->URL != '/') {
        $row->URL = '/'.$row->URL;
      }
      $row->URL = 'http://mises.org'.$row->URL;
    }
	  $row->file = $row->URL;
    return $row;
  }
  public function prepare($node, $row) {

  }
}

class DocumentFileYoutubeMigration extends MisesMigration {
  public function __construct($arguments) {
    ini_set('max_execution_time', 4000);
    // get an instance of the group to pass into parent constructor
    $group = MigrateGroup::getInstance($arguments['group_name']);
    // pass $group instead of $arguments
    parent::__construct($group);
  $query = $this->db
    ->select('DocumentFiles', 'd')
    ->fields('d')
    ->where('d.MediaTypeId = 16');
    $this->source = new MigrateSourceSQL($query);

    $this->destination = new MigrateDestinationFieldCollection(
      'field_media_collection',
      array('host_entity_type' => 'node')
    );
   // $this->dependencies = array($parent_migration);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'FileId' => array(
          'type' => 'int',
          'not null' => true,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );
    $this->addFieldMapping('host_entity_id', 'DocumentId')->sourceMigration('Document');
    $this->addFieldMapping('field_media', 'FileId')->sourceMigration('Youtube');
    $this->addFieldMapping('field_media:file_class')
     ->defaultValue('MigrateFileFid');

  }

  public function prepare($node, $row) {
    
  }
}


class YoutubeMigration extends MisesMigration {
  public function __construct() {
    // get an instance of the group to pass into parent constructor
    $group = MigrateGroup::getInstance($arguments['group_name']);
    // pass $group instead of $arguments
    parent::__construct($group);
    $this->description = t('Example migration of Youtube videos');
    $query = $this->db
    ->select('DocumentFiles', 'd')
    ->fields('d')
    ->where('d.MediaTypeId = 16');
    $this->source = new MigrateSourceSQL($query);
   // $this->dependencies = array($parent_migration);
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'FileId' => array(
          'type' => 'int',
          'not null' => true,
        ),
      ),
      MigrateDestinationMedia::getKeySchema()
    );
    $this->destination = new MigrateDestinationMedia('video',
      'MigrateExtrasFileYoutube');
    // We just need to map the 'value' in the media destination to the Youtube
    // URI.
    $this->addFieldMapping('value', 'URL');
    $this->addFieldMapping('uid')
         ->defaultValue(1);
  }
}

