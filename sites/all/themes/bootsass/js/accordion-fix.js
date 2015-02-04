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
      var tmpFrag = window.location.hash.replace('#', '');
      tmpFrag = decodeURIComponent((tmpFrag + '').replace(/\+/g, '%20'));
      $('h2.teaser-title').each(function () {
        if ($(this).text() == tmpFrag) {
          $(this).click();
          return;
        }
      });

      $('h3.sub-heading').each(function () {
        if ($(this).text() == tmpFrag) {
          $(this).parent().parent().parent().parent().parent().find('h2').click();
          $(this).click();
          return;
        }
      });

       
    }
  };

})(jQuery, Drupal);
