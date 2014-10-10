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
      var hiddenFacets = [
        "Online Text",
        "Online Texts",
        "Quotes",
        "Online Text",
        "Static Page",
        "Institute Fellowship",
        "Campaign",
        "Membership Level",
        "Scholarship",
        "Job Posting"];
      $('.block-facetapi ul li a').each(function () {
        $(this).contents().each(function () {
          if ($(this).prop('tagName') === undefined) {
            var facet = $(this).text().split('(');
            facet = $.trim(facet[0]);
            var inHide = $.inArray(facet,hiddenFacets);
            if (inHide != -1) {
              $(this).parent().parent().remove();
            }
          }
        });
      });
    }
  };

})(jQuery, Drupal);
