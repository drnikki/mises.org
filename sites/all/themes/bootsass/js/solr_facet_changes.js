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
      var staticLabelApplied = false;
      $('.block-facetapi').each(function () {
        var isContentTypeFacet = false;
        $(this).find('ul.facetapi-facet-bundle li a.facetapi-checkbox-processed').each(function () {
          var itemHTML = $(this).contents().first()[0].textContent;
          if (itemHTML.indexOf('Static Page') != -1) {
            $(this).contents().first()[0].textContent = $(this).contents().first()[0].textContent.replace('Static Page', 'Information Page');
            staticLabelApplied = true;
          }
          else if (itemHTML.indexOf('Legacy Book') != -1) {
            $(this).parent().remove();
          }
        });
        if (staticLabelApplied == false) {
          staticLabelApplied = true;
          $(this).find('li').each(function () {
            if ($(this).html().indexOf('Static Page') != -1) {
              $(this).contents().last()[0].textContent = $(this).contents().last()[0].textContent.replace('Static Page', 'Information Page');
            }
          });
        }

      });
    }
  };

})(jQuery, Drupal);
