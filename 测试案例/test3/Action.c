Action()
{

	web_add_cookie("devt_user=eyJhbGciOiJIUzI1NiJ9.eyJqdGkiOiI4NjZjMzU0Ny04OGQwLTRjMjItOTllZC01OWI3Zjc4ZDc5YjMiLCJpYXQiOjE2ODA1Mjc4ODMsImlzcyI6InR5ZGljIiwic3ViIjoie1wibmFtZVwiOlwiYWRtaW5cIn0iLCJleHAiOjE2ODA2MTQyODN9.qMwL7rjRcmXnDH3l11X1kGXF8ukY7Cr789BwtuDGHcM; DOMAIN=cfgjt.cn");

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	web_custom_request("login.do", 
		"URL=http://cfgjt.cn:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t1.inf", 
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
		"Snapshot=t2.inf", 
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
		"Snapshot=t3.inf", 
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
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		EXTRARES, 
		"Url=/devt-web/favicon.ico", "Referer=", ENDITEM, 
		"Url=http://cfgjt.cn/ws://cfgjt.cn:8780/devt-service/websocket.ws?id=M3Cy55eWPfXfEJ42", "Referer=", ENDITEM, 
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
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		EXTRARES, 
		"Url=../httpCompImg.do?path=others&code=aqsv4&fileName=no.png&timestamp=1680528061772", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=aqsv&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=aqsv2&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=41180&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=001&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=60070&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=30439&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=UTF-8&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1680528061773", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_custom_request("list.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		EXTRARES, 
		"Url=../httpCompImg.do?path=others&code=UTF-8&fileName=no.png&timestamp=1680528077064", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=textarea1&fileName=1635186324896.png&timestamp=1680528077064", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	return 0;
}