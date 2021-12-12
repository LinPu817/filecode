#include<stdio.h> 
int main(){
	int input;
	scanf("%d",&input);
	if(input%3==0&&input%5==0&&input%7==0) 
	{
		printf("nengtongshibei3,5,7zhengchu\n");
	}
	else if(input%3==0&&input%5==0)
	{
		printf("nengtongshibei3,5zhengchu\n");
	}
	else if(input%3==0&&input%7==0)
	{
		printf("nengtongshibei3,7zhengchu\n");
	}
	else if(input%5==0&&input%7==0)
	{
		printf("nengtongshibei5,7zhengchu\n");
	}
    else if(input%3==0)
    {
    	printf("nengtongshibei3zhengchu\n");
	}
	else if(input%5==0)
    {
    	printf("nengtongshibei5zhengchu\n");
	}
	else if(input%7==0)
    {
    	printf("nengtongshibei7zhengchu\n");
	}
} 
