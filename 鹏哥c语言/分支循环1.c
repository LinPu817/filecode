#include<stdio.h>
int main(){
	int ret;
	int ch;
	char input[20]={0};
	printf("请输入密码->\n");
	scanf("%s",&input);
	printf("请输入Y/N确认：");
	while((ch=getchar())!='\n')
	{
		;
	}
	ret=getchar();
	if(ret=='Y')
	{
		printf("确认成功"); 
	 } 
	 else
	 {
	 	printf("确认失败");
	 }
	return 0;
} 
