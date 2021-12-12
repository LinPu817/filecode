#include<stdio.h>
int main(){
	int dat1,dat2;
	float dat3;
	char op;
	do{
	scanf("%d%c%d",&dat1,&op,&dat2);
	switch(op)
	{
		case '+':
			dat3=dat1+dat2;
			break;
		case '-':
			dat3=dat1-dat2;
			break;
		case '*':
			dat3=dat1*dat2;
			break;
		case '/':
			dat3=dat1/dat2;
			break;
	}
	printf("%.2f\n",dat3);
       }while(1);
return 0;

}
 
