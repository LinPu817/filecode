#include<stdio.h>
#include<stdlib.h>
#define ok 1
typedef struct stu
{
	char name[10];
	char sex[4];
	int age;
}stu;
typedef struct Node{
	stu data;
	struct Node*next;
}Node;
int init(Node*p)
{
	p=(Node*)malloc(sizeof(Node));
	p->next=NULL;
	return ok;
}
int destory(Node* L){
	Node *p;
	p=L;
	while(L){
		p=p->next;
		free(L);
	}
}
int cleal(Node*p)
{
	Node*a,*b;
	a=p->next;
	while(p)
	{
		a=b->next;
		free(p);
		a=b;
	 } 
	 p->next=NULL;
	 return ok;
}
int main()
{
	Node L;
	init(&L);
	destory(&L);
	cleal(&L);
	return 0;
 } 
