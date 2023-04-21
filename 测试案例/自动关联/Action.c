Action()
{

	web_reg_save_param("devtToken",
		"LB=\"devt_token\":\"",
		"RB=\"",
		"NotFound=ERROR",
		"Search=Body",
		LAST);

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

	web_add_auto_header("Authorization",
		"Bearer {devtToken}");

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

	return 0;
}