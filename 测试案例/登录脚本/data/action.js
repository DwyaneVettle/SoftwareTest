//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
//" Script Title       : 
//"                      
//" Script Date        : Sat Apr 22 14:03:36 2023
//"                       
//"'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

function Action()
{
	web.addHeader('Upgrade-Insecure-Requests', 
		'1');

	web.url(
		{
			name : 'devt-web', 
			url : 'http://cfgjt.cn:8981/devt-web', 
			resource : 0, 
			recContentType : 'text/html', 
			referer : '', 
			snapshot : 't1.inf', 
			mode : 'HTML', 
			extraRes :  [
				{url : '/devt-web/styles.2ea3cb3a29598ff3a901.css', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/runtime.7b63b9fd40098a2e8207.js', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/polyfills.1111712f963ef64beaec.js', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/scripts.521e2067e75cd94ae49c.js', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/main.2e3b714f083eb6eadafc.js', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/vs/editor/editor.main.css', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/user.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/lock.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/bg.46df42f1ef4c91e3508f.png', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/favicon.ico', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/logout.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/fill/backward.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/redo.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/setting.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/fill/forward.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/eye-invisible.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/plus.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/shrink.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-web/assets/outline/exclamation.svg', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=munb&fileName=no.png&timestamp=1682143405441', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=1&fileName=no.png&timestamp=1682143405441', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=others&code=183&fileName=no.png&timestamp=1682143405441', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=breadcrumb1&fileName=1635753774297.png&timestamp=1682143405441', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=table0&fileName=1632897923040.png&timestamp=1682143405442', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=others&code=72881&fileName=no.png&timestamp=1682143405441', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=container&fileName=1631004434416.png&timestamp=1682143405442', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=aq&fileName=no.png&timestamp=1682143405442', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=h5contain1&fileName=1634998089813.png&timestamp=1682143405442', referer : 'http://cfgjt.cn:8981/devt-web/'},
				{url : '/devt-service/httpCompImg.do?path=element-plus&code=624400&fileName=no.png&timestamp=1682143405442', referer : 'http://cfgjt.cn:8981/devt-web/'}
			]
		}
	);

	web.setSocketsOption('SSL_VERSION', 'AUTO');

	web.addHeader('Sec-Fetch-Dest', 
		'empty');

	web.addHeader('Sec-Fetch-Mode', 
		'no-cors');

	web.addHeader('Sec-Fetch-Site', 
		'none');

	web.url(
		{
			name : 'selection', 
			url : 'https://arc.msn.com/v4/api/selection?placement=88000360&nct=1&fmt=json&ADEFAB=1&OPSYS=WIN10&locale=zh-CN&country=CN&edgeid=7458841061940207623&ACHANNEL=4&ABUILD=108.0.5359.125&poptin=0&devosver=10.0.19044.2846&clr=esdk&UITHEME=light&EPCON=0&AMAJOR=108&AMINOR=0&ABLD=5359&APATCH=125', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : '', 
			snapshot : 't2.inf', 
			mode : 'HTML'
		}
	);

	web.addAutoHeader('Origin', 
		'http://cfgjt.cn:8981');

	web.customRequest(
		{
			name : 'login.do', 
			url : 'http://cfgjt.cn:8981/devt-service/api/login.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't3.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"acctName\":\"admin\",\"acctPwd\":\"11111111\",\"type\":\"0\"}'
		}
	);

	web.customRequest(
		{
			name : 'menu.do', 
			url : 'http://cfgjt.cn:8981/devt-service/staff/menu.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't4.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"portalAcctName\":\"admin\"}'
		}
	);

	web.customRequest(
		{
			name : 'planinfo.do', 
			url : 'http://cfgjt.cn:8981/devt-service/colorplan/planinfo.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't5.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"planId\":\"1\"}'
		}
	);

	web.customRequest(
		{
			name : 'getWsPath.do', 
			url : 'http://cfgjt.cn:8981/devt-service/comm/getWsPath.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't6.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{}'
		}
	);

	web.customRequest(
		{
			name : 'list.do', 
			url : 'http://cfgjt.cn:8981/devt-service/devtCompBl/list.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't7.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"currentPage\":1,\"pageSize\":500}'
		}
	);

	web.customRequest(
		{
			name : 'list.do_2', 
			url : 'http://cfgjt.cn:8981/devt-service/devtComp/list.do', 
			method : 'POST', 
			resource : 0, 
			recContentType : 'application/json', 
			referer : 'http://cfgjt.cn:8981/devt-web/', 
			snapshot : 't8.inf', 
			mode : 'HTML', 
			encType : 'application/json', 
			body : '{\"currentPage\":1,\"pageSize\":10,\"name\":\"\",\"treeId\":null}', 
			extraRes :  [
				{url : 'http://cfgjt.cn:8780/devt-service/websocket.ws?id=HW7tmDcyrjT7ynXR', referer : ''}
			]
		}
	);

	return 0;
}

