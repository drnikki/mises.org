<?php
/**
 * @file
 * library_item_media_type.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function library_item_media_type_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'The Journal of Libertarian Studies',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => '02970ed4-911f-4ed6-bde3-d017cc569b7a',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'High School Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => '10f932dd-1dd8-4bea-9c15-3e36963d8b82',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f994c4dd-72f1-449a-8445-342b049c17b1',
    ),
  );
  $terms[] = array(
    'name' => 'Homeschool Classroom',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => '144c37cd-4a6c-4f80-8364-bdfa1d92e232',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '2924b2ae-8f35-433e-a206-c95487ce70b5',
    ),
  );
  $terms[] = array(
    'name' => 'Essays in Political Economy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 6,
    'uuid' => '158a8f79-8431-40e3-9f7b-f278c324a0ca',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'Biography',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 44,
    'uuid' => '1845da78-f2b0-4b92-991e-18e469b77b66',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Courses on History',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1950738a-64c6-410a-8bdb-a168745710a6',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '2924b2ae-8f35-433e-a206-c95487ce70b5',
    ),
  );
  $terms[] = array(
    'name' => 'Lectures',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 49,
    'uuid' => '1eb80e76-8049-4c93-989e-74e26595ab9a',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Audio/Video',
    'description' => NULL,
    'format' => NULL,
    'weight' => 43,
    'uuid' => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Lecture Series',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '2924b2ae-8f35-433e-a206-c95487ce70b5',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Mises Circle Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '2f2eef15-4559-4121-b518-2ace4ae78e40',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f994c4dd-72f1-449a-8445-342b049c17b1',
    ),
  );
  $terms[] = array(
    'name' => 'Mises Daily',
    'description' => '',
    'format' => 'simplified',
    'weight' => 41,
    'uuid' => '331c8f73-8b2c-4b15-94d6-d586b0c0c370',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Essays and Articles',
    'description' => NULL,
    'format' => NULL,
    'weight' => 5,
    'uuid' => '396900b6-389c-4b66-87e7-0cdf6165f2ab',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Live Video',
    'description' => NULL,
    'format' => NULL,
    'weight' => 7,
    'uuid' => '396b1d83-a54d-45ff-8b76-aee40c4f2490',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Article',
    'description' => NULL,
    'format' => NULL,
    'weight' => 42,
    'uuid' => '41460078-98a1-46d6-99f6-a8a71ec3ae5e',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Quarterly Journal of Austrian Economics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '542f094e-54a2-418a-9d88-b2306c52f13a',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'Courses on Philosophy',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '5ce56b0c-869a-410d-b98e-02052b398776',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '2924b2ae-8f35-433e-a206-c95487ce70b5',
    ),
  );
  $terms[] = array(
    'name' => 'Audio Mises Daily',
    'description' => NULL,
    'format' => NULL,
    'weight' => 6,
    'uuid' => '62a91a62-24e3-44e4-9c5d-c10cf552f2a7',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Mises Review',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => '665e9757-6855-4271-822a-c6102e0d5e6a',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'High School Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '67de00f9-b44c-418b-a9d8-c0ce7af973fb',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'a24b618a-314c-4960-8e2e-585bcfb3ff9c',
    ),
  );
  $terms[] = array(
    'name' => 'The Free Market',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '6c66a01b-b87f-4624-a0ff-306228cc33e1',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'Working Papers',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 46,
    'uuid' => '7d0128db-04c9-419e-81cd-dee91c9e22ee',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Audio Books',
    'description' => NULL,
    'format' => NULL,
    'weight' => 4,
    'uuid' => '7f8570e5-c482-418a-953c-b6b92d149867',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'LeFevre\'s Journal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '831d3910-6b80-4f06-b269-c8a574b8f6e1',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Austrian Economics Research Conference',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '86518fad-7bfc-40ca-97d8-9de875577c6d',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'c9ea7d67-cf85-4590-bff0-48f1d1c72f99',
    ),
  );
  $terms[] = array(
    'name' => 'Rampart Journal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 5,
    'uuid' => '8bb5df4a-54c4-44c1-90c3-bae11c8991ec',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Quotes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 50,
    'uuid' => '949336e0-88ae-43f4-a817-4afcd6088b77',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Austrian Scholars Conference',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => '94a1298b-469c-43ed-9d04-cd3eeedbb597',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'c9ea7d67-cf85-4590-bff0-48f1d1c72f99',
    ),
  );
  $terms[] = array(
    'name' => 'American Affairs 1945-1950',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => '9869950f-c89c-4253-8112-0ce74548baea',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Introductory and High School',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a24b618a-314c-4960-8e2e-585bcfb3ff9c',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'The Freeman 1950-1953',
    'description' => NULL,
    'format' => NULL,
    'weight' => 6,
    'uuid' => 'a2ee2bea-f3f0-4f55-a6d8-62c72f063d8e',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Online Texts',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 51,
    'uuid' => 'adb2eff7-d641-4966-8823-9c7f3bb530fc',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Left and Right',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'b43291bb-697f-4b5c-bfe9-8313b82d5c90',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Mises University',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b5f1053b-842f-478c-a3bb-4d9830791131',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'c9ea7d67-cf85-4590-bff0-48f1d1c72f99',
    ),
  );
  $terms[] = array(
    'name' => 'Books',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 47,
    'uuid' => 'ba530b2e-3577-4d9d-b56a-5e04821648a1',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Review of Austrian Economics, Volumes 1-10',
    'description' => NULL,
    'format' => NULL,
    'weight' => 5,
    'uuid' => 'bc915a7e-9ffc-4981-97d4-b9e5ce59ebee',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'Interviews',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 48,
    'uuid' => 'c38fa546-e181-4246-897f-a60649543a94',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Rothbard Graduate Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'c725f4ae-6bbe-45a6-b543-dccb657d8e40',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f994c4dd-72f1-449a-8445-342b049c17b1',
    ),
  );
  $terms[] = array(
    'name' => 'Conferences',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'c9ea7d67-cf85-4590-bff0-48f1d1c72f99',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Austrian Economics Newsletter',
    'description' => NULL,
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'cce800b4-0692-4337-a42d-6bd196fee946',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    ),
  );
  $terms[] = array(
    'name' => 'Ludwig von Mises',
    'description' => NULL,
    'format' => NULL,
    'weight' => 10,
    'uuid' => 'cf5e066f-22d7-48e6-98ed-4513297a9d86',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Courses on Economics',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'cf7b6d02-7bf2-47a0-99dd-13d9e0fe1299',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '2924b2ae-8f35-433e-a206-c95487ce70b5',
    ),
  );
  $terms[] = array(
    'name' => 'Journal/Periodical',
    'description' => NULL,
    'format' => NULL,
    'weight' => 40,
    'uuid' => 'd079f3c9-c503-46c3-a6c5-97c74ffb1b52',
    'vocabulary_machine_name' => 'media_type',
  );
  $terms[] = array(
    'name' => 'Murray Rothbard',
    'description' => NULL,
    'format' => NULL,
    'weight' => 11,
    'uuid' => 'd1cc6e1e-1f00-4ed7-8811-1326e6bfc513',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Mises Institute Supporters Summits',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'db877287-ac58-42e1-b303-add50e0a3adb',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'f994c4dd-72f1-449a-8445-342b049c17b1',
    ),
  );
  $terms[] = array(
    'name' => 'Other Publications',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'd079f3c9-c503-46c3-a6c5-97c74ffb1b52',
    ),
  );
  $terms[] = array(
    'name' => 'Libertarian Journal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => 'e4376bbb-cb3e-4dac-8982-9a83c4ea61ab',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Institute Publications',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f5332609-c5c6-41e6-be1c-46b0f9088b0a',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'd079f3c9-c503-46c3-a6c5-97c74ffb1b52',
    ),
  );
  $terms[] = array(
    'name' => 'Mises View',
    'description' => NULL,
    'format' => NULL,
    'weight' => 8,
    'uuid' => 'f63fde76-d488-4895-a86a-d18c3d2b4622',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Summits and Seminars',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'f994c4dd-72f1-449a-8445-342b049c17b1',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  $terms[] = array(
    'name' => 'Faith and Freedom 1951-1960',
    'description' => NULL,
    'format' => NULL,
    'weight' => 4,
    'uuid' => 'fdcb3fe9-f087-4583-a3c8-c3e120a5792d',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => 'dee91f9f-b8de-4d80-8c7a-4511353aa6c3',
    ),
  );
  $terms[] = array(
    'name' => 'Entertainment',
    'description' => NULL,
    'format' => NULL,
    'weight' => 9,
    'uuid' => 'fe08d921-62d4-4d6e-adf2-67bee89ceac1',
    'vocabulary_machine_name' => 'media_type',
    'parent' => array(
      0 => '22b41f37-7ff1-41da-bef5-e3be848385eb',
    ),
  );
  return $terms;
}
