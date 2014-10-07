/**
 * Improves usability and presentation of the Solr Results page facets:
 * - Replace "Static Page" label with "Information Page"
 * - Hide the "Legacy Book" facet and cause it to be checked or unchecked when
 *   "Book / Digital Text" is checked or unchecked.
 */

var Drupal = Drupal || {};

(function($, Drupal) {
  'use strict';

  Drupal.behaviors.solrFacetChanges = {
    attach: function(context) {
       $('body.page-search #search-form #edit-basic').before('<div id="solr-facet-tags"></div>');
       var facetCount = 0;
       var facetName = '';
       $('body.page-search .block-facetapi a').each(function () {
         var ggParent = $(this).parent().parent().parent();
         ggParent.children('h2').each(function () {
           facetName = $(this).text();
         });

         if ($(this).hasClass('facetapi-active')) {
           var facetParent = $(this).parent();
           facetParent.contents().each(function () {
             if ($(this).prop('tagName') === undefined) {
               if ($(this).text().length > 1 && facetName != 'Content type' && facetName != 'Audience' &&
                 !(facetName == 'Media type' && ($(this).text() == 'Quotes' || $(this).text() == 'Online Texts'))
               ) { 
                 $('#solr-facet-tags').append('<div id="facet-tag-' + facetCount +
                   '" class="facet-tag btn btn-white btn-sm"> <span class="glyphicon glyphicon-remove"></span>' + $(this).text() + '</div>');
                 $('#facet-tag-' + facetCount).click(function () {
                   facetParent.children('input.facetapi-checkbox').click();
                 });
                 facetCount++;
               }
             }
           });
         }
       });


    }
  };

})(jQuery, Drupal);
