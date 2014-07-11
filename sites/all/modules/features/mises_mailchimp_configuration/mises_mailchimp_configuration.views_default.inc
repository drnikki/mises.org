<?php
/**
 * @file
 * mises_mailchimp_configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mises_mailchimp_configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mises_newsletter_subscribe';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'mailchimp_lists';
  $view->human_name = 'Mises Newsletter Subscribe';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subscribe to our mailing lists';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div id="mc_embed_signup">
	<form action="http://mises.us1.list-manage1.com/subscribe/post?u=bf16b152ccc444bdbbcc229e4&amp;id=8b52b2e1c0" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" novalidate="" target="_blank">
	<div class="indicates-required"><span class="asterisk">*</span> indicates required</div>
	<div class="mc-field-group"><label for="mce-EMAIL">Email Address <span class="asterisk">*</span> </label> <input class="required email" id="mce-EMAIL" name="EMAIL" type="email" value=""></div>
	<div class="mc-field-group input-group">
	<strong>Email Subscriptions</strong>
	<ul>
		<li><input id="mce-group[1]-1-0" name="group[1][1]" type="checkbox" value="1"><label for="mce-group[1]-1-0">Institute News</label></li>
		<li><input id="mce-group[1]-1-1" name="group[1][2]" type="checkbox" value="2"><label for="mce-group[1]-1-1">Events</label></li>
		<li><input id="mce-group[1]-1-2" name="group[1][4]" type="checkbox" value="4"><label for="mce-group[1]-1-2">Academy</label></li>
		<li><input id="mce-group[1]-1-3" name="group[1][8]" type="checkbox" value="8"><label for="mce-group[1]-1-3">Store</label></li>
		<li><input id="mce-group[1]-1-4" name="group[1][16]" type="checkbox" value="16"><label for="mce-group[1]-1-4">Mises Daily</label></li>
		<li><input id="mce-group[1]-1-5" name="group[1][32]" type="checkbox" value="32"><label for="mce-group[1]-1-5">Free Market</label></li>
	</ul>
	</div>
	<div class="clear" id="mce-responses">
		<div class="response" id="mce-error-response" style="display:none">&nbsp;</div>
		<div class="response" id="mce-success-response" style="display:none">&nbsp;</div>
	</div>
	<div class="clear">
	<input class="button ui-button ui-widget ui-state-default ui-corner-all" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Subscribe" role="button" aria-disabled="false"></div>
	</form>
</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: MailChimp List: Description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'mailchimp_lists';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'subscribe';
  $export['mises_newsletter_subscribe'] = $view;

  return $export;
}
