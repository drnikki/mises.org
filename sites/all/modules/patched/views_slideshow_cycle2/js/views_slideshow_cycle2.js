(function($) {
  Drupal.behaviors.viewsSlideshowCycle2 = {
    attach: function(context) {
      $('.views-slideshow-cycle2-main-frame').cycle();
    }
  };
})(jQuery);