<?php
/**
 * @file
 * mises_webforms.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function mises_webforms_webform_defaults() {
$webforms = array();
  $webforms['mises_university_student_applica'] = array(
  'title' => 'Mises University Student Application [Example]',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0609f3d0-59c3-4e5f-995b-c13866c5d2fa',
  'ds_switch' => 'default',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1b2fe805-9ae1-4118-8aca-4d3153d29cf4',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 1,
  ),
  'webform' => array(
    'next_serial' => 3,
    'confirmation' => '<p>Thank you for applying to attend Mises University.</p><p>You will be notified of the status of your application via email address you provided in this application form.</p><p>If you have any questions, please email scholarships@mises.org</p>',
    'confirmation_format' => 'simplified',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => 'simplified',
    'preview_excluded_components' => array(),
    'machine_name' => 'mises_university_student_applica',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'mises_university_student_applica__first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'mises_university_student_applica__first_name',
        'page_num' => 1,
      ),
      'mises_university_student_applica__last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'mises_university_student_applica__last_name',
        'page_num' => 1,
      ),
      'mises_university_student_applica__date_of_birth' => array(
        'form_key' => 'date_of_birth',
        'name' => 'Date of Birth',
        'type' => 'date',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'start_date' => '-100 years',
          'end_date' => '+0 years',
          'timezone' => 'user',
          'exclude' => array(),
          'year_textfield' => 0,
          'datepicker' => 1,
          'description' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'machine_name' => 'mises_university_student_applica__date_of_birth',
        'page_num' => 1,
      ),
      'mises_university_student_applica__gender' => array(
        'form_key' => 'gender',
        'name' => 'Gender',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'description' => 'For roommate purposes, if applicable.',
          'items' => 'male|Male
female|Female',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'empty_option' => '- Select -',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'mises_university_student_applica__gender',
        'page_num' => 1,
      ),
      'mises_university_student_applica__email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'mises_university_student_applica__email',
        'page_num' => 1,
      ),
      'mises_university_student_applica__mailing_address' => array(
        'form_key' => 'mailing_address',
        'name' => 'Mailing Address',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description_above' => 0,
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 5,
        'machine_name' => 'mises_university_student_applica__mailing_address',
        'page_num' => 1,
      ),
      'mises_university_student_applica__country' => array(
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'AF|Afghanistan
AX|Aland Islands
AL|Albania
DZ|Algeria
AS|American Samoa
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarctica
AG|Antigua and Barbuda
AR|Argentina
AM|Armenia
AW|Aruba
AU|Australia
AT|Austria
AZ|Azerbaijan
BS|Bahamas
BH|Bahrain
BD|Bangladesh
BB|Barbados
BY|Belarus
BE|Belgium
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivia
BA|Bosnia and Herzegovina
BW|Botswana
BV|Bouvet Island
BR|Brazil
IO|British Indian Ocean Territory
VG|British Virgin Islands
BN|Brunei
BG|Bulgaria
BF|Burkina Faso
BI|Burundi
KH|Cambodia
CM|Cameroon
CA|Canada
CV|Cape Verde
BQ|Caribbean Netherlands
KY|Cayman Islands
CF|Central African Republic
TD|Chad
CL|Chile
CN|China
CX|Christmas Island
CC|Cocos (Keeling) Islands
CO|Colombia
KM|Comoros
CG|Congo (Brazzaville)
CD|Congo (Kinshasa)
CK|Cook Islands
CR|Costa Rica
HR|Croatia
CU|Cuba
CW|Curaçao
CY|Cyprus
CZ|Czech Republic
DK|Denmark
DJ|Djibouti
DM|Dominica
DO|Dominican Republic
EC|Ecuador
EG|Egypt
SV|El Salvador
GQ|Equatorial Guinea
ER|Eritrea
EE|Estonia
ET|Ethiopia
FK|Falkland Islands
FO|Faroe Islands
FJ|Fiji
FI|Finland
FR|France
GF|French Guiana
PF|French Polynesia
TF|French Southern Territories
GA|Gabon
GM|Gambia
GE|Georgia
DE|Germany
GH|Ghana
GI|Gibraltar
GR|Greece
GL|Greenland
GD|Grenada
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard Island and McDonald Islands
HN|Honduras
HK|Hong Kong S.A.R., China
HU|Hungary
IS|Iceland
IN|India
ID|Indonesia
IR|Iran
IQ|Iraq
IE|Ireland
IM|Isle of Man
IL|Israel
IT|Italy
CI|Ivory Coast
JM|Jamaica
JP|Japan
JE|Jersey
JO|Jordan
KZ|Kazakhstan
KE|Kenya
KI|Kiribati
KW|Kuwait
KG|Kyrgyzstan
LA|Laos
LV|Latvia
LB|Lebanon
LS|Lesotho
LR|Liberia
LY|Libya
LI|Liechtenstein
LT|Lithuania
LU|Luxembourg
MO|Macao S.A.R., China
MK|Macedonia
MG|Madagascar
MW|Malawi
MY|Malaysia
MV|Maldives
ML|Mali
MT|Malta
MH|Marshall Islands
MQ|Martinique
MR|Mauritania
MU|Mauritius
YT|Mayotte
MX|Mexico
FM|Micronesia
MD|Moldova
MC|Monaco
MN|Mongolia
ME|Montenegro
MS|Montserrat
MA|Morocco
MZ|Mozambique
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NL|Netherlands
AN|Netherlands Antilles
NC|New Caledonia
NZ|New Zealand
NI|Nicaragua
NE|Niger
NG|Nigeria
NU|Niue
NF|Norfolk Island
MP|Northern Mariana Islands
KP|North Korea
NO|Norway
OM|Oman
PK|Pakistan
PW|Palau
PS|Palestinian Territory
PA|Panama
PG|Papua New Guinea
PY|Paraguay
PE|Peru
PH|Philippines
PN|Pitcairn
PL|Poland
PT|Portugal
PR|Puerto Rico
QA|Qatar
RE|Reunion
RO|Romania
RU|Russia
RW|Rwanda
BL|Saint Barthélemy
SH|Saint Helena
KN|Saint Kitts and Nevis
LC|Saint Lucia
MF|Saint Martin (French part)
PM|Saint Pierre and Miquelon
VC|Saint Vincent and the Grenadines
WS|Samoa
SM|San Marino
ST|Sao Tome and Principe
SA|Saudi Arabia
SN|Senegal
RS|Serbia
SC|Seychelles
SL|Sierra Leone
SG|Singapore
SX|Sint Maarten
SK|Slovakia
SI|Slovenia
SB|Solomon Islands
SO|Somalia
ZA|South Africa
GS|South Georgia and the South Sandwich Islands
KR|South Korea
SS|South Sudan
ES|Spain
LK|Sri Lanka
SD|Sudan
SR|Suriname
SJ|Svalbard and Jan Mayen
SZ|Swaziland
SE|Sweden
CH|Switzerland
SY|Syria
TW|Taiwan
TJ|Tajikistan
TZ|Tanzania
TH|Thailand
TL|Timor-Leste
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad and Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
TC|Turks and Caicos Islands
TV|Tuvalu
VI|U.S. Virgin Islands
UG|Uganda
UA|Ukraine
AE|United Arab Emirates
GB|United Kingdom
US|United States
UM|United States Minor Outlying Islands
UY|Uruguay
UZ|Uzbekistan
VU|Vanuatu
VA|Vatican
VE|Venezuela
VN|Vietnam
WF|Wallis and Futuna
EH|Western Sahara
YE|Yemen
ZM|Zambia
ZW|Zimbabwe
',
          'options_source' => 'countries',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'empty_option' => 'US',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 8,
        'machine_name' => 'mises_university_student_applica__country',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__mailing_address',
      ),
      'mises_university_student_applica__address' => array(
        'form_key' => 'address',
        'name' => 'Address',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 9,
        'machine_name' => 'mises_university_student_applica__address',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__mailing_address',
      ),
      'mises_university_student_applica__city' => array(
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'machine_name' => 'mises_university_student_applica__city',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__mailing_address',
      ),
      'mises_university_student_applica__state' => array(
        'form_key' => 'state',
        'name' => 'State',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'AL|Alabama
AK|Alaska
AS|American Samoa
AZ|Arizona
AR|Arkansas
CA|California
CO|Colorado
CT|Connecticut
DE|Delaware
DC|District of Columbia
FL|Florida
GA|Georgia
GU|Guam
HI|Hawaii
ID|Idaho
IL|Illinois
IN|Indiana
IA|Iowa
KS|Kansas
KY|Kentucky
LA|Louisiana
ME|Maine
MH|Marshall Islands
MD|Maryland
MA|Massachusetts
MI|Michigan
MN|Minnesota
MS|Mississippi
MO|Missouri
MT|Montana
NE|Nebraska
NV|Nevada
NH|New Hampshire
NJ|New Jersey
NM|New Mexico
NY|New York
NC|North Carolina
ND|North Dakota
MP|Northern Marianas Islands
OH|Ohio
OK|Oklahoma
OR|Oregon
PW|Palau
PA|Pennsylvania
PR|Puerto Rico
RI|Rhode Island
SC|South Carolina
SD|South Dakota
TN|Tennessee
TX|Texas
UT|Utah
VT|Vermont
VI|Virgin Islands
VA|Virginia
WA|Washington
WV|West Virginia
WI|Wisconsin
WY|Wyoming
',
          'options_source' => 'united_states',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'empty_option' => '- Select -',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 11,
        'machine_name' => 'mises_university_student_applica__state',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__mailing_address',
      ),
      'mises_university_student_applica__postal_code' => array(
        'form_key' => 'postal_code',
        'name' => 'Postal Code',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'maxlength' => 10,
          'width' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'machine_name' => 'mises_university_student_applica__postal_code',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__mailing_address',
      ),
      'mises_university_student_applica__mobile_number' => array(
        'form_key' => 'mobile_number',
        'name' => 'Mobile Number',
        'type' => 'phone',
        'value' => '',
        'extra' => array(
          'phone_default_country_code' => 1,
          'phone_int_max_length' => 15,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'disabled' => 0,
          'width' => '',
          'attributes' => array(),
          'description' => '',
          'placeholder' => '',
          'country' => 'ca',
          'phone_country_code' => 0,
          'ca_phone_separator' => '-',
          'ca_phone_parentheses' => 1,
        ),
        'required' => 0,
        'weight' => 6,
        'machine_name' => 'mises_university_student_applica__mobile_number',
        'mandatory' => 0,
        'page_num' => 1,
      ),
      'mises_university_student_applica__emergency_contact_information' => array(
        'form_key' => 'emergency_contact_information',
        'name' => 'Emergency Contact Information',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description_above' => 0,
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 7,
        'machine_name' => 'mises_university_student_applica__emergency_contact_information',
        'page_num' => 1,
      ),
      'mises_university_student_applica__emergency_contact_person' => array(
        'form_key' => 'emergency_contact_person',
        'name' => 'Emergency Contact Person',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 15,
        'machine_name' => 'mises_university_student_applica__emergency_contact_person',
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__emergency_contact_information',
      ),
      'mises_university_student_applica__emergency_contact_phone' => array(
        'form_key' => 'emergency_contact_phone',
        'name' => 'Emergency Contact Phone',
        'type' => 'phone',
        'value' => '',
        'extra' => array(
          'phone_default_country_code' => 1,
          'phone_int_max_length' => 15,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'disabled' => 0,
          'width' => '',
          'attributes' => array(),
          'description' => '',
          'placeholder' => '',
          'country' => 'ca',
          'phone_country_code' => 0,
          'ca_phone_separator' => '-',
          'ca_phone_parentheses' => 1,
        ),
        'required' => 0,
        'weight' => 17,
        'machine_name' => 'mises_university_student_applica__emergency_contact_phone',
        'mandatory' => 0,
        'page_num' => 1,
        'parent_machine_name' => 'mises_university_student_applica__emergency_contact_information',
      ),
      'mises_university_student_applica__page_2' => array(
        'form_key' => 'page_2',
        'name' => 'Page 2',
        'type' => 'pagebreak',
        'value' => '',
        'extra' => array(
          'next_page_label' => 'Next',
          'prev_page_label' => 'Previous',
          'private' => 0,
        ),
        'required' => 0,
        'weight' => 9,
        'machine_name' => 'mises_university_student_applica__page_2',
        'page_num' => 2,
      ),
      'mises_university_student_applica__school_or_university' => array(
        'form_key' => 'school_or_university',
        'name' => 'School or University',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'machine_name' => 'mises_university_student_applica__school_or_university',
        'page_num' => 2,
      ),
      'mises_university_student_applica__scan_of_student_photo_id' => array(
        'form_key' => 'scan_of_student_photo_id',
        'name' => 'Scan of Student Photo ID',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'scheme' => 'private',
          'directory' => 'student-id',
          'rename' => '[node:title]-[current-date:custom:U]',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 1,
          'wrapper_classes' => '',
          'css_classes' => '',
          'filtering' => array(
            'size' => '2 MB',
            'types' => array(
              0 => 'gif',
              1 => 'jpg',
              2 => 'jpeg',
              3 => 'png',
            ),
            'addextensions' => '',
          ),
          'progress_indicator' => 'throbber',
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 11,
        'machine_name' => 'mises_university_student_applica__scan_of_student_photo_id',
        'page_num' => 2,
      ),
      'mises_university_student_applica__major_program' => array(
        'form_key' => 'major_program',
        'name' => 'Major / Program',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 12,
        'machine_name' => 'mises_university_student_applica__major_program',
        'page_num' => 2,
      ),
      'mises_university_student_applica__current_degree_program' => array(
        'form_key' => 'current_degree_program',
        'name' => 'What is your current degree program?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'high_school|High School
associate|Associate
bachelors|Bachelor\'s
masters|Master\'s
jd|JD
doctorate|Doctorate
self_study|Self-Study',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 13,
        'machine_name' => 'mises_university_student_applica__current_degree_program',
        'page_num' => 2,
      ),
      'mises_university_student_applica__expected_degree_completion' => array(
        'form_key' => 'expected_degree_completion',
        'name' => 'Expected Degree Completion',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'jan_june_2016|Jan-June, 2016
july_dec_2016|July-Dec, 2016
jan_june_2017|Jan-June, 2017
july_dec_2017|July-Dec, 2017
jan_june_2018|Jan-June, 2018
july_dec_2018|July-Dec, 2018
jan_june_2019|Jan-June, 2019
july_dec_2019|July-Dec, 2019
after_2019|After 2019',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'empty_option' => '- Select -',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 14,
        'machine_name' => 'mises_university_student_applica__expected_degree_completion',
        'page_num' => 2,
      ),
      'mises_university_student_applica__letter_of_recommendation' => array(
        'form_key' => 'letter_of_recommendation',
        'name' => 'Letter of Recommendation',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description_above' => 0,
          'private' => 0,
          'css_classes' => '',
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
        ),
        'required' => 0,
        'weight' => 15,
        'machine_name' => 'mises_university_student_applica__letter_of_recommendation',
        'page_num' => 2,
      ),
      'mises_university_student_applica__letter_of_recommendation_upload' => array(
        'form_key' => 'letter_of_recommendation_upload',
        'name' => 'Letter of Recommendation',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'description' => 'Please upload a PDF of one letter of academic recommendation. If you do not have access to your letter of recommendation, please have the person writing it email it directly to pat@mises.org or fax to 734-448-8148.',
          'scheme' => 'private',
          'directory' => 'recommendation-letters',
          'rename' => '[node:title]-[current-date:custom:U]',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 1,
          'wrapper_classes' => '',
          'css_classes' => '',
          'filtering' => array(
            'size' => '2 MB',
            'types' => array(
              0 => 'pdf',
            ),
            'addextensions' => 'pdf',
          ),
          'progress_indicator' => 'throbber',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 25,
        'machine_name' => 'mises_university_student_applica__letter_of_recommendation_upload',
        'page_num' => 2,
        'parent_machine_name' => 'mises_university_student_applica__letter_of_recommendation',
      ),
      'mises_university_student_applica__unofficial_transcript' => array(
        'form_key' => 'unofficial_transcript',
        'name' => 'Unofficial Copy of Transcript',
        'type' => 'file',
        'value' => '',
        'extra' => array(
          'scheme' => 'private',
          'directory' => 'unofficial-transcript',
          'rename' => '[node:title]-[current-date:custom:U]',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 1,
          'wrapper_classes' => '',
          'css_classes' => '',
          'filtering' => array(
            'size' => '2 MB',
            'types' => array(
              0 => 'gif',
              1 => 'jpg',
              2 => 'jpeg',
              3 => 'png',
              4 => 'pdf',
            ),
            'addextensions' => 'pdf',
          ),
          'progress_indicator' => 'throbber',
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 26,
        'machine_name' => 'mises_university_student_applica__unofficial_transcript',
        'page_num' => 2,
        'parent_machine_name' => 'mises_university_student_applica__letter_of_recommendation',
      ),
      'mises_university_student_applica__page_3' => array(
        'form_key' => 'page_3',
        'name' => 'Page 3',
        'type' => 'pagebreak',
        'value' => '',
        'extra' => array(
          'next_page_label' => 'Next',
          'prev_page_label' => 'Previous',
          'private' => 0,
        ),
        'required' => 0,
        'weight' => 16,
        'machine_name' => 'mises_university_student_applica__page_3',
        'page_num' => 3,
      ),
      'mises_university_student_applica__dietary_choice' => array(
        'form_key' => 'dietary_choice',
        'name' => 'Please select your dietary choice',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'description' => 'Please select your dietary choice.',
          'items' => 'gluten_free-vegetarian|Gluten-free Vegetarian
none|No dietary restrictions',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 18,
        'machine_name' => 'mises_university_student_applica__dietary_choice',
        'page_num' => 3,
      ),
      'mises_university_student_applica__influential_books_publications' => array(
        'form_key' => 'influential_books_publications',
        'name' => 'Influential Books or Publications',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'List 5-10 books or publications that have influenced your intellectual development.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 19,
        'machine_name' => 'mises_university_student_applica__influential_books_publications',
        'page_num' => 3,
      ),
      'mises_university_student_applica__after_graduation_plans' => array(
        'form_key' => 'after_graduation_plans',
        'name' => 'After Graduation Plans',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Please share with us your plans for after your graduation from your current school or university.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 20,
        'machine_name' => 'mises_university_student_applica__after_graduation_plans',
        'page_num' => 3,
      ),
      'mises_university_student_applica__hope_to_attend' => array(
        'form_key' => 'hope_to_attend',
        'name' => 'Why I hope to Attend',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'In a few sentences, let us know why you hope to attend this event.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 21,
        'machine_name' => 'mises_university_student_applica__hope_to_attend',
        'page_num' => 3,
      ),
      'mises_university_student_applica__other_mises_institute_events_or_' => array(
        'form_key' => 'other_mises_institute_events_or_conferences',
        'name' => 'Other Mises Institute Events or Conferences',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'What other Mises Institute events or conferences have you attended if any?',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 22,
        'machine_name' => 'mises_university_student_applica__other_mises_institute_events_or_',
        'page_num' => 3,
      ),
      'mises_university_student_applica__how_find_out_about_this_event' => array(
        'form_key' => 'how_find_out_about_this_event',
        'name' => 'How did you find out about this event?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'mises_org|Mises.org website
facebook|Facebook
lew_rockwell|LewRockwell.com
professor|Professor
youtube|YouTube
family_friends|Family or friends
economic_research_network|Economic Research Network
students_for_liberty|Students for Liberty
ron_paul|Ron Paul
tom_woods|Tom Woods',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 23,
        'machine_name' => 'mises_university_student_applica__how_find_out_about_this_event',
        'page_num' => 3,
      ),
      'mises_university_student_applica__another_source' => array(
        'form_key' => 'another_source',
        'name' => 'Another Source',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 24,
        'machine_name' => 'mises_university_student_applica__another_source',
        'page_num' => 3,
      ),
      'mises_university_student_applica__other_information_essay' => array(
        'form_key' => 'other_information_essay',
        'name' => 'Other Information',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Use this space to provide any other information you would like us to know, such as a website you run, Facebook pages you manage, clubs with which you are involved, etc. ',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 25,
        'machine_name' => 'mises_university_student_applica__other_information_essay',
        'page_num' => 3,
      ),
      'mises_university_student_applica__request_dorm_room_share' => array(
        'form_key' => 'request_dorm_room_share',
        'name' => 'Request Dorm Room Share',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'If you know another applicant with whom you would like to share a dorm room during Mises University, enter his or her name here.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 26,
        'machine_name' => 'mises_university_student_applica__request_dorm_room_share',
        'page_num' => 3,
      ),
    ),
    'conditionals' => array(),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:1;}',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'Chad',
);
return $webforms;
}
