Action()
{

	lr_start_transaction("search");

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


	web_reg_save_param("rspCode",
		"LB=\"rspCode\":",
		"RB=,",
		"NotFound=ERROR",
		"Search=Headers",
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

	if(atoi(lr_eval_string("{rspCode}")) > 0) {
		lr_end_transaction("search",LR_PASS);
	} else {
		lr_end_transaction("search",LR_FAIL);
	}

	return 0;
}