
<div id="spyglass-solr-page"></div>
  <!-- TEMPLATES -->
  <script type="text/x-handlebars" data-template-name="application">
    <div class="search-application">


      {{outlet}}

    </div>
  </script>

  <script type="text/x-handlebars" data-template-name="index">    
    <div class="sr-input">
      {{view App.searchInput}}
    </div>

    <div class="sr-module">
      {{view App.results}}
    </div>

    <div class="sf-module">
      
      {{!-- 

        If you have defined any facet categories add them below.
        For example: 
        `{{view App.facetGroup1}}`

      --}}

      {{view App.facetGroup1}}
    </div>
  </script>

  <script type="text/x-handlebars" data-template-name="results">
    {{#with view}}
      {{#if searcher.isSearching}}
        <h3 class="sr-header">Searching for '<strong>{{searcher.searchedFor}}</strong>' &hellip;</h3>
      {{else}}
        {{#if searcher.searchedFor}}
          <div class="sr-header">
            <h3>{{searcher.numFound}} Results for '<strong>{{searcher.searchedFor}}</strong>'</h3>
            {{#if App.searcher.selectedFacets}}
              <div class="selected-facets">
                Selected Facets:
                {{#each facet in App.searcher.selectedFacets}}
                  <a href="" class="facet" {{action 'removeSelectedFacet' facet target='App.searcher'}}>{{facet.field}}:{{facet.value}}</a>
                {{/each}}
              </div>
            {{/if}}
          </div>
        {{/if}}
      {{/if}}

      <ul class="sr-list">
        {{#each results}}
          <li class="sr-item">

            {{!-- 
              Replace the default fields (title, link, and description) with the correct Solr fields. Then load this page in the browser to see it in action.
            --}}

            <h4><a href="{{ path }}">{{ label }}</a></h4>

            <div>
              {{{ teaser }}}
            </div>
          </li>
        {{/each}}
      </ul>

      {{#if searcher.isSearching}}
        <p class="results-message results-loading">Loading Results &hellip;</p><br>
      {{/if}}
      {{#if searcher.noResults}}
        <p class="results-message results-none">No results were found for your search. Try broadening your terms.</p><br>
      {{/if}}
      {{#if searcher.allResultsLoaded}}
        <p class="results-message results-loaded">All Results Loaded</p><br>
      {{/if}}
    {{/with}}
  </script>
