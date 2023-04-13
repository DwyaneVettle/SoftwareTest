Action()
{

	web_url("connecttest.txt", 
		"URL=http://www.msftconnecttest.com/connecttest.txt", 
		"Resource=1", 
		"RecContentType=text/plain,text/plain", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("buvid3=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc; DOMAIN=api.bilibili.com");

	web_add_cookie("LIVE_BUVID=AUTO8316305780900062; DOMAIN=api.bilibili.com");

	web_add_cookie("i-wanna-go-back=-1; DOMAIN=api.bilibili.com");

	web_add_cookie("CURRENT_BLACKGAP=0; DOMAIN=api.bilibili.com");

	web_add_cookie("buvid_fp_plain=undefined; DOMAIN=api.bilibili.com");

	web_add_cookie("DedeUserID=673893024; DOMAIN=api.bilibili.com");

	web_add_cookie("DedeUserID__ckMd5=2cd2d0b84d8c5889; DOMAIN=api.bilibili.com");

	web_add_cookie("b_ut=5; DOMAIN=api.bilibili.com");

	web_add_cookie("blackside_state=0; DOMAIN=api.bilibili.com");

	web_add_cookie("b_nut=100; DOMAIN=api.bilibili.com");

	web_add_cookie("_uuid=103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc; DOMAIN=api.bilibili.com");

	web_add_cookie("rpdid=|(u~|)|YRkm|0J'uYY)Y|u)Rk; DOMAIN=api.bilibili.com");

	web_add_cookie("buvid4=9E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D; DOMAIN=api.bilibili.com");

	web_add_cookie("CURRENT_QUALITY=80; DOMAIN=api.bilibili.com");

	web_add_cookie("fingerprint=2f627cc37e9f1174e7e77d1902a3843e; DOMAIN=api.bilibili.com");

	web_add_cookie("buvid_fp=40f09ed9caeb2cd24147a2ca821d9c20; DOMAIN=api.bilibili.com");

	web_add_cookie("header_theme_version=CLOSE; DOMAIN=api.bilibili.com");

	web_add_cookie("home_feed_column=4; DOMAIN=api.bilibili.com");

	web_add_cookie("is-2022-channel=1; DOMAIN=api.bilibili.com");

	web_add_cookie("nostalgia_conf=-1; DOMAIN=api.bilibili.com");

	web_add_cookie("CURRENT_FNVAL=16; DOMAIN=api.bilibili.com");

	web_add_cookie("PVID=1; DOMAIN=api.bilibili.com");

	web_add_cookie("CURRENT_PID=51cd2190-cd27-11ed-861d-afdfa3449339; DOMAIN=api.bilibili.com");

	web_add_cookie("bp_video_offset_673893024=780577801968287900; DOMAIN=api.bilibili.com");

	web_add_cookie("b_lsid=53EE64B8_18769DA59A8; DOMAIN=api.bilibili.com");

	web_add_cookie("SESSDATA=56625786%2C1696660137%2C829c5%2A41; DOMAIN=api.bilibili.com");

	web_add_cookie("bili_jct=3e8d7e903b79c0da5fe74d138a51edb0; DOMAIN=api.bilibili.com");

	web_add_cookie("innersign=1; DOMAIN=api.bilibili.com");

	web_add_cookie("sid=olmlsg28; DOMAIN=api.bilibili.com");

	web_add_auto_header("Origin", 
		"https://www.bilibili.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("total", 
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036995", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("buvid3=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("LIVE_BUVID=AUTO8316305780900062; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("i-wanna-go-back=-1; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("CURRENT_BLACKGAP=0; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("buvid_fp_plain=undefined; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("DedeUserID=673893024; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("DedeUserID__ckMd5=2cd2d0b84d8c5889; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("b_ut=5; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("blackside_state=0; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("b_nut=100; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("_uuid=103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("rpdid=|(u~|)|YRkm|0J'uYY)Y|u)Rk; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("buvid4=9E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("CURRENT_QUALITY=80; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("fingerprint=2f627cc37e9f1174e7e77d1902a3843e; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("buvid_fp=40f09ed9caeb2cd24147a2ca821d9c20; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("header_theme_version=CLOSE; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("home_feed_column=4; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("is-2022-channel=1; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("nostalgia_conf=-1; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("CURRENT_FNVAL=16; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("PVID=1; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("CURRENT_PID=51cd2190-cd27-11ed-861d-afdfa3449339; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("bp_video_offset_673893024=780577801968287900; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("b_lsid=53EE64B8_18769DA59A8; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("SESSDATA=56625786%2C1696660137%2C829c5%2A41; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("bili_jct=3e8d7e903b79c0da5fe74d138a51edb0; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("innersign=1; DOMAIN=api.vc.bilibili.com");

	web_add_cookie("sid=olmlsg28; DOMAIN=api.vc.bilibili.com");

	web_url("single_unread", 
		"URL=https://api.vc.bilibili.com/session_svr/v1/session_svr/single_unread?build=0&mobi_app=web&unread_type=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(29);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036996
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036997
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036998
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036999
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56037000
	https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56037001

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036996", 
		"PollIntervalMs=30400", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	lr_save_int(0, "Counter_Poll_0_0");

	web_url("total_2", 
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036996", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(30);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("total_3",
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036997",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8",
		"Snapshot=t5.inf",
		"Mode=HTML",
		LAST); 
	*/

	web_add_cookie("buvid3=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc; DOMAIN=data.bilibili.com");

	web_add_cookie("LIVE_BUVID=AUTO8316305780900062; DOMAIN=data.bilibili.com");

	web_add_cookie("i-wanna-go-back=-1; DOMAIN=data.bilibili.com");

	web_add_cookie("CURRENT_BLACKGAP=0; DOMAIN=data.bilibili.com");

	web_add_cookie("buvid_fp_plain=undefined; DOMAIN=data.bilibili.com");

	web_add_cookie("DedeUserID=673893024; DOMAIN=data.bilibili.com");

	web_add_cookie("DedeUserID__ckMd5=2cd2d0b84d8c5889; DOMAIN=data.bilibili.com");

	web_add_cookie("b_ut=5; DOMAIN=data.bilibili.com");

	web_add_cookie("blackside_state=0; DOMAIN=data.bilibili.com");

	web_add_cookie("b_nut=100; DOMAIN=data.bilibili.com");

	web_add_cookie("_uuid=103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc; DOMAIN=data.bilibili.com");

	web_add_cookie("rpdid=|(u~|)|YRkm|0J'uYY)Y|u)Rk; DOMAIN=data.bilibili.com");

	web_add_cookie("buvid4=9E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D; DOMAIN=data.bilibili.com");

	web_add_cookie("CURRENT_QUALITY=80; DOMAIN=data.bilibili.com");

	web_add_cookie("fingerprint=2f627cc37e9f1174e7e77d1902a3843e; DOMAIN=data.bilibili.com");

	web_add_cookie("buvid_fp=40f09ed9caeb2cd24147a2ca821d9c20; DOMAIN=data.bilibili.com");

	web_add_cookie("header_theme_version=CLOSE; DOMAIN=data.bilibili.com");

	web_add_cookie("home_feed_column=4; DOMAIN=data.bilibili.com");

	web_add_cookie("is-2022-channel=1; DOMAIN=data.bilibili.com");

	web_add_cookie("nostalgia_conf=-1; DOMAIN=data.bilibili.com");

	web_add_cookie("CURRENT_FNVAL=16; DOMAIN=data.bilibili.com");

	web_add_cookie("PVID=1; DOMAIN=data.bilibili.com");

	web_add_cookie("CURRENT_PID=51cd2190-cd27-11ed-861d-afdfa3449339; DOMAIN=data.bilibili.com");

	web_add_cookie("bp_video_offset_673893024=780577801968287900; DOMAIN=data.bilibili.com");

	web_add_cookie("b_lsid=53EE64B8_18769DA59A8; DOMAIN=data.bilibili.com");

	web_add_cookie("SESSDATA=56625786%2C1696660137%2C829c5%2A41; DOMAIN=data.bilibili.com");

	web_add_cookie("bili_jct=3e8d7e903b79c0da5fe74d138a51edb0; DOMAIN=data.bilibili.com");

	web_add_cookie("innersign=1; DOMAIN=data.bilibili.com");

	web_add_cookie("sid=olmlsg28; DOMAIN=data.bilibili.com");

	web_submit_data("heartbeat", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=3", ENDITEM, 
		"Name=realtime", "Value=243", ENDITEM, 
		"Name=played_time", "Value=160", ENDITEM, 
		"Name=real_played_time", "Value=243", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=160", ENDITEM, 
		"Name=max_play_progress_time", "Value=174", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111116811099040101681109903922%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cvideo_buffer%7C%7B%22val%22:215.355,%22abl%22:null,%22vbl%22:127.114%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099004191681109900399%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cplay_screen%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C160%7C4%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("web", 
		"URL=https://data.bilibili.com/log/web?0133241681109899644https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681109899644%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:130,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=web?00111116811099032091681109903099%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:43,%5C%22range%5C%22:%5C%227400390-7572169%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%5C%22,%5C%22startTime%5C%22:214.99335600907028,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:2050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099060151681109905920%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cstuck_rescue%7C%7B%22ct%22:215.355,%22st%22:215.855%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099086101681109908476%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:43,%5C%22range%5C%22:%5C%227400390-7572169%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:214.99335600907028,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:2050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099096101681109909411%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cvideo_buffer%7C%7B%22val%22:215.855,%22abl%22:null,%22vbl%22:127.114%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099116181681109911417%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cweb_loadlag%7C%7B%22ct%22:215.855,%22bt%22:0,%22vbl%22:126.614,%22abl%22:null,%22msg%22:%22video:1,125.576877,69.963,1;1,130.668164,69.847,1;1,135.747902,69.861,1;1,140.847126,69.548,1;1,144.926782,69.876,1;1,144.946647,69.729,1;1,144.954491,69.721,1;1,144.96417,69.711,1;1,144.971442,69.704,1;1,144.983765,69.691,1;1,144.995996,69.679,1;1,145.097698,69.577,1;1,145.160425,69.515,1;1,145.233786,69.441,1;1,145.272902,69.402,1;"
		"1,145.321765,69.353,1;1,145.532087,69.143,1;1,145.615046,69.060,1;1,145.749435,68.926,1;1,146.212564,68.463,1;1,146.295454,68.381,1;1,146.617284,68.058,1;1,146.71852,67.957,1;1,146.862382,67.813,1;1,146.919027,67.756,1;1,146.997399,67.679,1;1,147.361772,67.313,1;1,147.497926,67.177,1;1,147.619184,67.056,1;1,147.936894,66.742,1;!audio:1,123.383503,51.602,1;1,123.39352,56.584,1;1,123.407074,61.586,1;1,123.419756,66.566,1;1,123.429216,71.549,1;1,112.399681,0.000,1;1,112.399681,2.585,1;1,112.658758,"
		"7.373,1;1,112.672484,12.321,1;1,112.689182,17.296,1;1,112.698518,22.279,1;1,112.709173,27.284,1;1,112.720287,32.265,1;1,112.7315,37.246,1;1,112.776751,42.217,1;1,112.803877,47.182,1;1,112.834714,52.143,1;1,112.857542,57.136,1;1,112.937722,62.048,1;1,112.948936,67.029,1;1,112.970684,72.023,1;1,116.490005,73.614,1;1,121.524708,73.585,1;1,126.06842,74.097,1;1,131.15998,74.024,1;1,135.763842,74.226,1;1,140.863287,74.192,1;1,215.355,54.387,1;1,215.355,0.000,1;1,215.855,0.000,1;"
		"!%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid="
		"000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099116201681109911534%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:43,%5C%22range%5C%22:%5C%227400390-7572169%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:214.99335600907028,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:3050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22retryTimes%5C%22:1,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111416811099116191681109911423%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cquality_toast_show%7C%7B%22TBD%22:1%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&"
		"uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,"
		"mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111416811099144141681109914368%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidebar%7C%7B%22val%22:160.304449%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&"
		"uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111416811099134161681109913309%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&"
		"deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,"
		"mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099170111681109916928%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:2050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111416811099138131681109913709%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&"
		"deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099178101681109917660%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cvideo_buffer%7C%7B%22val%22:220.345331,%22abl%22:null,%22vbl%22:127.114%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099198141681109919658%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cstuck_rescue%7C%7B%22ct%22:220.345331,%22st%22:220.845331%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099224091681109922214%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:2050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099232101681109923159%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cvideo_buffer%7C%7B%22val%22:220.845331,%22abl%22:null,%22vbl%22:127.114%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099252101681109925160%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cweb_loadlag%7C%7B%22ct%22:220.845331,%22bt%22:0,%22vbl%22:121.624,%22abl%22:null,%22msg%22:%22video:1,125.576877,69.963,1;1,130.668164,69.847,1;1,135.747902,69.861,1;1,140.847126,69.548,1;1,144.926782,69.876,1;1,144.946647,69.729,1;1,144.954491,69.721,1;1,144.96417,69.711,1;1,144.971442,69.704,1;1,144.983765,69.691,1;1,144.995996,69.679,1;1,145.097698,69.577,1;1,145.160425,69.515,1;1,145.233786,69.441,1;1,145.272902,69.402"
		",1;1,145.321765,69.353,1;1,145.532087,69.143,1;1,145.615046,69.060,1;1,145.749435,68.926,1;1,146.212564,68.463,1;1,146.295454,68.381,1;1,146.617284,68.058,1;1,146.71852,67.957,1;1,146.862382,67.813,1;1,146.919027,67.756,1;1,146.997399,67.679,1;1,147.361772,67.313,1;1,147.497926,67.177,1;1,147.619184,67.056,1;1,147.936894,66.742,1;!audio:1,123.407074,61.586,1;1,123.419756,66.566,1;1,123.429216,71.549,1;1,112.399681,0.000,1;1,112.399681,2.585,1;1,112.658758,7.373,1;1,112.672484,12.321,1;1,112.689182"
		",17.296,1;1,112.698518,22.279,1;1,112.709173,27.284,1;1,112.720287,32.265,1;1,112.7315,37.246,1;1,112.776751,42.217,1;1,112.803877,47.182,1;1,112.834714,52.143,1;1,112.857542,57.136,1;1,112.937722,62.048,1;1,112.948936,67.029,1;1,112.970684,72.023,1;1,116.490005,73.614,1;1,121.524708,73.585,1;1,126.06842,74.097,1;1,131.15998,74.024,1;1,135.763842,74.226,1;1,140.863287,74.192,1;1,215.355,54.387,1;1,215.355,0.000,1;1,215.855,0.000,1;1,220.345331,0.000,1;1,220.845331,0.000,1;"
		"!%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid="
		"000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=web?00111116811099254091681109925295%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:3050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22retryTimes%5C%22:1,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=1,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_stream_open("ID=1", "URL=https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_custom_request("v1", 
		"URL=http://h5data.talkingdata.net/app/v1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"Body={\"deviceId\":\"E5EZ72X7IBOFNK4B\",\"appkey\":\"7E6832BCE3F1438696579E541DFEBFDA\",\"appProfile\":{\"versionName\":\"2.3.1\",\"versionCode\":\"2.3.1\",\"initTime\":1676606179517,\"sdkVersion\":\"H5+APP+v1.0.6\",\"partner\":\"\"},\"deviceProfile\":{\"pixel\":\"1280*720*1.5\",\"language\":\"zh-CN\",\"timezone\":8},\"msgs\":[{\"type\":2,\"data\":{\"id\":\"E5EZ72X7IBOFNK4B1681109620360000\",\"start\":1681109620361,\"status\":2,\"duration\":0,\"pages\":[],\"events\":[{\"count\":1,\"start\""
		":1681109928317,\"id\":\"upload\",\"label\":\"gitee\",\"params\":{\"by\":\"files\",\"count\":1,\"duration\":2000,\"type\":\"gitee\",\"from\":\"picgo://./index.html#/main-page/upload\"}}]}}]}", 
		EXTRARES, 
		"Url=https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,"
		"mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_header("X-360-Cloud-Security-Desc", 
		"Scan Suspicious File");

	web_add_header("x-360-ver", 
		"4");

	web_submit_data("cloudquery.php", 
		"Action=http://36.99.172.92/cloudquery.php", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=m", "Value=\n(*?", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111116811099294201681109929366%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4106,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:0,%5C%22url%5C%22:%5C%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22total%5C%22:null,%5C%22timeout%5C%22:4050,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22retryTimes%5C%22:2,%5C%22code%5C%22:4106,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://upos-sz-mirrorhw.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=hwbv&oi=1023387184&trid=64ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=53e65ae04925f9152edfd237081fd06f&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&bvc=vod&nettype=0&orderid=2,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=40000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs"
		"=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-quic,0RTT,BBRv2,32,0.015000,QUIC_VERSION_IETF_RFC_V1%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22"
		":true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,"
		"%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://www.bilibili.com");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("total_4",
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036998",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8",
		"Snapshot=t10.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://gitee.com/zou_tangrui/note-pic/raw/master/img/202304101458806.png", ENDITEM,
		"URL=https://data.bilibili.com/log/web?00111116811099330171681109933009%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4102,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:171774,%5C%22url%5C%22:%5C%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=3448"
		"3&np=151404637&logo=80000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22retryTimes%5C%22:3,%5C%22code%5C%22:4102,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C1%7C2%7C2"
		"%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi"
		"=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-h1-server%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22"
		"nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM,
		"URL=https://data.bilibili.com/log/web?00111116811099330161681109932963%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cload_dash_warning%7C%7B%22code%22:4101,%22msg%22:%22[Dash]%20Fragment%20Loaded%20Error,%20%7B%5C%22mediaType%5C%22:%5C%22audio%5C%22,%5C%22id%5C%22:%5C%2230280%5C%22,%5C%22index%5C%22:44,%5C%22range%5C%22:%5C%227572170-7743943%5C%22,%5C%22received%5C%22:11793369,%5C%22url%5C%22:%5C%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34"
		"483&np=151404637&logo=80000000%5C%22,%5C%22startTime%5C%22:219.9856462585034,%5C%22duration%5C%22:4.992290249433107,%5C%22rType%5C%22:%5C%22XHR%5C%22,%5C%22retryTimes%5C%22:3,%5C%22verifiedType%5C%22:2,%5C%22code%5C%22:4101,%5C%22type%5C%22:%5C%22fragmentLoadedError%5C%22%7D%22,%22srcUrl%22:%22https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%22%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712"
		"061287%7C11%7C220%7C1%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=16811153"
		"41&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7Cvtag:bvc-quic,0RTT,BBRv2,32,0.015002,QUIC_VERSION_IETF_RFC_V1,atag:bvc-h1-server%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22l"
		"ogin_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM,
		"URL=https://data.bilibili.com/log/web?00111116811099332221681109933189%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cweb_loadlag_end%7C%7B%22val%22:8029%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C220%7C4%7C2%7C2%7C3%7C80%7C243%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvN"
		"C8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM,
		LAST); 
	*/

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_stream_close("ID=1", LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	lr_think_time(10);

	web_submit_data("heartbeat_2", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=253", ENDITEM, 
		"Name=played_time", "Value=231", ENDITEM, 
		"Name=real_played_time", "Value=253", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=231", ENDITEM, 
		"Name=max_play_progress_time", "Value=230", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111116811099458161681109945804%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Ccdn_bandwidth_info%7C%7B%22cdn%22:17705801,%22p2p%22:0,%22nc%22:0,%22business%22:0,%22mcdn%22:0,%22bcache%22:17705801,%22vcache%22:0,%22ncFail%22:0,%22ncGotFail%22:0%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C255%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111116811099458181681109945804%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Ccdn_bandwidth_info_detail%7C%7B%2280%22:%7B%22cdn%22:12452500,%22p2p%22:0,%22nc%22:0,%22business%22:0,%22mcdn%22:0,%22bcache%22:12452500,%22vcache%22:0,%22ncFail%22:0,%22ncGotFail%22:0%7D,%2230280%22:%7B%22cdn%22:5253301,%22p2p%22:0,%22nc%22:0,%22business%22:0,%22mcdn%22:0,%22bcache%22:5253301,%22vcache%22:0,%22ncFail%22:0,%22ncGotFail%22"
		":0%7D%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C255%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid="
		"000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111116811099460101681109945804%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cdash_requested_info_detail%7C%7B%22TBD%22:[%7B%22co%22:200,%22qn%22:280,%22in%22:38,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:116.5,%22bf%22:73.61,%22lt%22:7,%22dt%22:1,%22cs%22:171676,%22ts%22:171676,%22ry%22:0,%22ht%22:%22cn-sccd-fx-01-03%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:39,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:121.53,%22bf%22:73.58,%22lt%22:8,%22dt%22:1,%22cs%22:153359,"
		"%22ts%22:172529,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:40,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:126.08,%22bf%22:74.1,%22lt%22:14,%22dt%22:1,%22cs%22:91618,%22ts%22:171784,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:41,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:131.2,%22bf%22:74.02,%22lt%22:37,%22dt%22:1,%22cs%22:36159,%22ts%22:171753,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:42,%22rt%22:%22X%22,%22qr%22:%22Q%22,"
		"%22ct%22:135.77,%22bf%22:74.23,%22lt%22:8,%22dt%22:2,%22cs%22:138064,%22ts%22:172580,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:43,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:140.87,%22bf%22:74.19,%22lt%22:7,%22dt%22:1,%22cs%22:171780,%22ts%22:171780,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:43,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:215.35,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:4106,"
		"%22qn%22:280,%22in%22:43,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:215.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:0,%22ht%22:%22upos-sz-mirrorhw%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:43,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:215.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:1,%22ht%22:%22+%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.35,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,"
		"%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:1,%22ht%22:%22+%22%7D,%7B%22co%22:4106,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:0,"
		"%22dt%22:0,%22cs%22:0,%22ts%22:0,%22ry%22:2,%22ht%22:%22+%22%7D,%7B%22co%22:4101,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:11793369,%22ry%22:3,%22ht%22:%22cn-sccd-fx-01-03%22%7D,%7B%22co%22:4102,%22qn%22:280,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22-%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:0,%22dt%22:0,%22cs%22:0,%22ts%22:171774,%22ry%22:3,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:44,%22rt%22"
		":%22X%22,%22qr%22:%22T%22,%22ct%22:220.85,%22bf%22:0,%22lt%22:26,%22dt%22:18,%22cs%22:31232,%22ts%22:171774,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:45,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.85,%22bf%22:4.13,%22lt%22:84,%22dt%22:1,%22cs%22:16433,%22ts%22:172550,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:46,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.87,%22bf%22:9.13,%22lt%22:78,%22dt%22:34,%22cs%22:12269,%22ts%22:171768,%22ry%22:0,"
		"%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:47,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.87,%22bf%22:14.12,%22lt%22:8,%22dt%22:1,%22cs%22:152622,%22ts%22:171700,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:48,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.87,%22bf%22:19.11,%22lt%22:7,%22dt%22:1,%22cs%22:172482,%22ts%22:172482,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:49,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.88,%22bf%22"
		":24.13,%22lt%22:5,%22dt%22:2,%22cs%22:196551,%22ts%22:171982,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:50,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.88,%22bf%22:29.11,%22lt%22:6,%22dt%22:1,%22cs%22:196296,%22ts%22:171759,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:51,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.89,%22bf%22:34.09,%22lt%22:6,%22dt%22:1,%22cs%22:197430,%22ts%22:172751,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280"
		",%22in%22:52,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.91,%22bf%22:39.09,%22lt%22:7,%22dt%22:3,%22cs%22:137282,%22ts%22:171603,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:53,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.92,%22bf%22:44.07,%22lt%22:6,%22dt%22:2,%22cs%22:171807,%22ts%22:171807,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:54,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.94,%22bf%22:49.05,%22lt%22:10,%22dt%22:1,%22cs%22:125529,"
		"%22ts%22:172602,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:55,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.95,%22bf%22:54.06,%22lt%22:6,%22dt%22:1,%22cs%22:196290,%22ts%22:171754,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:56,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.95,%22bf%22:59.04,%22lt%22:6,%22dt%22:1,%22cs%22:196246,%22ts%22:171715,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:57,%22rt%22:%22X%22,%22qr%22"
		":%22T%22,%22ct%22:220.96,%22bf%22:64.02,%22lt%22:7,%22dt%22:1,%22cs%22:172410,%22ts%22:172410,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:58,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.98,%22bf%22:69.03,%22lt%22:10,%22dt%22:1,%22cs%22:125057,%22ts%22:171954,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:59,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:220.99,%22bf%22:74,%22lt%22:6,%22dt%22:1,%22cs%22:196414,%22ts%22:171862,%22ry%22:0,%22ht%22:%22+"
		"%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:60,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.01,%22bf%22:78.98,%22lt%22:10,%22dt%22:2,%22cs%22:115065,%22ts%22:172598,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:61,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.04,%22bf%22:83.99,%22lt%22:26,%22dt%22:1,%22cs%22:50867,%22ts%22:171676,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:62,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.05,%22bf%22:88.95,"
		"%22lt%22:13,%22dt%22:2,%22cs%22:91515,%22ts%22:171590,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:63,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.1,%22bf%22:93.91,%22lt%22:18,%22dt%22:5,%22cs%22:60120,%22ts%22:172844,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:64,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.16,%22bf%22:98.84,%22lt%22:54,%22dt%22:2,%22cs%22:24529,%22ts%22:171701,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,"
		"%22in%22:65,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.18,%22bf%22:103.83,%22lt%22:15,%22dt%22:5,%22cs%22:68767,%22ts%22:171917,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:66,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.2,%22bf%22:108.8,%22lt%22:15,%22dt%22:3,%22cs%22:76635,%22ts%22:172428,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:67,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.24,%22bf%22:113.79,%22lt%22:25,%22dt%22:10,%22cs%22:39261,"
		"%22ts%22:171767,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:280,%22in%22:68,%22rt%22:%22X%22,%22qr%22:%22T%22,%22ct%22:221.26,%22bf%22:118.74,%22lt%22:11,%22dt%22:1,%22cs%22:61470,%22ts%22:92205,%22ry%22:0,%22ht%22:%22+%22%7D]%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C255%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111116811099458171681109945804%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cnc_response_info%7C%7B%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C255%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111116811099460091681109945804%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cdash_requested_info_detail%7C%7B%22TBD%22:[%7B%22co%22:200,%22qn%22:80,%22in%22:37,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:116.01,%22bf%22:69.53,%22lt%22:8,%22dt%22:1,%22cs%22:187964,%22ts%22:211460,%22ry%22:0,%22ht%22:%22cn-sccd-fx-01-02%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:38,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:121.04,%22bf%22:69.48,%22lt%22:9,%22dt%22:3,%22cs%22:213687,"
		"%22ts%22:320531,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:39,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:125.59,%22bf%22:69.96,%22lt%22:7,%22dt%22:2,%22cs%22:163496,%22ts%22:183933,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:40,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:130.69,%22bf%22:69.66,%22lt%22:12,%22dt%22:4,%22cs%22:82863,%22ts%22:165726,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:41,%22rt%22:%22X%22,%22qr%22:%22Q%22,"
		"%22ct%22:135.76,%22bf%22:69.59,%22lt%22:8,%22dt%22:1,%22cs%22:109063,%22ts%22:122696,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:42,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:140.86,%22bf%22:69.55,%22lt%22:7,%22dt%22:1,%22cs%22:101382,%22ts%22:101382,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:43,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.94,%22bf%22:69.88,%22lt%22:9,%22dt%22:1,%22cs%22:76732,%22ts%22:95915,%22ry%22:0,%22ht%22:%22+%22%7D,"
		"%7B%22co%22:200,%22qn%22:80,%22in%22:44,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.95,%22bf%22:69.73,%22lt%22:5,%22dt%22:1,%22cs%22:126084,%22ts%22:94563,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:45,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.96,%22bf%22:69.72,%22lt%22:7,%22dt%22:1,%22cs%22:92286,%22ts%22:92286,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:46,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.97,%22bf%22:69.71,%22lt%22:5,%22dt%22"
		":1,%22cs%22:122616,%22ts%22:91962,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:47,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.98,%22bf%22:69.7,%22lt%22:9,%22dt%22:1,%22cs%22:102172,%22ts%22:127715,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:48,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:144.99,%22bf%22:69.69,%22lt%22:7,%22dt%22:2,%22cs%22:244049,%22ts%22:274555,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:49,%22rt%22:%22X%22,"
		"%22qr%22:%22Q%22,%22ct%22:145.1,%22bf%22:69.61,%22lt%22:61,%22dt%22:39,%22cs%22:13888,%22ts%22:173596,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:50,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.16,%22bf%22:69.58,%22lt%22:13,%22dt%22:46,%22cs%22:34125,%22ts%22:251675,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:51,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.23,%22bf%22:69.52,%22lt%22:23,%22dt%22:48,%22cs%22:28805,%22ts%22:255644,%22ry%22:0,"
		"%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:52,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.27,%22bf%22:69.44,%22lt%22:11,%22dt%22:26,%22cs%22:26507,%22ts%22:122596,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:53,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.32,%22bf%22:69.36,%22lt%22:15,%22dt%22:32,%22cs%22:32378,%22ts%22:190220,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:54,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.53,%22bf%22"
		":69.34,%22lt%22:20,%22dt%22:187,%22cs%22:33724,%22ts%22:872613,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:55,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.61,%22bf%22:69.08,%22lt%22:12,%22dt%22:62,%22cs%22:32656,%22ts%22:302072,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:56,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:145.75,%22bf%22:69,%22lt%22:14,%22dt%22:118,%22cs%22:28369,%22ts%22:468086,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,"
		"%22in%22:57,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.21,%22bf%22:68.55,%22lt%22:15,%22dt%22:443,%22cs%22:27290,%22ts%22:1562343,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:58,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.29,%22bf%22:68.46,%22lt%22:12,%22dt%22:64,%22cs%22:41019,%22ts%22:389676,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:59,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.62,%22bf%22:68.28,%22lt%22:36,%22dt%22:282,%22cs%22:10508,"
		"%22ts%22:417709,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:60,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.72,%22bf%22:68.02,%22lt%22:15,%22dt%22:83,%22cs%22:35880,%22ts%22:439534,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:61,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.86,%22bf%22:67.92,%22lt%22:11,%22dt%22:130,%22cs%22:29870,%22ts%22:526459,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:62,%22rt%22:%22X%22,%22qr%22"
		":%22Q%22,%22ct%22:146.92,%22bf%22:67.81,%22lt%22:13,%22dt%22:41,%22cs%22:48928,%22ts%22:330267,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:63,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:146.99,%22bf%22:67.75,%22lt%22:24,%22dt%22:50,%22cs%22:46038,%22ts%22:425847,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:64,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:147.36,%22bf%22:67.48,%22lt%22:11,%22dt%22:346,%22cs%22:26685,%22ts%22:1190804,%22ry%22:0,%22ht%22:%22"
		"+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:65,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:147.5,%22bf%22:67.2,%22lt%22:15,%22dt%22:119,%22cs%22:33929,%22ts%22:568303,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:66,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:147.62,%22bf%22:67.18,%22lt%22:15,%22dt%22:104,%22cs%22:32884,%22ts%22:489153,%22ry%22:0,%22ht%22:%22+%22%7D,%7B%22co%22:200,%22qn%22:80,%22in%22:67,%22rt%22:%22X%22,%22qr%22:%22Q%22,%22ct%22:147.92,%22bf%22:66.85,"
		"%22lt%22:14,%22dt%22:289,%22cs%22:42064,%22ts%22:1593179,%22ry%22:0,%22ht%22:%22+%22%7D]%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C255%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline="
		"1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099496581681109949658%7C%7C%7Cpcdn__track%7C%7B%22reportFailure%22:0,%22reportSuccess%22:0,%22seederDataChannelOpen%22:0,%22getDataFromDBSuccess%22:0,%22getDataFromDBFail%22:0,%22sendBytes%22:0,%22sendSuccessBytes%22:0,%22receivedOffer%22:0,%22receivedGetData%22:0,%22sendFinished%22:0,%22offerAccepted%22:0,%22setRemoteDescErr%22:0,%22setLocalDescErr%22:0,%22createAnswerErr%22:0,%22pcdnReportFailure%22:0,%22pcdnReportError%22:0,"
		"%22seederDataChannelOpen_ali%22:0,%22seederDataChannelOpen_hw2%22:0,%22getDataFromDBSuccess_ali%22:0,%22getDataFromDBSuccess_hw2%22:0,%22getDataFromDBFail_ali%22:0,%22getDataFromDBFail_hw2%22:0,%22sendBytes_ali%22:0,%22sendBytes_hw2%22:0,%22sendSuccessBytes_ali%22:0,%22sendSuccessBytes_hw2%22:0,%22receivedOffer_ali%22:0,%22receivedOffer_hw2%22:0,%22receivedGetData_ali%22:0,%22receivedGetData_hw2%22:0,%22sendFinished_ali%22:0,%22sendFinished_hw2%22:0,%22offerAccepted_ali%22:0,"
		"%22offerAccepted_hw2%22:0,%22setRemoteDescErr_ali%22:0,%22setRemoteDescErr_hw2%22:0,%22setLocalDescErr_ali%22:0,%22setLocalDescErr_hw2%22:0,%22createAnswerErr_ali%22:0,%22createAnswerErr_hw2%22:0,%22pcdnReportFailure_ali%22:0,%22pcdnReportFailure_hw2%22:0,%22pcdnReportError_ali%22:0,%22pcdnReportError_hw2%22:0,%22sessionid%22:%22TlCBfkGUxyGxoK_5IyMfx%22,%22vendor%22:12%7D%7C%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C0%7C%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,"
		"%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22"
		":%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22seederVersion%22:%220.2.2%22%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_url("single_unread_2", 
		"URL=https://api.vc.bilibili.com/session_svr/v1/session_svr/single_unread?build=0&mobi_app=web&unread_type=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111416811099518121681109951650%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C239%7C4%7C2%7C2%7C3%7C80%7C261%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_cookie("buvid3=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc; DOMAIN=message.bilibili.com");

	web_add_cookie("LIVE_BUVID=AUTO8316305780900062; DOMAIN=message.bilibili.com");

	web_add_cookie("i-wanna-go-back=-1; DOMAIN=message.bilibili.com");

	web_add_cookie("CURRENT_BLACKGAP=0; DOMAIN=message.bilibili.com");

	web_add_cookie("buvid_fp_plain=undefined; DOMAIN=message.bilibili.com");

	web_add_cookie("DedeUserID=673893024; DOMAIN=message.bilibili.com");

	web_add_cookie("DedeUserID__ckMd5=2cd2d0b84d8c5889; DOMAIN=message.bilibili.com");

	web_add_cookie("b_ut=5; DOMAIN=message.bilibili.com");

	web_add_cookie("blackside_state=0; DOMAIN=message.bilibili.com");

	web_add_cookie("b_nut=100; DOMAIN=message.bilibili.com");

	web_add_cookie("_uuid=103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc; DOMAIN=message.bilibili.com");

	web_add_cookie("rpdid=|(u~|)|YRkm|0J'uYY)Y|u)Rk; DOMAIN=message.bilibili.com");

	web_add_cookie("buvid4=9E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D; DOMAIN=message.bilibili.com");

	web_add_cookie("CURRENT_QUALITY=80; DOMAIN=message.bilibili.com");

	web_add_cookie("fingerprint=2f627cc37e9f1174e7e77d1902a3843e; DOMAIN=message.bilibili.com");

	web_add_cookie("buvid_fp=40f09ed9caeb2cd24147a2ca821d9c20; DOMAIN=message.bilibili.com");

	web_add_cookie("header_theme_version=CLOSE; DOMAIN=message.bilibili.com");

	web_add_cookie("home_feed_column=4; DOMAIN=message.bilibili.com");

	web_add_cookie("is-2022-channel=1; DOMAIN=message.bilibili.com");

	web_add_cookie("nostalgia_conf=-1; DOMAIN=message.bilibili.com");

	web_add_cookie("CURRENT_FNVAL=16; DOMAIN=message.bilibili.com");

	web_add_cookie("PVID=1; DOMAIN=message.bilibili.com");

	web_add_cookie("CURRENT_PID=51cd2190-cd27-11ed-861d-afdfa3449339; DOMAIN=message.bilibili.com");

	web_add_cookie("bp_video_offset_673893024=780577801968287900; DOMAIN=message.bilibili.com");

	web_add_cookie("b_lsid=53EE64B8_18769DA59A8; DOMAIN=message.bilibili.com");

	web_add_cookie("SESSDATA=56625786%2C1696660137%2C829c5%2A41; DOMAIN=message.bilibili.com");

	web_add_cookie("bili_jct=3e8d7e903b79c0da5fe74d138a51edb0; DOMAIN=message.bilibili.com");

	web_add_cookie("innersign=1; DOMAIN=message.bilibili.com");

	web_add_cookie("sid=olmlsg28; DOMAIN=message.bilibili.com");

	web_url("query.list.do", 
		"URL=https://message.bilibili.com/api/tooltip/query.list.do", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111416811099534271681109953388%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C240%7C4%7C2%7C2%7C3%7C80%7C263%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099544101681109954363%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C241%7C4%7C2%7C2%7C3%7C80%7C264%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099548261681109954822%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpause_screen%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C242%7C4%7C2%7C2%7C3%7C80%7C264%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_submit_data("heartbeat_3", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=2", ENDITEM, 
		"Name=realtime", "Value=264", ENDITEM, 
		"Name=played_time", "Value=242", ENDITEM, 
		"Name=real_played_time", "Value=264", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=242", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		LAST);

	lr_think_time(4);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("total_5",
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56036999",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8",
		"Snapshot=t15.inf",
		"Mode=HTML",
		LAST); 
	*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	lr_think_time(7);

	web_custom_request("web_2", 
		"URL=https://data.bilibili.com/log/web?0133241681109967869https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681109967869%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:10,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=web?00111416811099696181681109969608%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:242.276043%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C237%7C1%7C2%7C2%7C3%7C80%7C264%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&"
		"uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,"
		"%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://"
		"www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("heartbeat_4", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=3", ENDITEM, 
		"Name=realtime", "Value=264", ENDITEM, 
		"Name=played_time", "Value=237", ENDITEM, 
		"Name=real_played_time", "Value=264", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=237", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111416811099704101681109970217%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:237.498093%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C232%7C1%7C2%7C2%7C3%7C80%7C264%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099710151681109970871%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:233.178656%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C228%7C1%7C2%7C2%7C3%7C80%7C265%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099716101681109971521%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:228.381971%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C223%7C1%7C2%7C2%7C3%7C80%7C266%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099720091681109971822%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:223.629618%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C218%7C1%7C2%7C2%7C3%7C80%7C266%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099722151681109972022%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidekey%7C%7B%22TBD%22:223.629618%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C213%7C1%7C2%7C2%7C3%7C80%7C266%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111116811099730461681109972994%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpredict_seek%7C%7B%22ct%22:214.36069,%22des%22:215.355%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C267%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099732171681109973153%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C4%7C2%7C2%7C3%7C80%7C267%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_submit_data("heartbeat_5", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=268", ENDITEM, 
		"Name=played_time", "Value=216", ENDITEM, 
		"Name=real_played_time", "Value=268", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=216", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111416811099740161681109973995%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidebar%7C%7B%22val%22:216.07101%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C205%7C1%7C2%7C2%7C3%7C80%7C268%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099754151681109975290%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C206%7C4%7C2%7C2%7C3%7C80%7C269%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		"Url=https://data.bilibili.com/log/web?00111416811099760091681109975903%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cslidebar%7C%7B%22val%22:206.624417%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C189%7C1%7C2%7C2%7C3%7C80%7C270%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"http://cfgjt.cn:8981");

	lr_think_time(8);

	web_custom_request("login.do", 
		"URL=http://cfgjt.cn:8981/devt-service/api/login.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}", 
		LAST);

	web_custom_request("wdinfo.php", 
		"URL=http://qurl.f.360.cn/wdinfo.php", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"Body=\n!�", 
		LAST);

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	web_custom_request("menu.do", 
		"URL=http://cfgjt.cn:8981/devt-service/staff/menu.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"portalAcctName\":\"admin\"}", 
		EXTRARES, 
		"Url=/devt-web/assets/fill/backward.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_custom_request("planinfo.do", 
		"URL=http://cfgjt.cn:8981/devt-service/colorplan/planinfo.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"planId\":\"1\"}", 
		EXTRARES, 
		"Url=/devt-web/assets/fill/forward.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/logout.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/redo.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_custom_request("getWsPath.do", 
		"URL=http://cfgjt.cn:8981/devt-service/comm/getWsPath.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={}", 
		EXTRARES, 
		"Url=/devt-web/assets/outline/eye-invisible.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/setting.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_custom_request("list.do", 
		"URL=http://cfgjt.cn:8981/devt-service/devtCompBl/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":500}", 
		LAST);

	web_custom_request("list.do_2", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}", 
		EXTRARES, 
		"Url=/devt-web/assets/outline/plus.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/shrink.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=/devt-web/assets/outline/exclamation.svg", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1681109988044", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		"Url=../httpCompImg.do?path=element-plus&code=214680&fileName=no.png&timestamp=1681109988045", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.bilibili.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(5);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("total_6",
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56037000",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8",
		"Snapshot=t26.inf",
		"Mode=HTML",
		LAST); 
	*/

	web_submit_data("heartbeat_6", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=283", ENDITEM, 
		"Name=played_time", "Value=201", ENDITEM, 
		"Name=real_played_time", "Value=283", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=201", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("web_3", 
		"URL=https://data.bilibili.com/log/web?0133241681109988869https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681109988869%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:0,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("web_4", 
		"URL=https://data.bilibili.com/log/web?0133241681109986067https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681109986067%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:7,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Origin", 
		"http://cfgjt.cn:8981");

	web_custom_request("list.do_3", 
		"URL=http://cfgjt.cn:8981/devt-service/devtComp/list.do", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://cfgjt.cn:8981/devt-web/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"currentPage\":1,\"pageSize\":10,\"name\":\"文本\",\"treeId\":null}", 
		EXTRARES, 
		"Url=../httpCompImg.do?path=element-plus&code=textarea1&fileName=1635186324896.png&timestamp=1681109997694", "Referer=http://cfgjt.cn:8981/devt-web/", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.bilibili.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"111\", \"Not(A:Brand\";v=\"8\", \"Chromium\";v=\"111\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("web_5", 
		"URL=https://data.bilibili.com/log/web?0133241681109998935https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681109998935%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:9,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("web_6", 
		"URL=https://data.bilibili.com/log/web?0133241681110000390https%3A%2F%2Fwww.bilibili.com%2Fvideo%2FBV17T4y167NY%2F%3Fp%3D11%26spm_id_from%3D333.1007.top_right_bar_window_history.content.click%26vd_source%3Ddecee64fc347c1311c077fecf31444c8%7C333.788.video.new.page_hang_time%7C%7C1681110000390%7C%7C%7C1280x587%7C1%7C%7B%22counting_seconds%22:0,%22b_nut_h%22:0,%22lsid%22:%2253EE64B8_18769DA59A8%22,%22buvid_fp%22:%2240f09ed9caeb2cd24147a2ca821d9c20%22,%22buvid4%22"
		":%229E1E10E9-3797-D7D8-9104-38D68249A20A79175-022012117-HNYvTHSPdBQx2NM68Ct1tApYy976kRGSYiICOIxTSYQA%2F4HsFUMaTQ%3D%3D%22,%22bsource_origin%22:%22empty%22,%22share_source_origin%22:%22empty%22%7D%7C%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22"
		":%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22"
		":null%7D%7Chttps%3A%2F%2Fwww.bilibili.com%2F%7C103B81AF8-ACAA-B1F1-2297-131C8D931101943764infoc%7Czh-CN%7Cnull%7C1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=web?00111116811100016101681110001414%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpredict_seek%7C%7B%22ct%22:214.270566,%22des%22:215.355%7D%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C215%7C1%7C2%7C2%7C3%7C80%7C295%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_submit_data("heartbeat_7", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=298", ENDITEM, 
		"Name=played_time", "Value=217", ENDITEM, 
		"Name=real_played_time", "Value=298", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=217", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_url("query.list.do_2", 
		"URL=https://message.bilibili.com/api/tooltip/query.list.do", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(7);

	web_submit_data("heartbeat_8", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=312", ENDITEM, 
		"Name=played_time", "Value=232", ENDITEM, 
		"Name=real_played_time", "Value=312", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=232", ENDITEM, 
		"Name=max_play_progress_time", "Value=242", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		EXTRARES, 
		"Url=https://data.bilibili.com/log/web?00111416811100198091681110019688%7CDefault:Ugc:0%7C4.0.4-cfc84eb8%7Cpreview_new_show%7C%7C76f471015fdc83b937d2a88e3c79e882%7C%7C%7C938858325%7C712061287%7C11%7C233%7C4%7C2%7C2%7C3%7C80%7C313%7Chttps://cn-sccd-fx-01-02.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30080.m4s?e="
		"ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid=673893024&platform=pc&upsig=d719d2acc7b5a63944a44c9c1f2cef6a&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3902&bvc=vod&nettype=0&orderid=0,3&buvid="
		"50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=66126&np=151404637&logo=80000000,https://cn-sccd-fx-01-03.bilivideo.com/upgcxcode/87/12/712061287/712061287-1-30280.m4s?e=ig8euxZM2rNcNbdlhoNvNC8BqJIzNbfqXBvEqxTEto8BTrNvN0GvT90W5JZMkX_YN0MvXg8gNEV4NC8xNEV4N03eN0B5tZlqNxTEto8BTrNvNeZVuJ10Kj_g2UB02J0mN0B5tZlqNCNEto8BTrNvNC7MTX502C8f2jmMQJ6mqF2fka1mqx6gqj0eN0B599M=&uipk=5&nbs=1&deadline=1681115341&gen=playurlv2&os=bcache&oi=1023387184&trid=000064ca602d046f4309a4d78ba8e6a28392u&mid="
		"673893024&platform=pc&upsig=49f9b28048104fc3acf947eb2f63a086&uparams=e,uipk,nbs,deadline,gen,os,oi,trid,mid,platform&cdnid=3903&bvc=vod&nettype=0&orderid=0,3&buvid=50B3CE5D-8B7F-4731-8A74-6753DB2B7A05143091infoc&build=0&agrr=1&bw=34483&np=151404637&logo=80000000%7C%7C%7C%7B%22webAbTest%22:%7B%22seeder_web_test%22:%221%22,%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,"
		"%22storage_back_btn%22:%22HIDE%22,%22in_new_ab%22:true,%22ab_version%22:%7B%22remove_back_version%22:%22SHOW%22,%22login_dialog_version%22:%22V_EVERY_PLAY_INTERNVAL%22,%22nano_white_screen%22:%22V_HIT%22,%22open_recommend_blank%22:%22SELF%22,%22storage_back_btn%22:%22HIDE%22,%22seeder_web_test%22:%221%22%7D,%22ab_split_num%22:%7B%22remove_back_version%22:18,%22login_dialog_version%22:51,%22nano_white_screen%22:61,%22open_recommend_blank%22:73,%22storage_back_btn%22:4,%22seeder_web_test%22:0%7D,"
		"%22pageVersion%22:%22new_video%22,%22videoGoOldVersion%22:null%7D,%22playerIdle%22:%22eg%22,%22qn%22:80,%22aq%22:30280,%22loaderEnabled%22:true%7D", "Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", ENDITEM, 
		LAST);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_url("total_7",
		"URL=https://api.bilibili.com/x/player/online/total?aid=938858325&cid=712061287&bvid=BV17T4y167NY&ts=56037001",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8",
		"Snapshot=t36.inf",
		"Mode=HTML",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	lr_think_time(12);

	web_submit_data("heartbeat_9", 
		"Action=https://api.bilibili.com/x/click-interface/web/heartbeat", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.bilibili.com/video/BV17T4y167NY/?p=11&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=decee64fc347c1311c077fecf31444c8", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=start_ts", "Value=1681108144", ENDITEM, 
		"Name=mid", "Value=673893024", ENDITEM, 
		"Name=aid", "Value=938858325", ENDITEM, 
		"Name=cid", "Value=712061287", ENDITEM, 
		"Name=type", "Value=3", ENDITEM, 
		"Name=sub_type", "Value=0", ENDITEM, 
		"Name=dt", "Value=2", ENDITEM, 
		"Name=play_type", "Value=0", ENDITEM, 
		"Name=realtime", "Value=328", ENDITEM, 
		"Name=played_time", "Value=247", ENDITEM, 
		"Name=real_played_time", "Value=328", ENDITEM, 
		"Name=refer_url", "Value=https://www.bilibili.com/", ENDITEM, 
		"Name=quality", "Value=80", ENDITEM, 
		"Name=video_duration", "Value=342", ENDITEM, 
		"Name=last_play_progress_time", "Value=247", ENDITEM, 
		"Name=max_play_progress_time", "Value=247", ENDITEM, 
		"Name=spmid", "Value=333.788.0.0", ENDITEM, 
		"Name=from_spmid", "Value=333.1007.top_right_bar_window_history.content.click", ENDITEM, 
		"Name=csrf", "Value=3e8d7e903b79c0da5fe74d138a51edb0", ENDITEM, 
		LAST);

	return 0;
}