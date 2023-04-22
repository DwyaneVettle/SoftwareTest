Action()
{
	lr_start_transaction("login");

	web_reg_save_param_ex(
		"ParamName=devtToken",
		"LB=\"devt_token\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("login.do", 
		"URL={hostPort}/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={hostPort}/devt-web/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"{account}\",\"acctPwd\":\"{ped}\",\"type\":\"0\"}", 
		LAST);

	if(strcmp(lr_eval_string("{devtToken}"),"{devtToken}")==0) {
		lr_end_transaction("login",LR_FAIL);
	} else {
		lr_end_transaction("login", LR_AUTO);
	}

	

	return 0;
}