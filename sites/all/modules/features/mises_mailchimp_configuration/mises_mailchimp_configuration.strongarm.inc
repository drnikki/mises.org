<?php
/**
 * @file
 * mises_mailchimp_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_mailchimp_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_content';
  $strongarm->value = '<div id="mc_embed_signup">
	<form action="http://mises.us1.list-manage1.com/subscribe/post?u=bf16b152ccc444bdbbcc229e4&amp;id=8b52b2e1c0" class="validate" id="mc-embedded-subscribe-form" method="post" name="mc-embedded-subscribe-form" novalidate="" target="_blank">
	<p class="text-right required indicates-required"><span class="asterisk">*</span> indicates required</p>
	<div class="mc-field-group"><label for="mce-EMAIL">Email Address <span class="asterisk">*</span> </label> <input class="required email" id="mce-EMAIL" name="EMAIL" type="email" value=""></div>
	<div class="mc-field-group input-group">
	<h3 class="sub-heading contrast">Email Subscriptions</h3>
	<ul>
		<li><input id="mce-group[1]-1-4" name="group[1][16]" type="checkbox" value="16"> <label for="mce-group[1]-1-4">Mises Wire</label></li>
		<li><input id="mce-group[1]-1-5" name="group[1][32]" type="checkbox" value="32"> <label for="mce-group[1]-1-5">The Austrian</label></li>
		<li><input id="mce-group[1]-1-3" name="group[1][8]" type="checkbox" value="8"> <label for="mce-group[1]-1-3">Mises Store</label></li>
		<li><input id="mce-group[1]-1-1" name="group[1][2]" type="checkbox" value="2"> <label for="mce-group[1]-1-1">Events</label></li>
		<li><input id="mce-group[1]-1-0" name="group[1][1]" type="checkbox" value="1"> <label for="mce-group[1]-1-0">Institute News</label></li>
		<li><input id="mce-group[1]-1-2" name="group[1][4]" type="checkbox" value="4"> <label for="mce-group[1]-1-2">Academy</label></li>
	</ul>
	</div>
	<div class="clear" id="mce-responses">
		<div class="response" id="mce-error-response" style="display:none">&nbsp;</div>
		<div class="response" id="mce-success-response" style="display:none">&nbsp;</div>
	</div>
	<div class="clear">
	<input class="button ui-button ui-widget ui-state-default ui-corner-all btn btn-default" id="mc-embedded-subscribe" name="subscribe" type="submit" value="Subscribe" role="button" aria-disabled="false"></div>
	</form>
</div>';
  $export['mises_mailchimp_custom_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_description';
  $strongarm->value = '● <strong>The Mises Wire.</strong> Selections from the Mises Wire. Sent six days a week to your inbox.
● <strong>The Mises Store.</strong>  Announcements and alerts of new books, epubs, audiobooks, discounted and sale items, along with offerings of t-shirts and memorabilia. Sent weekly to your inbox. 
● <strong>Institute News.</strong>  The News List provides occasional announcements of interest about what is happening at the Mises Institute, and sent to your inbox. 
● <strong>The Austrian.</strong>  This is the online version of our Member\'s magazine containing articles, current events, interviews, alumni and faculty news. It is sent every two months to your inbox. 
● <strong>Events.</strong>  Announcements of seminars, conferences, and Mises circle events presented by the Mises Institute. Also alerts of upcoming Live Broadcasts are sent to your inbox. 
● <strong>Academy.</strong>  Announcements and updates of what is happening with academy online courses will be sent to your inbox. ';
  $export['mises_mailchimp_custom_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_region';
  $strongarm->value = 'content';
  $export['mises_mailchimp_custom_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_style';
  $strongarm->value = '<div class="panel-heading single"><div class="panel-title">Subscribe to Our Mailing Lists</div></div>';
  $export['mises_mailchimp_custom_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_subject';
  $strongarm->value = 'Subscribe to our mailing lists';
  $export['mises_mailchimp_custom_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_url';
  $strongarm->value = 'about-mises/subscribe';
  $export['mises_mailchimp_custom_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mises_mailchimp_custom_url_title';
  $strongarm->value = 'Subscribe to our mailing lists';
  $export['mises_mailchimp_custom_url_title'] = $strongarm;

  return $export;
}
