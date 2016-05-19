/**
 * @file
 * custom.js
 *
 * Custom js for Giving Pages.
 */

// To overcome conflict with Causeview jquery version
jQuery.noConflict();

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";
      

  Drupal.behaviors.givingScript = {
    attach: function(context) {
      // Custom scrips here.
      
      var implementEqualHeight = function() {
        $('.content-bottom .region .panel-heading .panel-title').equalHeight();
        $('.content-bottom .region .panel-body').equalHeight();
        $('.content-bottom .region .panel-footer').equalHeight();
        $('.bottom-blocks .panel-heading .panel-title').equalHeight();
        $('.bottom-blocks .panel-body').equalHeight();
        $('.bottom-blocks .panel-footer').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-heading .panel-title').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-body').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-footer').equalHeight();
        $('.bottom-blocks .view-mises-library').equalHeight();
        $('.row.featured .col-xs-6').equalHeight();
        $('.row.featured .col-xs-6 .panel-heading .panel-title').equalHeight();
        $('.row.featured .col-xs-6 .panel-body').equalHeight();
        $('.row.featured .col-xs-6 .panel-footer').equalHeight();
        $('.row.video .col-xs-6').equalHeight();
        $('.row.video .col-xs-6 .panel-heading .panel-title').equalHeight();
        $('.row.video .col-xs-6 .panel-body').equalHeight();
        $('.row.video .col-xs-6 .panel-footer').equalHeight();
        $('.profile-item').equalHeight();

        var sidebarHeight = $(".sidebar").height();
        $("div.main-content").css({ "min-height": sidebarHeight }); // Roger's magic!
      };
      
      $(document).ready(function() {
        implementEqualHeight();
        
        //glyphicons
        $('.latest-library-content .panel-footer a,').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.row.featured .panel-footer a,').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.row.video .panel-footer a,').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.featured-block.video .panel-footer a,').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.field-collection-item-field-resources .read-more a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> ');
        $('.more-link a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> ');
        $('.block-mailchimp-lists h2.block-title').contents().unwrap().wrap('<div class="panel-heading single"><div class="panel-title"></div></div>');
        $('#block-custom-search-blocks-1 h2.block-title').contents().unwrap().wrap('<div class="panel-heading single"><div class="panel-title"></div></div>');
        $('a.external-link').append('<span class="glyphicon glyphicon-new-window"></span> ');
        $('.social-media-categories a').append('<span class="glyphicon glyphicon-new-window"></span> ');
        $('.view-giving-stories .panel-footer a').append(' <span class="glyphicon glyphicon-chevron-right"></span> ');
        
        
        
      }); 


      $(window).resize(function() {
        implementEqualHeight();
      });      
      
      
    }
  };


})(jQuery, Drupal);



//this closure reserves the $.
(function ($) {   
  $.fn.extend({        
    equalHeight: function (options) {
      //set default height to 0 or auto
      var defaults = {
          height:null,
          minHeight: 0,
          maxHeight: null               
      };
      //merge options
      options = $.extend(defaults, options);
      //cache the children (is this the parent or a group of elements)
      var children = (this.length > 1) ? this : this.children();             
      if(options.height !== null){
          //if specific height is set
          children.height(options.height);
      }else{
          //set the height to auto which releases the boxes heights
          children.css('height', 'auto');
          //loop though the elements and get their heights
          children.each(function () {            
              //if bigger than the default set to default
              if ($(this).height() > options.minHeight) options.minHeight= $(this).height();
              //if maxheight is set
              if(options.maxHeight !== null){
                  if(options.minHeight > options.maxHeight) options.minHeight= options.maxHeight;
              }
          });
          //set the height on all the children
          children.height(options.minHeight);
      }
      //return this so the jQuery chain is preserved
      return this;
    }
   });  
})(jQuery);