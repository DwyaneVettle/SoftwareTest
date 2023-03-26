#include <stdio.h>
#define ASSERT(y) if(y){  printf("出错文件：%s\n",__FILE__);\
						        printf("在第%d行：\n",__LINE__\);
printf("提示：除数不能为0！\n");\
}         //定义ASSERT(y)
int main()
{ 
	int x,y;
	printf("请输入被除数：");
	scanf("%d",&x);
	printf("请输入除数：");
	scanf("%d",&y);
	ASSERT(y==0);             //插入的桩
	printf("%d",x/y);
	return 0;
}
