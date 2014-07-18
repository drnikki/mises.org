window.onload=function(){
	qareportcreateCookies(7);
};

window.onresize=function(){
	qareportcreateCookies(7);
};

function qareportcreateCookies(days) {
	if (days) {
	  var date = new Date();
	  date.setTime(date.getTime()+(days*24*60*60*1000));
	  var expires = "; expires="+date.toGMTString();
	}
  else var expires = "";
  var w = Math.max(document.documentElement.clientWidth, window.innerWidth || 0)
	var h = Math.max(document.documentElement.clientHeight, window.innerHeight || 0)
  document.cookie = "qareport_vp_width="+w+expires+"; path=/";
  document.cookie = "qareport_vp_height="+h+expires+"; path=/";
}
