Action1()
{

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(19);

	web_custom_request("list.do_4", 
		"URL=http://cfgjt.cn:8981/devt-service/devtCompBl/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":500}", 
		LAST);

	web_custom_request("list.do_5", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("httpCompImg.do_12", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("httpCompImg.do_13", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("httpCompImg.do_14", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("httpCompImg.do_15", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("httpCompImg.do_16", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("httpCompImg.do_17", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("httpCompImg.do_18", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("httpCompImg.do_19", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=214680&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("httpCompImg.do_20", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("httpCompImg.do_21", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1681111810870", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t51.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(6);

	web_custom_request("list.do_6", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"小红\",\"treeId\":null}", 
		LAST);

	web_url("httpCompImg.do_22", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1681111817597", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t53.inf", 
		LAST);

	return 0;
}