$(function(){
	 //导航菜单下拉效果
  $('.dropdown').click(function(event){
    //取消事件冒泡  
    event.stopPropagation(); 
    $(this).find('.dropdown-menu').toggleClass('visible');
    $(this).siblings().find('.dropdown-menu').removeClass('visible');
  });
  $('.dropdown-menu').click(function(event){
    event.stopPropagation();
  })
  //点击空白处或者自身隐藏弹出层。
  $(document).click(function (event) { $(".dropdown-menu").removeClass('visible') });
  
   // 搜索
   var inWidth = window.innerWidth;
   $('.form-search .close').hide();
   $('.icon-search').hover(function(){
    $('.nav-search-input').focus();
	$('.form-search .close').show();
    if(inWidth <= 280){ 
      $('.form-search .nav-search-input').css("width","150px");
      $('.form-search').addClass('active2');
    }else{
      $('.form-search').addClass('active');
    }
  });
  $('.form-search .close').click(function (){
    $('.form-search .nav-search-input').css("width","0");
    $('.form-search').removeClass('active');
    $('.form-search').removeClass('active2');
	$('.form-search .close').hide();
  });
$('.share_wx').on('click', function(){
    layer.open({
    type: 1,
    title: false,
    closeBtn: false,
    shadeClose: true,
    content: "<div style='width:300px; height:350px;background:#fff;box-shadow:0px 0px 8px  #ccc;padding:25px;'><div style='width:300px;height:50px;line-height:50px;text-align:center'>打开微信“扫一扫”，分享到朋友圈</div><img src='http://s.jiathis.com/qrcode.php?url="+window.location.href+"' width='300' height='300'></div>"
	});
});
	//导航菜单
	$("#nav li").hover(
		function(){
			$("#nav li").each(function(index, element) {
               $(this).attr("class",$(this).attr("class").replace("_on",""));
            });
			$("#nav li").attr("class",$("#nav li").attr("class").replace("_on",""));
			var className = $(this).attr("class");
			$(this).attr("class",className + "_on");
			$(this).find(".nav_li_child").slideDown(200).fadeIn(300);
		},
		function(){
			var className = $(this).attr("class");
			//$(this).attr("class",className.replace("_on",""));
			$(this).find(".nav_li_child").slideUp(200).fadeOut(300);
		}
	)	
})
