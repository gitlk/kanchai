//返回顶部
function b() {
	h = $(window).height(),
	t = $(document).scrollTop(),
	t > '1000' ? $("#moquu_top").show() : $("#moquu_top").hide()
}
$(document).ready(function() {
	b(),
	$("#moquu_top").click(function() {
		$("html,body").animate({
			scrollTop: 0
 			}, 500);
	})
}),
$(window).scroll(function() {
	b()
});