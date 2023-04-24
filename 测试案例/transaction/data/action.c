Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("devt-web", 
		"URL=http://cfgjt.cn:8981/devt-web/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=styles.2ea3cb3a29598ff3a901.css", ENDITEM, 
		"Url=runtime.7b63b9fd40098a2e8207.js", ENDITEM, 
		"Url=polyfills.1111712f963ef64beaec.js", ENDITEM, 
		"Url=main.2e3b714f083eb6eadafc.js", ENDITEM, 
		"Url=scripts.521e2067e75cd94ae49c.js", ENDITEM, 
		"Url=assets/vs/editor/editor.main.css", ENDITEM, 
		"Url=assets/outline/lock.svg", ENDITEM, 
		"Url=assets/outline/user.svg", ENDITEM, 
		"Url=bg.46df42f1ef4c91e3508f.png", ENDITEM, 
		"Url=favicon.ico", ENDITEM, 
		"Url=assets/outline/logout.svg", ENDITEM, 
		"Url=assets/outline/redo.svg", ENDITEM, 
		"Url=assets/fill/forward.svg", ENDITEM, 
		"Url=assets/fill/backward.svg", ENDITEM, 
		"Url=assets/outline/setting.svg", ENDITEM, 
		"Url=assets/outline/eye-invisible.svg", ENDITEM, 
		"Url=assets/outline/shrink.svg", ENDITEM, 
		"Url=assets/outline/plus.svg", ENDITEM, 
		"Url=assets/outline/exclamation.svg", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1682218291535", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=1&fileName=no.png&timestamp=1682218291535", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1682218291535", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1682218291535", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1682218291535", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1682218291536", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1682218291536", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1682218291536", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1682218291536", ENDITEM, 
		"Url=../devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1682218291536", ENDITEM, 
		LAST);

	web_add_cookie("Hm_lvt_ccd369c076594bbc189bd23d92216a6a=1668152073; DOMAIN=weather-api.extfans.com");

	web_add_cookie("__gpi=UID=00000880f2fcf7a8:T=1660269229:RT=1668152076:S=ALNI_MbhE-MmxRv-NeakKN4-szfDECGKJQ; DOMAIN=weather-api.extfans.com");

	web_add_cookie("_ga=GA1.1.700386730.1614862307; DOMAIN=weather-api.extfans.com");

	web_add_cookie("_ga_56ND7K31H4=GS1.1.1668152073.6.1.1668152239.0.0.0; DOMAIN=weather-api.extfans.com");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("forecast", 
		"URL=https://weather-api.extfans.com/weather/forecast?lang=zh-CN&cid=CN101270101", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(6);

	web_custom_request("login.do", 
		"URL=http://cfgjt.cn:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}", 
		LAST);

	web_custom_request("menu.do", 
		"URL=http://cfgjt.cn:8981/devt-service/staff/menu.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"portalAcctName\":\"admin\"}", 
		LAST);

	web_custom_request("planinfo.do", 
		"URL=http://cfgjt.cn:8981/devt-service/colorplan/planinfo.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"planId\":\"1\"}", 
		LAST);

	web_custom_request("getWsPath.do", 
		"URL=http://cfgjt.cn:8981/devt-service/comm/getWsPath.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		EXTRARES, 
		"Url=http://cfgjt.cn:8780/devt-service/websocket.ws?id=Y2YWhMJmx3rzRnZA", "Referer=", ENDITEM, 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=ws://cfgjt.cn:8981/devt-service/devtCompBl/list.do", 
		"Origin=http://cfgjt.cn:8981", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("list.do_2", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		LAST);

	web_custom_request("list.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		LAST);

	web_custom_request("list.do_4", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		LAST);

	return 0;
}