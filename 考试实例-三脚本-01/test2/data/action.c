Action()
{

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"zh-CN,zh;q=0.9");

	web_url("devt-web", 
		"URL=http://192.168.128.186:8981/devt-web/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=runtime.7b63b9fd40098a2e8207.js", ENDITEM, 
		"Url=polyfills.1111712f963ef64beaec.js", ENDITEM, 
		"Url=styles.2ea3cb3a29598ff3a901.css", ENDITEM, 
		"Url=main.2e3b714f083eb6eadafc.js", ENDITEM, 
		"Url=scripts.521e2067e75cd94ae49c.js", ENDITEM, 
		"Url=assets/vs/editor/editor.main.css", ENDITEM, 
		"Url=assets/outline/user.svg", ENDITEM, 
		"Url=assets/outline/lock.svg", ENDITEM, 
		"Url=bg.46df42f1ef4c91e3508f.png", ENDITEM, 
		"Url=favicon.ico", ENDITEM, 
		"Url=assets/outline/logout.svg", ENDITEM, 
		"Url=assets/fill/forward.svg", ENDITEM, 
		"Url=assets/fill/backward.svg", ENDITEM, 
		"Url=assets/outline/redo.svg", ENDITEM, 
		"Url=assets/outline/eye-invisible.svg", ENDITEM, 
		"Url=assets/outline/setting.svg", ENDITEM, 
		"Url=assets/outline/shrink.svg", ENDITEM, 
		"Url=assets/outline/plus.svg", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=span0&fileName=1634020364206.png&timestamp=1645023095222", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=input&fileName=1631125196214.png&timestamp=1645023095225", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1645023095225", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1645023095225", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1645023095226", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=span1&fileName=1634888248760.png&timestamp=1645023095226", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=page1&fileName=1635691548643.png&timestamp=1645023095227", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=avatar0&fileName=1635500337608.png&timestamp=1645023095225", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1645023095226", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=password1&fileName=1635185972471.png&timestamp=1645023095227", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=span0&fileName=1634020364206.png&timestamp=1645023100011", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=textarea1&fileName=1635186324896.png&timestamp=1645023100011", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept", 
		"application/json, text/plain, */*");

	web_custom_request("login.do", 
		"URL=http://192.168.128.186:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}", 
		LAST);

	web_custom_request("menu.do", 
		"URL=http://192.168.128.186:8981/devt-service/staff/menu.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"portalAcctName\":\"admin\"}", 
		LAST);

	web_custom_request("planinfo.do", 
		"URL=http://192.168.128.186:8981/devt-service/colorplan/planinfo.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"planId\":\"1\"}", 
		LAST);

	web_custom_request("getWsPath.do", 
		"URL=http://192.168.128.186:8981/devt-service/comm/getWsPath.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		LAST);

	web_custom_request("list.do", 
		"URL=http://192.168.128.186:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		LAST);

	web_custom_request("list.do_2", 
		"URL=http://192.168.128.186:8981/devt-service/devtCompBl/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":500}", 
		LAST);

	web_custom_request("list.do_3", 
		"URL=http://192.168.128.186:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		LAST);

	return 0;
}