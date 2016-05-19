/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

CKEDITOR.editorConfig = function( config )
{
	// Define changes to default configuration here. For example:
	// config.language = 'fr';
	// config.uiColor = '#AADC6E';

  // Use Bootstrap alignment classes
  config.justifyClasses = [ 'text-left', 'text-center', 'text-right', 'text-justify' ];
  // Custom Indent classes
  config.indentClasses = ['indent1', 'indent2', 'indent3'];
	
};

CKEDITOR.addStylesSet( 
	'drupal', 
	[ 
		/* Block Styles */ 
			{ name : 'Heading 2 BloodRed' , element : 'h2' }, 
			{ name : 'Heading 3' , element : 'h3' }, 
			{ name : 'Heading 4' , element : 'h4' }, 
			{ name : 'Paragraph' , element : 'p' }, 
			{ name : 'Green Button', element : 'div', attributes : { 'class' : 'ncbc-green-button' } }, 
			{ name : 'Blue Image Button', element : 'div', attributes : { 'class' : 'ncbc-image-button' } }, 
		/* Inline Styles */ 
			{ name : 'Inline Quotation' , element : 'q' }, 
		/* Object Styles */ 
			{ name : 'Highlighted Row', element : 'tr', attributes : { 'class' : 'ncbc-highlighted-row' } } 
	]
);