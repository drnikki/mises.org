(function($){

  Drupal.behaviors.displaySuiteSharedCounter = {
    attach: function (context, settings) {
      // var trimLength = Drupal.settings.displaySuiteShared.trimLength;
      var trimLength = 152;   
      CKEDITOR.on('instanceReady', function(e) {
          if (e.editor.name === 'edit-field-teaser-text-und-0-value') {
            if ($('.field-name-field-teaser-text .mises-countdown').length < 1) {
              $('.field-name-field-teaser-text').append('<div class="mises-countdown">' + '</div>');
            }
            $('.mises-countdown').css('color', 'green');
            $('.mises-countdown').css('fontWeight', 'bold');
            updateCountdown(trimLength);
            e.editor.on('key', function(e) {
              updateCountdown(trimLength);
            });
          }
      });

    }
  };

  function updateCountdown(trimLength) {
      var fullText = CKEDITOR.instances['edit-field-teaser-text-und-0-value'].getData();
      // remove all html from string
      fullText = fullText.replace(/(<([^>]+)>)/ig,"");
      // convert all &nbsp; to spaces
      fullText = fullText.replace(/&nbsp;/g, " ");
      console.log(fullText);
      var remaining = trimLength - fullText.length;
      $('.mises-countdown').text(remaining + ' characters remaining before teaser trim');
      if (remaining < 0) {
        $('.mises-countdown').css('color', 'red');
      }
      else {
        $('.mises-countdown').css('color', 'green');
      }
  }

}(jQuery));