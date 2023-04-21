
	void say(int flag){
    if(flag==0){
        lr_log_message("我是偶数");
    }else{
        lr_log_message("我是奇数");
    }
}
Action() {
	int i=0;
    for(i=0;i<10;i++){
    	if(i%2==0){
    		say(0);
    	}else{
    		say(1);
    	}
	}
return 0;
}