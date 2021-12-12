#include<stdio.h> 
int main()
{
	printf("请输入一个数：");
	int input;
	scanf("%d",&input);
	if(input%35==0)
	{
		printf("yes");
	 } 
	else
	    printf("no");
	return 0;
}
