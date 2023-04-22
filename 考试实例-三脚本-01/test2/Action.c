Action()
{
	
	lr_start_transaction("query1");
	web_add_auto_header("Authorization",
	                    lr_eval_string("Bearer {devtToken}"));

	web_reg_find("Text=rspCode",
		LAST);

	web_custom_request("list.do_3", 
		"URL={hostPort}/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"{qryText}\",\"treeId\":null}", 
		LAST);
	lr_end_transaction("query1",LR_AUTO);
	return 0;
}