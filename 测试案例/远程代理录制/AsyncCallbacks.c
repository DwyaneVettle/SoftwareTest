//Automatically generated file for implementing asynchronous callback functions.
//You can modify the automatically generated callback implementations or add new ones.
//Asynchronous callback functions can be registered using web_reg_async_attributes steps.
int Poll_0_RequestCB()
{
	//Enter your implementation for RequestCB() here.

	//Call web_util_set_request_url() here to modify polling URL.
	//URL is expected to be of the form:
	//https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts={Counter_Poll_0_0}

	//The following parameter must be assigned:

	//TODO - Check counter initialization for Counter_Poll_0_0 in Action file.
	//Known examples for the token containing Counter_Poll_0_0: ts=56036995, ts=56036996, ts=56036997, ts=56036998, ts=56036999, ts=56037000, ts=56037001, 
	lr_param_increment("Counter_Poll_0_0", "{Counter_Poll_0_0}");

	//Once all parameters have been assigned, copy them to the updated URL.
	//Then call web_util_set_request_url() with the updated URL:
	web_util_set_request_url("https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts={Counter_Poll_0_0}");

	//Call web_util_set_request_body() here to modify request body:
	//web_util_set_request_body("<request body>");

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	//Enter your implementation for ResponseCB() here.

	//TODO - To make the script wait for a specific response, use web_sync in the relevant Action file.
	//See the Modifying Callbacks section in the VuGen user guide for more details.

	return WEB_ASYNC_CB_RC_OK;
}

