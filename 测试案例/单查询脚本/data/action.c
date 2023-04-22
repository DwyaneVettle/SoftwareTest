Action()
{

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("devt-web", 
		"URL=http://cfgjt.cn:8981/devt-web", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/devt-web/styles.2ea3cb3a29598ff3a901.css", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/runtime.7b63b9fd40098a2e8207.js", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/polyfills.1111712f963ef64beaec.js", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/scripts.521e2067e75cd94ae49c.js", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/main.2e3b714f083eb6eadafc.js", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/vs/editor/editor.main.css", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/user.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/lock.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/bg.46df42f1ef4c91e3508f.png", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/favicon.ico", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/logout.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/fill/backward.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/fill/forward.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/setting.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/redo.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/eye-invisible.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/shrink.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/plus.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/exclamation.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1682148973645", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=1&fileName=no.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1682148973646", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=1&fileName=no.png&timestamp=1682148984562", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-service/httpCompImg.do?path=element-plus&code=textarea1&fileName=1635186324896.png&timestamp=1682148984562", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(22);

	web_custom_request("login.do", 
		"URL=http://cfgjt.cn:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
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
		"Snapshot=t4.inf", 
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
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		LAST);

	web_custom_request("list.do", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		EXTRARES, 
		"Url=http://cfgjt.cn:8780/devt-service/websocket.ws?id=bja8sFneKfwBdjDT", "Referer=", ENDITEM, 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=ws://cfgjt.cn:8981/devt-service/devtCompBl/list.do", 
		"Origin=http://cfgjt.cn:8981", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	lr_think_time(7);

	web_custom_request("list.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		LAST);

	return 0;
}