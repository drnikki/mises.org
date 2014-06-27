<?php
abstract class MisesFileMigration extends MisesMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
  }
  public function setFieldMapping($query, $key, $parent_migration, $node_type) {

  }
}
class DocumentFileDocumentMigration extends MisesFileMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
	$query = $this->db
		->select('DocumentFiles', 'd')
		->fields('d');
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
          $row->URL = '/'.$row->ThumbnailURL;
        }
        $row->URL = 'http://mises.org'.$row->ThumbnailURL;
      }
	$row->file = $row->URL;
    return $row;
  }
}


