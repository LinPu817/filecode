#include<stdio.h>
int main(){
	int ret;
	int ch;
	char input[20]={0};
	printf("����������->\n");
	scanf("%s",&input);
	printf("������Y/Nȷ�ϣ�");
	while((ch=getchar())!='\n')
	{
		;
	}
	ret=getchar();
	if(ret=='Y')
	{
		printf("ȷ�ϳɹ�"); 
	 } 
	 else
	 {
	 	printf("ȷ��ʧ��");
	 }
	return 0;
} 
