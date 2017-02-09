(function($, Drupal){
  /**
   * Move hero to main column on mobile
   */
  Drupal.behaviors.homepageHero = {
    attach: function(context, settings) {

      /*
      var overlay = $('.view-homepage-hero .overlay');
      if ( $.trim( overlay.html() ).length ) {
        overlay.show();
      }
      */

      // show homepage hero overlay, only if
      // not empty, go over each slide
      heroBlock = $('#views_slideshow_cycle2_main_homepage_hero-block');
      heroBlock.find('.overlay').each(function () {
        if ($.trim($(this).html()).length) {
          $(this).show();
        }
      });

      moveHeroBlock();
      $(window).resize(function () {
        moveHeroBlock();
      });

      function moveHeroBlock() {
        var heroBlock = $('#block-views-homepage-hero-block');
        var parentElement = heroBlock.parent();
        var screen_sm_min = 768;

        if (screen.width >= screen_sm_min) {
          if (!parentElement.hasClass('region-sidebar-second-top')) {
            heroBlock.css('margin-bottom', '1em');
            heroBlock.prependTo('.region-sidebar-second-top');
            blockLocation = 'side';
          }
        }
        else {
          if (parentElement.hasClass('region-sidebar-second-top')) {
            heroBlock.css('margin-bottom', '1em');
            heroBlock.prependTo('.main-container .container .row > section');
            blockLocation = 'main';
          }
        }

      }
    }
  };

})(jQuery, Drupal);
