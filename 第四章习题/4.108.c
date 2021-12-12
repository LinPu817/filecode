#include<stdio.h> 
int main()
{
	int a,b;
	char c,d;
	int i=0;
	for(i=0;i<2;i++){
	scanf("%d%c%d%c",&a,&c,&b,&d);
	switch(c)
	{
		case '+':
			c='-';
			break;
		case '-':
			c='+';
			break;
	}
	printf("%d%c%d%c\n",a,c,b,d);	
	}
	return 0;
}

