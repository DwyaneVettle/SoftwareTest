Action()
{

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Accept-Language", 
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
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept", 
		"application/json, text/plain, */*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"zh-CN,zh;q=0.9");

	lr_think_time(15);

	web_custom_request("save.do", 
		"URL=http://192.168.128.186:8981/devt-service/devtMsg/save.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"标题\",\"type\":\"1\",\"msg\":\"内容\"}", 
		LAST);

	web_custom_request("list.do_5", 
		"URL=http://192.168.128.186:8981/devt-service/devtMsg/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.128.186:8981/devt-web/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\"}", 
		LAST);

	return 0;
}