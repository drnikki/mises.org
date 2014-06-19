(function ($) {

Drupal.behaviors.nsMediaSEOElement = {
  attach: function (context, settings) {
    // For each widget (in case of multi-entry)
    $('.media-widget', context).once('nsMediaSEOMediaBrowserLaunch', function () {
      var options = settings.media.elements[this.id];
      globalOptions = {};
      if (options.global != undefined) {
        var globalOptions = options.global;
      }
      //options = Drupal.settings.media.fields[this.id];
      var fidField = $('.fid', this);
      var previewField = $('.preview', this);
      var removeButton = $('.remove', this); // Actually a link, but looks like a button.
      var altField = $('.alt-text', this);
      var titleField = $('.title-text', this);

      // Show the Remove button if there's an already selected media.
      if (fidField.val() != 0) {
        altField.show();
        titleField.show();
      }
      else {
        altField.hide();
        titleField.hide();
      }

      // Unbind the launcher 'click' event handler provided by the Media module. We will provide our own
      // customized version below instead.
      $('.launcher', this).unbind('click');
      
      // When someone clicks the link to pick media (or clicks on an existing thumbnail)
      $('.launcher', this).bind('click', function () {
        // Launch the browser, providing the following callback function
        // @TODO: This should not be an anomyous function.
        Drupal.media.popups.mediaBrowser(function (mediaFiles) {
          if (mediaFiles.length < 0) {
            return;
          }
          var mediaFile = mediaFiles[0];
          // Set the value of the filefield fid (hidden).
          fidField.val(mediaFile.fid);
          // Set the preview field HTML.
          previewField.html(mediaFile.preview);
          // Show the Remove button.
          removeButton.show();
          // Show Alt/Title fields.
          altField.show();
          titleField.show();
        }, globalOptions);
        return false;
      });

      // When someone clicks the Remove button.
      $('.remove', this).bind('click', function () {
        altField.hide();
        titleField.hide();
        return false;
      });
    });
  }
};

})(jQuery);