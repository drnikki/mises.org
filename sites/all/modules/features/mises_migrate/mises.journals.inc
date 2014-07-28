<?php 
abstract class MisesJournalMigration extends MisesMigration {
  protected $authors;
  public function lookupAuthors($authors, &$row) {
    $i = 1;
    foreach($authors as $author) {
      $query = db_query("SELECT nid FROM {node} WHERE type = 'person_profile' AND title = :title", array('title' => $author));
      if($result = $query->fetch()) {
        $field = 'author_'.$i;
        $row->$field = $result->nid;
        $i++;
      }
    }
  }
  public function mapFields($query, $key = array('GUID' => array('type' => 'varchar','length' => 255,'not null' => TRUE,'description' => 'category ID'))) {
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('library_item');
    $this->map = new MigrateSQLMap($this->machineName, $key,
      MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'title');
    //$this->addFieldMapping('body', 'Description');
    //$this->addFieldMapping('body:format')->defaultValue('simplified');
    //$this->addFieldMapping('field_published_date', 'CreateDate'); 
    //$this->addFieldMapping('field_mises_published_date', 'CreateDate'); 
    //this->addFieldMapping('field_bibliography_footnote', 'PublicationInformation'); 
    $this->addFieldMapping('field_author_1', 'author_1')
      ->sourceMigration('DocumentAuthors');
    $this->addFieldMapping('field_author_2', 'author_2')
      ->sourceMigration('DocumentAuthors');
    // @todo - assign this
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('field_library_item_tree')->defaultValue(array('Journal/Periodical', 'Institute Publications', $this->journal_name));
    $this->addFieldMapping('field_pdf', 'pdf');
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_journal_issue_control', 'control');
    $this->addFieldMapping('field_journal_issue', 'journal_issue');
    $this->addFieldMapping('field_journal_issue:create_term')
     ->defaultValue(TRUE);
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
    $this->lookupAuthors($authors, $row);
    $row->pdf = $this->buildDownloadPath($row);
    $row->journal_issue = $this->journal_name.' - Vol. '.$row->volume.' Num. '.$row->number;
    $this->title = strip_tags($row->title);
    return $row;
  }
  public function buildDownloadPath($row) {

  }
  public function prepare($node, $row) {
    //dd($node);
  }
}

class JLSMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('JLS', 'j')
      ->fields('j');
    $this->journal_name = 'The Journal of Libertarian Studies';
    $this->mapFields($query);
  }
  public function buildDownloadPath($row) {
    return 'http://mises.org/journals/jls/'.$row->volume.'_'.$row->number.'/'.$row->volume.'_'.$row->number.'_'.$row->articleNum.'.pdf';
  }
}

class QJAEMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('QJAEdb', 'q')
      ->fields('q');
    $this->journal_name = 'Quarterly Journal of Austrian Economics';
    $this->mapFields($query);
  }
  public function buildDownloadPath($row) {
    return 'http://mises.org/journals/qjae/pdf/qjae'.$row->volume.'_'.$row->number.'_'.$row->articleNum.'.pdf';
  }
}

class RAEMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('RAEdb', 'r')
      ->fields('r');
    $this->journal_name = 'Review of Austrian Economics, Volumes 1-10';
    $this->mapFields($query);
  }
  public function buildDownloadPath($row) {
    return 'http://mises.org/journals/rae/pdf/RAE'.$row->volume.'_'.$row->number.'_'.$row->articleNum.'.pdf';
  }
  public function prepareRow($row) {
    $this->journal_name = 'Review of Austrian Economics';
    $row = parent::prepareRow($row);
  }
}

class AENMigration extends MisesJournalMigration  {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('AENdb', 'a')
      ->fields('a');
    $this->journal_name = 'Austrian Economics Newsletter';
    $key = array(
      'control' => array('type' => 'int','unsigned' => TRUE,'not null' => TRUE)
    );
    $this->mapFields($query, $key);
  }
  public function buildDownloadPath($row) {
    return 'http://mises.org/journals/aen/aen'.$row->volume.'_'.$row->number.'_'.$row->articleNum.'.pdf';
  }
}



class MisesReviewMigration extends MisesJournalMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('misesreview', 'm')
      ->fields('m');
    $this->journal_name = 'Mises Review';
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('library_item');
    $this->map = new MigrateSQLMap($this->machineName, array(
      'control' => array('type' => 'int','unsigned' => TRUE,'not null' => TRUE)
    ),MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('simplified');
    $this->addFieldMapping('field_published_date', 'created'); 
    $this->addFieldMapping('field_mises_published_date', 'created'); 
    //this->addFieldMapping('field_bibliography_footnote', 'PublicationInformation'); 
    $this->addFieldMapping('field_author_1', 'author_1')
      ->sourceMigration('DocumentAuthors');
    $this->addFieldMapping('field_author_2', 'author_2')
      ->sourceMigration('DocumentAuthors');
    // @todo - assign this
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('field_library_item_tree')->defaultValue(array('Journal/Periodical', 'Institute Publications', $this->journal_name));
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_journal_issue_control', 'control');
    $this->addFieldMapping('field_journal_issue', 'journal_issue');
    $this->addFieldMapping('field_journal_issue:create_term')
     ->defaultValue(TRUE);
  }
  public function prepareRow($row) {
    $authors = array();
    if($row->authorfirst) {
      $authors[] = $row->authorfirst.' '.$row->authorlast;
    }
    if($row->authorfirst2) {
      $authors[] = $row->authorfirst2.' '.$row->authorfirst2;
    }
    $this->lookupAuthors($authors, $row);
    $row->journal_issue = $this->journal_name.' - '.$row->issue;
    switch($row->issue_season) {
      case 1:
        $month = 4;
        break;
      case 2: 
        $month = 7;
        break;
      case 3:
        $month = 10;
        break;
      case 4:
        $month = 12;
        break;
    }
    $row->created = strtotime($month.'/1/'.$row->issue_year);
    return $row;
  }

  public function prepare($node, $row) {
    $this->insert_mapping_url($node->nid, $row->control, 'mises_review', $node->title);
  }
}


class FreeMarketMigration extends MisesJournalMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $query = $this->db
      ->select('FreeMarket', 'f')
      ->fields('f');
    $this->journal_name = 'The Free Market';
    $this->source = new MigrateSourceSQL($query);
    $this->destination = new MigrateDestinationNode('library_item');
    $this->map = new MigrateSQLMap($this->machineName, array(
      'control' => array('type' => 'int','unsigned' => TRUE,'not null' => TRUE)
    ),MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('simplified');
    $this->addFieldMapping('field_published_date', 'articledate'); 
    $this->addFieldMapping('field_mises_published_date', 'articledate'); 
    //this->addFieldMapping('field_bibliography_footnote', 'PublicationInformation'); 
    $this->addFieldMapping('field_author_1', 'author_1')
      ->sourceMigration('DocumentAuthors');
    $this->addFieldMapping('field_author_2', 'author_2')
      ->sourceMigration('DocumentAuthors');
    // @todo - assign this
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('field_library_item_tree')->defaultValue(array('Journal/Periodical', 'Institute Publications', $this->journal_name));
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('field_journal_issue_control', 'control');
    $this->addFieldMapping('field_journal_issue', 'journal_issue');
    $this->addFieldMapping('field_journal_issue:create_term')
     ->defaultValue(TRUE);
    $this->addFieldMapping('field_pdf', 'pdf');
  }
  public function prepareRow($row) {
    $authors = array();
    if($row->authorfirst) {
      $authors[] = $row->authorfirst.' '.$row->authorlast;
    }
    if($row->authorfirst2) {
      $authors[] = $row->authorfirst2.' '.$row->authorfirst2;
    }
    $this->lookupAuthors($authors, $row);

    $row->journal_issue = $this->journal_name.' - '.format_date(strtotime($row->articledate), 'custom', 'M Y');
    if($row->PDFurl) {
      $row->pdf = 'http://mises.org/'.$row->PDFurl;
    }
    return $row;
  }

  public function prepare($node, $row) {
    $this->insert_mapping_url($node->nid, $row->control, 'freemarket', $node->title);
    dd($node);
  }
}