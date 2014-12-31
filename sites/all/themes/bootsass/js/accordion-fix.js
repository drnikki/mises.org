/**
 * Cause accordion arrow to initially show arrow glyphs pointing right:
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";
      
  Drupal.behaviors.accordFix = {
    attach: function(context) {
      $('.view-book-content .accordion-toggle').each(function () {
        $(this).addClass('collapsed');
      });
    }
  };


})(jQuery, Drupal);
