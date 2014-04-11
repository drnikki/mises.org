/*! Spyglass - 0.0.1 */

/*!
  SPYGLASS
  ==============================
  Simple Search Results with EmberJS
*/

SG = Em.Namespace.create();

var utils = {};

// Query Parsing

utils.parseQueryString = function(queryString) {
  var queryArray = queryString.split('&');
  var obj = {}

  for (var i = 0; i < queryArray.length; i++) {
    var valuePairs = queryArray[i].split('='),
        key = decodeURI(valuePairs[0]),
        value;

    if (key === 'fq') {
      value = this.parseFqString(valuePairs[1]);
    } 
    else {
      value = decodeURI(valuePairs[1]);
    }

    obj[key] = value;
  }

  return obj;
};

utils.returnSearchHash = function(q, facets, sort) {
  var urlArray = [];
  
  if (q && q !== '') {
    urlArray.push('q=' + q.toString());
  }
  
  if (facets && facets !== '') {
    urlArray.push('fq=' + facets.replace(/\//g, '::'));
  } 

  if (sort && sort !== '') {
    urlArray.push('sort=' + sort);
  } 

  return encodeURI(urlArray.join('&'));
};

utils.parseFqString = function(fqString) {
  

  var fqArray = decodeURIComponent(fqString.toString()).replace(/\::/g, '/').split(','),
      obj = {},
      r = new RegExp("[:]+(?![^[]*])");

  

  for (var i = 0; i < fqArray.length; i++) {
    var s = fqArray[i].split(r),
        key = s[0],
        value = s[1] ? s[1] : false;
    
    if (!value) {
      return;
    }

    if (obj[key]) {
      var currentValue = obj[key];

      if (!Array.isArray(currentValue)) {
        obj[key] = [currentValue, value];
      }
      else {
        obj[key].push(value);
      }
    }
    else {
      obj[key] = value;
    }
  }

  
  return obj;
};


// Dates

utils.formatISODate = function (timestamp, format) {
  
  // TODO: Make sure parsed time = original
  var t = timestamp.toString();

  var dd     =  t.slice(8, 10),
      mm     =  t.slice(5, 7),
      yyyy   =  t.slice(0, 4),
      h      =  t.slice(11, 13),
      m      =  t.slice(14, 16),
      s      =  t.slice(17, 19),
      months =  ["Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"]
  ;

  if (format === 'date') {
    return months[Number(mm) - 1] + ' ' + Number(dd) + ', ' + yyyy;
  }
  else if (format === 'year') {
    return yyyy;
  }
};

$(document).ready(function() {
  // Detect when close to the bottom of the page and load more results 
  $(window).scroll(function(){
    var distanceToBottom = $(document).height() - $(window).scrollTop(),
        windowHeight = $(window).height(),
        allResultsLoaded = App.searcher.get('allResultsLoaded');

    if (!allResultsLoaded && !App.searcher.isSearching && window.location.hash.indexOf("search") > -1 && distanceToBottom < windowHeight + 360 ) {
      App.searcher.loadNextResults();
    }
  });
});

/*
  SEARCHERS
  ==============================
  SG.Searcher is a generic class that sets up some good default items and functions. This class will be extended to create searchers that are specific to a given search type such as Solr or ElasticSearch.
*/

SG.Searcher = Em.ObjectController.extend({
  params: {},
  url: null, // User must specify a url!
  searchResponse: null,
  isSearching: null,
  responseTime: null,
  submitSearch: function (params) {
    if (this.params.q) {
      this.params.start = 0;
      if (params !== 'sort') {this.clearFacets();}
      

      var urlHash = '/search/' + utils.returnSearchHash(this.params.q, this.getSelectedFacets(), this.params.sort);
      window.location.hash = urlHash;      
    } 
  },
  numFound: function() {
    var formatNumber = function (n) {
      return n.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");      
    };

    if (this.searchResponse) {
      var numFound = this.searchResponse.response.numFound;
      return numFound.toString().length < 3 ? numFound : formatNumber(numFound);
    } else {
      return false;
    }
  }.property('searchResponse'),
  allResultsLoaded: function(){
    var numFound = parseInt(this.get('numFound').toString().replace(/[^0-9]/g, ''), 10);
    // 
    
    if (this.params.start < numFound || !numFound) {
      return false;
    } 
    return true;
  }.property('numFound', 'isSearching'),
  noResults: function() {
    var numFound = parseInt(this.get('numFound').toString().replace(/[^0-9]/g, ''), 10);

    if (numFound === 0 && !this.isSearching) {
      return true;
    }
    return false;
  }.property('numFound', 'isSearching'),
  searchedFor: null,
  search: function() {
    var self = this;
    
    self.set("isSearching", true);
    self.set('searchedFor', self.params.q);
    self.set("responseTime", new Date().getTime());

    $.ajax({
      url: this.url,
      data: this.params,
      traditional: true,
      cache: true,
      success: function(data) {
        self.set('isSearching', false);

        var now = new Date().getTime();
        self.set("searchResponse", data);
        self.success();

        // self.set('searchedFor', self.params.q);
        self.set('responseTime', now - self.responseTime);
        // 
      },
      statusCode: {
        400: function() {
          self.set('isSearching', false);
          throw "Search Error";
        }
      },
      dataType: 'jsonp',
      jsonp: 'json.wrf',
      beforeSend: function(j, s) {
      
      }
    });
  },
  loadNextResults: function() {
    var allResultsLoaded = this.get('allResultsLoaded'),
        noResults = this.get('noResults'),
        isSearching = this.get('isSearching');

    if (!allResultsLoaded && !noResults && !isSearching) {
      this.search();
    }
  },
  setQuery: function () {
    throw "Implement a setQuery method for your searcher";
  },
  addFacet: function (field, value) {
    throw "Implement an addFacet method for your searcher";
  },
  getResults: function () {
    throw "Implement a getResults method on your searcher";
  },
  getFacets: function () {
    throw "Implement a getFacets method on your searcher";
  },
  getHighlights: function () {
    throw "Implement a getFacets method on your searcher";
  },
  success: function () {
    throw "Implement a success method on your searcher";
  }
});

// Solr Searcher
SG.SolrSearcher = SG.Searcher.extend({
  params: {
    wt: 'json',
    fq: []
  },
  setQuery: function (query) {
    var formattedQuery = query.replace(/( and | not | or )/g, function(s) {return s.toUpperCase();});

    this.params.q = formattedQuery;
  },
  // addFacet: function (field, value) {
  //   this.params.fq.push(field +':'+ value);
  // },
  getResults: function () {
    

    return this.searchResponse.response.docs;
  },
  getHighlights: function () {
    return this.searchResponse.highlighting;
  },
  getFacets: function() {

    var self = this;

    // Solr has an unusual formatting for the facets
    // This places them in a more accessible format
    var formatFacets = function(fieldName, rawFacetValues) {
      var tempFacetValues = [];
      for (var i=0; i < rawFacetValues.length; i+=2) {
        var value = rawFacetValues[i];
        var count = rawFacetValues[i+1];
        var f = fieldName;
        if (count > 0) {

          tempFacetValues.push({
            value: value, 
            count: count, 
            fieldName: fieldName, 
            selectFacet: function() {
              self.addFacet(this.fieldName, '"' + this.value + '"', true);
            }
          });
        }
      }
      return tempFacetValues;
    };

    var facets = [];

    var rawFacetFields = this.get('searchResponse').facet_counts.facet_fields;
    for (var facetField in rawFacetFields) {
      var facetObject = {
        facetField: facetField,
        facets: []
      };
      // 
      facetObject.facets = formatFacets(facetField, rawFacetFields[facetField]);
      facets.push(facetObject);

    }


    var getTimeRange = function (timestamp) {
        var start = timestamp,
            year = Number(start.slice(0,4)) + 1,
            end = start.substring(0, 4) + '-12-31T23:59:59Z'
        ;
        return '['+start+' TO '+end+']';
    };


    var formatDateFacets = function(fieldName, rawFacetValues) {
      var tempFacetValues = [];

      for (var rawFacetValue in rawFacetValues) {
        
        // if (rawFacetValue === 'gap' || rawFacetValue === 'start' || rawFacetValue === 'end'){
        //   continue;
        // }

        year = utils.formatISODate(rawFacetValue, "year");
        count = rawFacetValues[rawFacetValue];

        if (count > 0) {
          tempFacetValues.push({
            value: year,
            range: getTimeRange(rawFacetValue),
            count: count, 
            fieldName: fieldName,
            selectFacet: function() {
              self.addFacet(this.fieldName, this.range, true); 
            }
          });
        }
      }
      tempFacetValues.reverse();
      return tempFacetValues;
    };

    var rawFacetDates = this.get('searchResponse').facet_counts.facet_dates;
    for (var dateField in rawFacetDates) {
      var dateObject = {
        facetField: dateField,
        facets: []
      };
      dateObject.facets = formatDateFacets(dateField, rawFacetDates[dateField]);

      facets.push(dateObject);
    }

    return facets;
  },
  updateFq: function() {
    this.params.fq = this.getSelectedFacets("array");
  // 
  },
  clearFacets: function() {
    this.selectedFacets.clear();
    this.updateFq();
  },
  addFacet: function (field, value, redirect) {

    var self = this;
    var thisFacet = field + ':' + value;

    self.selectedFacets.addObject({
      'field': field,
      'value': value,
      removeFacet: function () {
        self.selectedFacets.removeObject(this);
        self.params.start = 0;
        self.updateFq();
      }
    });

    self.updateFq();

    if (redirect) {
      self.params.start = 0;
      var urlHash = '/search/' + utils.returnSearchHash(self.params.q, this.getSelectedFacets(), self.params.sort);

      window.location.hash = urlHash;
    }
    
    
  },
  selectedFacets: Em.ArrayController.create({
    content: []
  }),
  getSelectedFacets: function(returnType) {
    var facets = this.get('selectedFacets.content');
    var fq = [];

    for (var i=0; i<facets.length; i++) {
      var key = facets[i].field,
          value = facets[i].value,
          kind = typeof value,
          facet;

      

      if (kind === 'string') {
        facet = key + ':' + value,
        fq.push(facet);
      }
      else if (kind === 'object') {
        for (var item in value) {
          if (value.hasOwnProperty(item)) {
            facet = key + ':' + value[item];
            fq.push(facet);
          }
        }
      }
    }

    if (returnType === "array") {
      
      return fq;
    }

    
    return fq.join(',');
  },
  removeSelectedFacet: function (facet) {
    facet.removeFacet();
    var params = this.get('params');
    var urlHash = '/search/' + utils.returnSearchHash(params.q, this.getSelectedFacets(), params.sort);
    window.location.hash = urlHash;
  }
});

/*
  SEARCHER OBSERVERS
  ==============================
*/

SG.SearcherObserver = Em.View.extend({
  searcher: null, // Must be set by user
  doUpdate: function() {
    this.update();
  }.observes('searcher.searchResponse'),
  update: function() {
    throw "Classes that extend SG.SearcherObserver must implement the update method.";
  }
});

/*
  RESULT SETS
  ==============================
*/

SG.ResultSet = SG.SearcherObserver.extend({
  templateName: "results",
  results: null,
  highlights: null,
  update: function() {
    var results = this.searcher.getResults();

    

    if (this.searcher.params.start === 0) {
      this.set('results', []);
    }

    for (var i=0; i < results.length; i++) {
      this.results.addObject(results[i]);  
    }

    this.searcher.params.start += this.searcher.params.rows;
    this.searcher.set('searchedFor', this.searcher.params.q);
  }
});

/*
  SEARCH INPUT
  ==============================
*/

SG.SearchBox = Ember.TextField.extend({
  placeholder: "Search Keywords",
  name: 'searchInput',
  expanded: false,
  classNames: null,
  didInsertElement: function () {
    if (this.searcher.searchedFor) {
      this.set('value', this.searcher.searchedFor);
      // this.evaluateHeight();
    }
  },
  update: function () {
    this.set('value', this.searcher.searchedFor);
    // this.evaluateHeight();
  }.observes('searcher.searchedFor'),
  search: function() {
    this.searcher.clearFacets();
    this.searcher.submitSearch();
  },
  // evaluateHeight: function() {
  //   // Recalculate textarea height 
  //   if (this.value.length > 45 && !this.expanded) {
  //     $('#' +this.get('elementId')).addClass('expanded');
  //     this.set('expanded', true);
  //   }
  //   else if (this.value.length <= 45 && this.expanded) {
  //     $('#' +this.get('elementId')).removeClass('expanded');
  //     this.set('expanded', false);
  //   }
  // },
  keyUp: function(e) {
    // var characterKey = event.keyCode <= 90 && event.keyCode >= 48;
    var terms = this.value.toString().replace(/\:\s/g, ':');
    this.searcher.setQuery(terms);
    // this.evaluateHeight();
  },
  keyDown: function (e) {
    if (e.keyCode === 13) {
      e.preventDefault();
      e.stopPropagation();
      this.search();
    }
  }
});

SG.SearchSubmit = Ember.View.extend({
  tagName: 'input',
  type: 'submit',
  click: function() {
    self.params.start = 0;
    self.clearFacets();
    this.searcher.setQuery(this.value);
    this.searcher.search();
  }
});



// SG.Pagination = SG.SearcherObserver.extend({
//   searcher: null,
//   templateName: 'pagination',
//   totalPages: 0,
//   getTotalPages: function () {
//     try {
//       this.set('totalPages', Math.ceil(this.searcher.getNumFound() / this.searcher.resultsPerPage));
//     }
//     catch (error) {
//     }
//   },
//   pages: [],
//   currentPage: null,
//   update: function () {
//     var self = this;
//     var resultsPerPage = self.searcher.resultsPerPage;
//     self.set('currentPage', Math.ceil((self.searcher.params.start + resultsPerPage) / resultsPerPage));
//     var pages = [];
//     self.getTotalPages();
//     for (var i = 1; i <= self.totalPages; i++) {
//       var page = {};
//       page.num = i;
//       page.loadNext = function () {
//         self.set('currentPage', this.num);
//         self.searcher.loadNextResults((this.num - 1) * resultsPerPage, resultsPerPage);
//       };
//       pages.push(this.pageNumView.create(page));
//     }
//     self.set('pages', pages);
//   },
//   pageNumView: Em.View.extend({
//     template: Em.Handlebars.compile('{{num}} '),
//     tagName: 'span',
//     classNames: ['page-num'],
//     click: function (e) {
//       e.preventDefault();
//       e.stopPropagation();
//       this.loadNext();
//     }
//   })
// });

// Ember.TEMPLATES.pagination = Em.Handlebars.compile('\
//   {{#if view.currentPage}}{{view.currentPage}} | {{/if}}{{#each view.pages }}{{view this}}{{/each}}\
// ');

/* 
  FACETS
  ==============================
*/

SG.FacetGroup = SG.SearcherObserver.extend({
  update: function() {
    var rawFacetGroups = this.searcher.getFacets();
    var self = this;

    rawFacetGroups.forEach ( function(rawFacetGroup) {
      if(rawFacetGroup.facetField === self.fieldName) {
        self.set("facets", rawFacetGroup.facets);

        var tempFacets = [];
        rawFacetGroup.facets.forEach(function (facet) {
          var newFacet = self.facetClass.create(facet);
          newFacet.set("searcher", self.searcher);
          tempFacets.push(newFacet);
        });
        
        self.set('facets', tempFacets);
      }
    });
  },
  templateName: "facet-group",
  searcher: null,
  fieldName: null,
  displayName: null,
  facets: [],
  facetClass: Em.View.extend({
    template: Em.Handlebars.compile('<li><a href="">{{value}}</a> <span>({{count}})</span></li>'),
    click: function(e) {
      e.preventDefault();
      e.stopPropagation();
      this.selectFacet();
    }
  })
});

Ember.TEMPLATES['facet-group'] = Em.Handlebars.compile('\
  {{#if view.facets}}<h3>{{{view.displayName}}}</h3>\
  <ul class="facets-list">\
    {{#each view.facets }}\
      {{view this}}\
    {{/each}}\
  </ul>{{/if}}\
');