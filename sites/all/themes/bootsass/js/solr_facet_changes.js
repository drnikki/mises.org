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
      $('.block-facetapi ul li a').each(function () {
        $(this).contents().each(function () {
          if ($(this).prop('tagName') === undefined) {
            if ($(this).text().indexOf('Online Text') != -1 || $(this).text().indexOf('Quotes') != -1) {
              $(this).parent().parent().remove();
            }
          }
        });
      });
    }
  };

})(jQuery, Drupal);
