Action()
{

	web_add_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(58);

	web_custom_request("list.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		LAST);

	web_url("httpCompImg.do_11", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=textarea1&fileName=1635186324896.png&timestamp=1681111788927", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t39.inf", 
		LAST);

	return 0;
}
