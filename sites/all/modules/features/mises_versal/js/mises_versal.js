(function($){

  $(window).load(function(){
    var requiredIframe;
    console.log('before');
    var elementDocument = $(".player-container.versal-player").prop("ownerDocument");

    var iframeOwner = $("iframe").filter(function() {
      return this.contentDocument == elementDocument;
    });
    console.log(iframeOwner);
    console.log('after');
  });

})(jQuery);