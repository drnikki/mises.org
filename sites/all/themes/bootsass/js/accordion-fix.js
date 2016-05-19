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

      $('.view-book-content h3.accordion-toggle').click(function () {
        if ($(this).hasClass('collapsed') == false) {
          $(this).parent().parent().find('h3').each(function () {
            $(this).addClass('collapsed');
          });
          $(this).parent().parent().find('.chapter-intro').each(function () {
            $(this).slideDown();
          });
          $(this).parent().find('.subpage-content').each(function () {
            $(this).slideDown();
            $(this).parent().find('h4').each(function () {
              $(this).removeClass('collapsed');
            });
          });
        } else {
          $(this).parent().parent().find('h3').each(function () {
            $(this).removeClass('collapsed');
          });
          $(this).parent().parent().find('.chapter-intro').each(function () {
            $(this).slideUp();
          });
          $(this).parent().find('.subpage-content').each(function () {
            $(this).slideUp();
            $(this).parent().find('h4').each(function () {
              $(this).addClass('collapsed');
            });
          });
        }
      });

      $('.view-book-content h4.accordion-toggle').click(function () {
        if ($(this).hasClass('collapsed') == false) {
          $(this).addClass('collapsed');
          $(this).parent().find('.subpage-content').each(function () {
            $(this).parent().parent().find('.page-content').each(function () {
              $(this).slideDown();
            });
            $(this).slideUp();
          });
        } else {
          $(this).removeClass('collapsed');
          $(this).parent().find('.subpage-content').each(function () {
            $(this).parent().parent().find('.page-content').each(function () {
              $(this).slideUp();
            });
            $(this).slideDown();
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
          $(this).parent().parent().parent().find('h2').click();
          $(this).click();
          return;
        }
      });

       
    }
  };

})(jQuery, Drupal);
