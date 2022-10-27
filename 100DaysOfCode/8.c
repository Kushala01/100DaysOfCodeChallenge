#include<stdio.h>
#include"sllFxns.h"
#include<stdlib.h>

int main()
{
	int n,k;
	printf("enter the number of nodes :\n");
	scanf("%d",&n);

	list_pointer a=(list_pointer)calloc(n,sizeof(struct list_node));
	a=NULL;

	printf("\n enter the elements : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		a=insertEnd(a,k);
	}
	printf("\nlist :\n");
	display(a);

	list_pointer odd=NULL;
	list_pointer even=NULL;

	for(int i=0;i<n;i++)
	{
		k=a->data;
		if(i%2==0)
		{
			even=insertEnd(even,k);
		}
		else
		{
			odd=insertEnd(odd,k);
		}
		a=a->link;
	}
	printf("\nthe nodes present in odd position is: \n");
	display(odd);
	printf("\n the nodes present in even position is \n");
	display(even);
	printf("\n");
	return 0;
}