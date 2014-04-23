<?php
/**
 * @file
 * mises_person_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mises_person_profile_taxonomy_default_vocabularies() {
  return array(
    'the_austrian_school_of_economics' => array(
      'name' => 'Austrian School',
      'machine_name' => 'the_austrian_school_of_economics',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
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
