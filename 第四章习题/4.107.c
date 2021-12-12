#include<stdio.h> 
int main()
{
	do{
	printf("shuruchengji ");
	int input;
	scanf("%d",&input);
	int i=input/10;
	if(input<0||input>100)
	{
		printf("shurucuowu\n");
	}
	else
	{
		
		switch(i)
		{
			case 9:
				printf("A\n");
				break;
			case 8:
			    printf("B\n");
			    break;
			case 7: 
			    printf("C\n");
			    break;
			case 6:
				printf("D\n");
				break;
			default:
			    printf("E\n");
		}
	}}while(1);
}
