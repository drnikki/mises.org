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
      $('.view-book-content .accordion-toggle').click(function () {
        if ($(this).hasClass('collapsed') == false) {
          $(this).parent().parent().find('h3').each(function () {
            $(this).addClass('collapsed');
          });
        }
      });
    }
  };

})(jQuery, Drupal);
