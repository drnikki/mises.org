/**
 * @file
 * custom.js
 *
 * Custom js for Mises main site.
 */

// To overcome conflict with Causeview jquery version
jQuery.noConflict();

var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";

  Drupal.behaviors.customScript = {
    attach: function(context) {
      // Custom scrips here.

      // trick disqus into thinking it has not checked for comments yet when loading script on ajax
      window.DISQUSWIDGETS = undefined;
      $.ajax({
        type: 'GET',
        url: '//crossco.disqus.com/count.js',
        dataType: 'script',
        cache: false
      });

      var implementEqualHeight = function() {
        $('.content-bottom .region .img-responsive').equalHeight();
        $('.content-bottom .region .panel-heading .panel-title').equalHeight();
        $('.content-bottom .region .panel-body').equalHeight();
        $('.content-bottom .region .panel-footer').equalHeight();
        $('.bottom-blocks .img-responsive').equalHeight();
        $('.bottom-blocks .panel-heading .panel-title').equalHeight();
        $('.bottom-blocks .panel-body').equalHeight();
        $('.bottom-blocks .panel-footer').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .img-responsive').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-heading .panel-title').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-body').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4 .panel-footer').equalHeight();
        $('.latest-library-content .views-row > .col-sm-4').equalHeight();
        $('.bottom-blocks .view-mises-library').equalHeight();
        $('.row.featured .col-xs-6 .img-responsive').equalHeight();
        $('.row.featured .col-xs-6 .panel-heading .panel-title').equalHeight();
        $('.row.featured .col-xs-6 .panel-body').equalHeight();
        $('.row.featured .col-xs-6 .panel-footer').equalHeight();
        $('.row.featured .col-xs-6').equalHeight();
        $('.row.video .col-xs-6 .img-responsive').equalHeight();
        $('.row.video .col-xs-6 .panel-heading .panel-title').equalHeight();
        $('.row.video .col-xs-6 .panel-body').equalHeight();
        $('.row.video .col-xs-6 .panel-footer').equalHeight();
        $('.row.video .col-xs-6').equalHeight();

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
            //console.log('small on');
            $(this).addClass('active');
            $(this).siblings('.large').removeClass('active');
            $('.body-content').removeClass('large').addClass('normal');
          } else {
            //console.log('large on');
            $(this).addClass('active');
            $(this).siblings('.small').removeClass('active');
            $('.body-content').removeClass('normal').addClass('large');
          }
        });
      };
      
      var homeFeature = function() {
        // Homepage Featured equal height
        if ($(document).width() > 768) {
          var bannerHeight = $('.front .region-featured-left').outerHeight();
          if (bannerHeight === 0) {
            bannerHeight = 359;
          }
          $('.front .region-featured-right').css({
            'height': bannerHeight,
          });
        } else {
          $('.front .region-featured-right').css({
            'height': 'auto',
          });
        }

      };
      
      // Filtered landing page submit wrapper.
      var filteredSubmit = function() {
        $('.landing-list .views-submit-button, .landing-list .views-reset-button').addClass('landing-submit');
        $('.landing-submit').wrapAll('<div class="filtered-submit"></div>');
      };
      filteredSubmit();

      // Home Page Hero slideshow
      var homeHero = function() {
        var hhPager = $('#widget_pager_bottom_homepage_hero-block > div');
        var hhPagerWidth = (100 / $(hhPager).length) + '%';
        //console.log(hhPagerWidth);
        $(hhPager).each(function () {
          $(this).css('width',hhPagerWidth);
        });
        $('.views-slideshow-controls-text-previous').html('<span class="glyphicon glyphicon-chevron-left"></span>');        
        $('.views-slideshow-controls-text-next').html('<span class="glyphicon glyphicon-chevron-right"></span>');        
      };
      homeHero();
      
      // Filtered Journals -- connect .filter-triggers to options
      var journalsFilters = function() {
        $('#edit-journal option').each(function() {
          var link = $(this).text();
          var start = link.substr(0,1);
          var second = link.substr(1,1);
          if (second === '-') {
            link = link.substr(2);
          } else if (start === '-'){
            link = link.substr(1);
          }
          $(this).text(link);
          if ($(this).attr('selected') === 'selected') {
            var selectedValue = $(this).attr('value');
            var featured = ['541','151'];
            var test = $.inArray(selectedValue,featured);
              if ($.inArray(selectedValue,featured) >= 0) {
                var relatedTrigger = $('a[href="#edit-journal"][data-select="'+selectedValue+'"]');
                $(relatedTrigger).addClass('active');
              }
          }
        });
      };
      
      // Journals Trigger 
      var editJournalTrigger = function() {
        if ($('#edit-journal').length) {
          var $journal = $('#edit-journal');
          $('a[href="#edit-journal"]').click(function () {
            //console.log('clicked filter trigger');
            if ($(this).hasClass('active')) {
              $(this).removeClass('active');
              $journal.val('All');
              $journal.siblings('.selectBox').removeClass('hidden');
            } else {
              $(this).addClass('active').siblings('a').removeClass('active');
              $journal.val( $(this).data('select') );
              $journal.siblings('.selectBox').addClass('hidden');
            }
            $('#edit-submit-filtered-landing-term-page').trigger('click');
          });
        }
      };
      
      // Books filter fields manipulation
      var booksFilters = function(){
        if ($('#edit-book-type-wrapper').length) {
          $('#edit-book-type-wrapper').insertBefore('.views-exposed-widgets');
        }
        if ($('.views-widget-sort-by').length) {
          $('.views-widget-sort-by').insertBefore('.views-exposed-widgets').addClass('show');
        }
      };
      
      // Daily today's article
      var dailyToday = function() {
        var date = new Date();
        var y = date.getFullYear();
        var m = date.getMonth() + 1;
        var d = date.getDate();
        $('.daily-filtered .views-row.date-'+y+'-'+m+'-'+d).addClass('today');
      };
      dailyToday();
      
      // Hide unneeded search-labels
      var hideSearchLabels = function() {
        var h1 = $('h1.page-header').text();
        $('.search-label').each(function(i){
          var label = $(this).text();
          var labelParent = $(this).parents('.node-teaser');
          if ((h1 == label) || (/*h1 == 'Mises Wire' &&*/ label == 'Blog') || (h1 == 'Mises Weekends' && label == 'Audio/Video')) {
            $(this).addClass('hidden');
            if (/*h1 == 'Mises Wire' &&*/ label == 'Blog') {
              if (typeof(labelParent)) {
                if (labelParent.hasClass('mises-wire-blog')) {
                  var targetDiv = $(this).parent('.group-date-author').children('.date');
                  $(this).html('Mises Wire');
                  $(this).insertAfter(targetDiv);
                  $(this).removeClass('hidden');
                }
              }
            }
          }
        });
      };

      // Hide Flexslider if there are no images ... Flexslider should do this, but it doesn't.
      var hideFlexslider = function() {
        var fS = $('.flexslider-processed ul li');
        if (fS.length > 0) {
          var fSlength = $(fS).html().length;
          console.log('function flexslider length', fSlength);
          if (fSlength === 0) {
            console.log('remove it!');
            $(fS).parents('#slideshow').addClass('hidden');
          }
        }
      };

      var implementDotDotDot = function(element, height) {
        if (element.length > 0) {
          element.dotdotdot({
            ellipsis  : '... ',
            wrap    : 'word',
            fallbackToLetter: true,
            after   : null,
            watch   : false,
            height    : height,
            tolerance : 0,
            callback  : function( isTruncated, orgContent ) {},      
            lastCharacter : {
              remove    : [ ' ', ',', ';', '.', '!', '?' ],
              noEllipsis  : []
            }
          });
        }
      }


      $(document).ready(function() {
        // profile expand / close
        $( "#block-mises-utility-mises-related-profiles .block-title" ).addClass('teaser-title accordion-toggle collapsed');
        $('.mises-related-profiles').toggle();
        $('#block-mises-utility-mises-related-profiles .block-title').click(function(e) {
          e.preventDefault();
          $('.mises-related-profiles').slideToggle();
          $('#block-mises-utility-mises-related-profiles .block-title').toggleClass('collapsed');
        });
        

        // jQuery Nested Accordion on Library Item Menu and Book Sidebar Menus http://www.adipalaz.com/experiments/jquery/nested_accordion.html
        $('.view-library-items-menu.accordion').attr('id','library-menu').find('ul').addClass('accordion nav');
        $('.book-content-toc').attr('id','library-menu').find('ul').addClass('accordion nav');
        $('#library-menu.accordion').accordion({
          iconTrigger: true,
          activeLink: true,
          initShow: "#current",
          uri: 'relative',
          splitUrl: '/'
        }).show();

        // Static Menu on Filtered Journals - may be used for others in the future
        $('.view-library-items-menu.static').attr('id','library-menu').find('ul').addClass('nav');
        $('#library-menu.filtered-journals .nav > li.first ul').addClass('hidden');
        $('#library-menu.filtered-journals .nav > li:nth-child(2) ul ul').addClass('hidden');
        $('#library-menu.filtered-journals').show();
        

        //glyphicons
        $('.latest-library-content .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.row.featured .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.row.video .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ').append(' Videos');
        $('.latest-mises-video .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.featured-video .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.featured-block.video .panel-footer a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> Browse ');
        $('.field-collection-item-field-resources .read-more a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> ');
        $('.more-link a').prepend('<span class="glyphicon glyphicon-chevron-right"></span> ');
        $('.block-mailchimp-lists h2.block-title').contents().unwrap().wrap('<div class="panel-heading single"><div class="panel-title"></div></div>');
        $('.block-custom-search-blocks h2.block-title').contents().unwrap().wrap('<div class="panel-heading single"><div class="panel-title"></div></div>');
        $('a.external-link:not(:has(.glyphicon-new-window))').append('<span class="glyphicon glyphicon-new-window"></span> ');
        $('.social-media-categories a').append('<span class="glyphicon glyphicon-new-window"></span> ');
        $('.view-giving-stories .panel-footer a').append(' <span class="glyphicon glyphicon-chevron-right"></span> ');
        
        // Bootstrap collapse/accordion scroll Reference: http://www.bootply.com/101026
        $('#book-html').on('shown.bs.collapse', function () {
          var panel = $(this).find('.in');
          $('html, body').animate({
                scrollTop: panel.offset().top - 100
          }, 500);
        });
        
        // Bootstrap collapse open pages and reopen chapter content when chapter is closed 
        $('#book-html').on('hidden.bs.collapse', function () {
          var hiddenToggle = $(this).find('h2.collapsed');
          var hiddenPanel = $(hiddenToggle).parents('.panel');
          $(hiddenPanel).find('.in').collapse('hide');
          $(hiddenPanel).find('.chapter-intro').collapse('show');
        });
        
        textResizer();
        hideSearchLabels();
       
        // adjust letter-spacing before and after trim due to mysterious issue
        $('.view-mode-teaser .teaser-title').css('letterSpacing', -2);
        try {
          //implementDotDotDot($('.view-mode-teaser .teaser-title'), 50);
          $('.view-mode-teaser .teaser-title').css('letterSpacing', 0);
        }
        catch(err) {
          $('.view-mode-teaser .teaser-title').css('letterSpacing', 0);
        }

        //implementDotDotDot($('.view-mode-teaser .body-content'), 70);

        //Smooth scrolling
        $(function() {
          $('a[href*=#]:not([href=#])').click(function() {
            if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
              var target = $(this.hash);
              target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
              if (target.length) {
                $('html,body').animate({
                  scrollTop: target.offset().top
                }, 1000);
                return false;
              }
            }
          });
        });
        
      });
      
       
      $(window).load(function() {
        implementEqualHeight();
        homeFeature();
        
        // Filtered Term Landing
        booksFilters();
        
        if ($('.filter-triggers').length) {
          $('.filter-triggers').prependTo($('.views-exposed-widgets'));
        }
        
        journalsFilters();
        editJournalTrigger();


        $('select:not(#edit-book-type):not(#edit-title)').selectBox({
            menuSpeed: 'fast'
        });
        
        hideFlexslider();
        
      });      

      $(window).resize(function() {
        implementEqualHeight();
        homeFeature();

      });      

      $(document).ajaxComplete(function() {
        //console.log("Ajax complete");
        implementEqualHeight();
        booksFilters();
        journalsFilters();
        editJournalTrigger();
        
        $('select:not(#edit-book-type):not(#edit-title)').selectBox({
            menuSpeed: 'fast'
        });
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
              //console.log($(this).height(), '<height outerHeight>', $(this).outerHeight());
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
