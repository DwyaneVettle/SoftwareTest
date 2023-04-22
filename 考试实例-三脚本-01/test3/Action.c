GetTitle(){
	web_save_timestamp_param("timestamp", 
		LAST);
	lr_save_string(lr_eval_string("标题{timestamp}"),"title");
}
Action()
{
	lr_start_transaction("save");
	web_add_auto_header("Authorization",
	                    lr_eval_string("Bearer {devtToken}"));
	GetTitle();
	web_reg_find("Text=rspCode",
		LAST);
	web_custom_request("save.do", 
		"URL={hostPort}/devt-service/devtMsg/save.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"{title}\",\"type\":\"1\",\"msg\":\"内容\"}", 
		LAST);
	lr_end_transaction("save",LR_AUTO);
	return 0;
}