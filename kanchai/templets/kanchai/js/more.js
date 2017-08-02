/*列表样式函数*/
$(function(){	
   var loadConfig = {
                url_api: '/plus/list.php',
                flag: 'c',
                page: 2,
                pagesize: 5, //这个就是滑动一次添加几条信息的参数设置
                loading: 0,
            }
            function  loadMoreApply() {
                    var page = loadConfig.page;
                    var pagesize = loadConfig.pagesize;
                    var flag = loadConfig.flag;
                    var url = loadConfig.url_api, data = {ajax: 'pullload',flag:flag,page: page, pagesize: pagesize};

                        function ajax(url, data) {

                            $.ajax({url: url, data: data, async: false, type: 'GET', dataType: 'json', success: function(data) {
                                    addContent(data);
                                }});
                        }
                        ajax(url, data);
            }
            function addContent(rs) {
                if (rs.statu == 1) {
                    var data = rs.list;
                    var total = rs.total;
                    var arr = [];
                    var length = data.length;
                    for (var i = 0; i < length; i++) {      
                        arr.push("<li class='rtmj-box'><dl><dt>");
                         arr.push('<a href="' + data[i].arcurl + '" target="_blank" title="' + data[i].title + '"><img src="'+data[i].picname+'" width="250" height="165"/></a>');
                         arr.push('</dt><dd><h3>');
                         arr.push('<a href="' + data[i].arcurl + '" target="_blank" title="' + data[i].title + '">'+ data[i].title +"</a>");
                         arr.push("</h3><p>"+ data[i].description +"</p>");
                         arr.push("<p>"+ data[i].writer +" / "+ data[i].source +" / "+ data[i].stime +"</p>");
                         arr.push('</dd><dl></li>');
                    }
                    $("#mainList ul").append(arr.join(''));
                    loadConfig.load_num = rs.load_num;
                    if (total < loadConfig.page * loadConfig.pagesize || loadConfig.page > loadConfig.load_num) {
                        window.removeEventListener('srcoll', loadMoreApply, false);
                    }
                    loadConfig.page++;
                    loadConfig.loading = 0;
                }else{
                    $("#moreBtn").css("display","none");
                }
            }
            $("#moreBtn").click(function(){
               
                    loadMoreApply();
                     loadConfig.page++;
            })
	
});