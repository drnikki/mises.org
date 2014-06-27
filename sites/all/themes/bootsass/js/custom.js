/**
 * @file
 * custom.js
 *
 * Custom js for .
 */

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  Drupal.behaviors.customScript = {
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

        //var sidebarHeight = $("div.region-sidebar-second").height() + $("div.region-sidebar-second-top").height();
        var sidebarHeight = $(".sidebar").height();
        //console.log('sidebarHeight ' + sidebarHeight);
        $("div.main-content").css({ "min-height": sidebarHeight }); // Roger's magic!
        
      };
      
      var textResizer = function() {
        $('#text-resizer .btn').click(function(){
          //$(this).toggleClass('active');
          //$(this).siblings('.btn').toggleClass('active');
          if ($(this).hasClass('small')) {
            console.log('small on');
            $(this).addClass('active');
            $(this).siblings('.large').removeClass('active');
            $('.body-content').removeClass('large').addClass('normal');
          } else {
            console.log('large on');
            $(this).addClass('active');
            $(this).siblings('.small').removeClass('active');
            $('.body-content').removeClass('normal').addClass('large');
          }
        });
      };
      
      $(document).ready(function() {
        implementEqualHeight();
        textResizer();
        
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
              if ($(this).outerHeight() > options.minHeight) options.minHeight= $(this).outerHeight();
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