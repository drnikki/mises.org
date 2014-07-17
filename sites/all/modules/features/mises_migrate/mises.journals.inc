<?php 
abstract class MisesJournalMigration extends MisesMigration {
  protected $authors;
  public function lookupAuthors($authors, &$row) {
    $i = 1;
    foreach($authors as $author) {
      $query = db_query("SELECT nid FROM {node} WHERE type = 'person_profile' AND title = :title", array('title' => $author));
      if($result = $query->fetch()) {
        $row->author_.$i = $result->nid;
        $i++;
      }
    }
  }
}

class JLSMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    $this->mediaIds = array();
    parent::__construct($arguments);
    $query = $this->db
      ->select('documents', 'd')
      ->fields('d');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('library_item');
    $this->map = new MigrateSQLMap($this->machineName, array(
      'DocumentId' => array('type' => 'int','unsigned' => TRUE,'not null' => TRUE)),
      MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Description');
    $this->addFieldMapping('body:format')->defaultValue('simplified');
    $this->addFieldMapping('field_published_date', 'CreateDate'); 
    $this->addFieldMapping('field_mises_published_date', 'CreateDate'); 
    $this->addFieldMapping('field_bibliography_footnote', 'PublicationInformation'); 
    $this->addFieldMapping('field_author_1', 'author_1')
      ->sourceMigration('DocumentAuthors');
    $this->addFieldMapping('field_author_2', 'author_2')
      ->sourceMigration('DocumentAuthors');
    // @todo - assign this
    $this->addFieldMapping('status', 'Display');
    $this->addFieldMapping('field_library_item_tree', 'media_type');
    $this->addFieldMapping('field_austrian_school', 'field_austrian_school');
    $this->addFieldMapping('field_topics', 'field_topics');
    $this->addFieldMapping('field_pdf', 'pdf');
    $this->addFieldMapping('field_mobi', 'mobi');
    $this->addFieldMapping('field_epub', 'epub');
    $this->addFieldMapping('field_online_text', 'online_text');
    $this->addFieldMapping('field_link_to_external_listing_', 'store_link');
    $this->addFieldMapping('uid')->defaultValue(1);
  }

  public function prepareRow($row) {
    if($row->display == 'Yes') {
      $row->status = 1;
    }
    else {
      $row->status = 0;
    }
    $authors = array();
    if($row->authorFirst1) {
      $authors[] = $row->authorFirst1.' '.$row->authorLast1;
    }
    if($row->authorFirst2) {
      $authors[] = $row->authorFirst2.' '.$row->authorLast2;
    }
    return $row;
  }

  public function prepare($node, $row) {
    $this->insert_mapping_url($node->nid, $row->DocumentId, 'document', $node->title);
    if(isset($this->mediaIds)) {
      foreach($this->mediaIds as $mediaId) {
        $this->insert_mapping_url($node->nid, $mediaId, 'media', $node->title);  
      }
    }
  }
}

class MisesReviewMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    $this->mediaIds = array();
    parent::__construct($arguments);
    $query = $this->db
      ->select('documents', 'd')
      ->fields('d');
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('library_item');
    $this->map = new MigrateSQLMap($this->machineName, array(
      'DocumentId' => array('type' => 'int','unsigned' => TRUE,'not null' => TRUE)),
      MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'Title');
    $this->addFieldMapping('body', 'Description');
    $this->addFieldMapping('body:format')->defaultValue('simplified');
    $this->addFieldMapping('field_published_date', 'CreateDate'); 
    $this->addFieldMapping('field_mises_published_date', 'CreateDate'); 
    $this->addFieldMapping('field_bibliography_footnote', 'PublicationInformation'); 
    $this->addFieldMapping('field_author_1', 'Author1')
      ->sourceMigration('DocumentAuthors');
    $this->addFieldMapping('field_author_2', 'Author2')
      ->sourceMigration('DocumentAuthors');
    // @todo - assign this
    $this->addFieldMapping('status', 'Display');
    $this->addFieldMapping('field_library_item_tree', 'media_type');
    $this->addFieldMapping('field_austrian_school', 'field_austrian_school');
    $this->addFieldMapping('field_topics', 'field_topics');
    $this->addFieldMapping('field_pdf', 'pdf');
    $this->addFieldMapping('field_mobi', 'mobi');
    $this->addFieldMapping('field_epub', 'epub');
    $this->addFieldMapping('field_online_text', 'online_text');
    $this->addFieldMapping('field_link_to_external_listing_', 'store_link');
    $this->addFieldMapping('uid')->defaultValue(1);
  }

  public function prepareRow($row) {
    $map = $this->convertSubjects($this->getLegacySubjects($row->DocumentId));
    $row->field_topics = $map['field_topics'];
    $row->field_austrian_school = $map['field_austrian_school'];
    $this->processMediaTypes($row);
    return $row;
  }

  public function prepare($node, $row) {
    $this->insert_mapping_url($node->nid, $row->DocumentId, 'document', $node->title);
    if(isset($this->mediaIds)) {
      foreach($this->mediaIds as $mediaId) {
        $this->insert_mapping_url($node->nid, $mediaId, 'media', $node->title);  
      }
    }
  }
}