<?php
/**
 * @file
 * mises_alexa_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mises_alexa_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'alexa_verfiy_code';
  $strongarm->value = '<!-- Start Alexa Certify Javascript -->
<script type="text/javascript">
_atrk_opts = { atrk_acct:"1sqqm1akKd60uG", domain:"mises.org",dynamic: true};
(function() { var as = document.createElement(\'script\'); as.type = \'text/javascript\'; as.async = true; as.src = "https://d31qbv1cthcecs.cloudfront.net/atrk.js"; var s = document.getElementsByTagName(\'script\')[0];s.parentNode.insertBefore(as, s); })();
</script>
<noscript><img src="https://d5nxst8fruw4z.cloudfront.net/atrk.gif?account=1sqqm1akKd60uG" style="display:none" height="1" width="1" alt="" /></noscript>
<!-- End Alexa Certify Javascript -->  ';
  $export['alexa_verfiy_code'] = $strongarm;

  return $export;
}
