/**
 * Causes selected solr facets to appear as clickable tags at the top of the content area.
 */

var Drupal = Drupal || {};

(function($, Drupal) {
  'use strict';

  Drupal.behaviors.solrTopFacets = {
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
               if ($(this).text().length > 1) {
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
