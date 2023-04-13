/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("devt-web", 
		"URL=http://cfgjt.cn:8981/devt-web", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("runtime.7b63b9fd40098a2e8207.js", 
		"URL=http://cfgjt.cn:8981/devt-web/runtime.7b63b9fd40098a2e8207.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("styles.2ea3cb3a29598ff3a901.css", 
		"URL=http://cfgjt.cn:8981/devt-web/styles.2ea3cb3a29598ff3a901.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("polyfills.1111712f963ef64beaec.js", 
		"URL=http://cfgjt.cn:8981/devt-web/polyfills.1111712f963ef64beaec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("main.2e3b714f083eb6eadafc.js", 
		"URL=http://cfgjt.cn:8981/devt-web/main.2e3b714f083eb6eadafc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("scripts.521e2067e75cd94ae49c.js", 
		"URL=http://cfgjt.cn:8981/devt-web/scripts.521e2067e75cd94ae49c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("user.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/user.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("editor.main.css", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/vs/editor/editor.main.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("lock.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/lock.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("bg.46df42f1ef4c91e3508f.png", 
		"URL=http://cfgjt.cn:8981/devt-web/bg.46df42f1ef4c91e3508f.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://cfgjt.cn:8981/devt-web/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t12.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(137);

	web_custom_request("login.do", 
		"URL=http://cfgjt.cn:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t13.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}", 
		LAST);

	lr_think_time(4);

	web_custom_request("menu.do", 
		"URL=http://cfgjt.cn:8981/devt-service/staff/menu.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"portalAcctName\":\"admin\"}", 
		LAST);

	web_url("logout.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/logout.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t15.inf", 
		LAST);

	web_custom_request("planinfo.do", 
		"URL=http://cfgjt.cn:8981/devt-service/colorplan/planinfo.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"planId\":\"1\"}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("backward.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/fill/backward.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("forward.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/fill/forward.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("redo.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/redo.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("setting.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/setting.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t20.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("getWsPath.do", 
		"URL=http://cfgjt.cn:8981/devt-service/comm/getWsPath.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={}", 
		LAST);

	web_url("eye-invisible.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/eye-invisible.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t22.inf", 
		LAST);

	web_custom_request("list.do", 
		"URL=http://cfgjt.cn:8981/devt-service/devtCompBl/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t23.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":500}", 
		LAST);

	web_url("plus.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/plus.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t24.inf", 
		LAST);

	web_custom_request("list.do_2", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t25.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("shrink.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/shrink.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("exclamation.svg", 
		"URL=http://cfgjt.cn:8981/devt-web/assets/outline/exclamation.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("httpCompImg.do", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("httpCompImg.do_2", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("httpCompImg.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("httpCompImg.do_4", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("httpCompImg.do_5", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("httpCompImg.do_6", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("httpCompImg.do_7", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("httpCompImg.do_8", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("httpCompImg.do_9", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("httpCompImg.do_10", 
		"URL=http://cfgjt.cn:8981/devt-service/httpCompImg.do?path=element-plus&code=214680&fileName=no.png&timestamp=1681111730334", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t37.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}
