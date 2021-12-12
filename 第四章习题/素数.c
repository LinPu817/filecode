#include<stdio.h> 
int main()
{
	int s=0;
	int count=0;
	for(s=100;s<=200;++s)
	{
		int j=0;
		for(j=2;j<s;j++)
		{
			if(s%j==0)
			{
				break;
			}
		}
		if(s==j)
		{
			printf("%d\n",s);
			count ++;
		}
	}
	printf("%d",count);
}
