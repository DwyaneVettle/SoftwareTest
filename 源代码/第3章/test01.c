#include <stdio.h>
#define ASSERT(y) if(y){  printf("�����ļ���%s\n",__FILE__);\
						        printf("�ڵ�%d�У�\n",__LINE__\);
printf("��ʾ����������Ϊ0��\n");\
}         //����ASSERT(y)
int main()
{ 
	int x,y;
	printf("�����뱻������");
	scanf("%d",&x);
	printf("�����������");
	scanf("%d",&y);
	ASSERT(y==0);             //�����׮
	printf("%d",x/y);
	return 0;
}
