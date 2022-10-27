#include<stdio.h>
#include"sllFxns.h"
#include<stdlib.h>

int main()
{
	int n,k;
	printf("enter a number : \n");
	scanf("%d",&n);

	list_pointer a=(list_pointer)calloc(n,sizeof(struct list_node));
	list_pointer first=(list_pointer)malloc(sizeof(struct list_node));
	list_pointer second=(list_pointer)malloc(sizeof(struct list_node));

	first=a;
	a->data=0;
	a->link=second;

	second->data=1;
	second->link=NULL;


	for(int i=0;i<n-1;i++)
	{
		k=(first->data)+(second->data);
		a=insertEnd(a,k);

		first=first->link;
		second=second->link;

	}

	printf("\nthe resultant fibo series is : \n");
	display(a);
	return 0;
}