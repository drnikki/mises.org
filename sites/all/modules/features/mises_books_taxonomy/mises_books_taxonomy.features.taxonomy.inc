<?php
/**
 * @file
 * mises_books_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mises_books_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'books' => array(
      'name' => 'Books',
      'machine_name' => 'books',
      'description' => 'Indicates the presence of html or ebooks within Library Items.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
