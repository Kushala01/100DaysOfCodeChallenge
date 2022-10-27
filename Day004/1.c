#include<stdio.h>
#include"sllFxns.h"



int main()
{
	int n,m;
	printf("enter the number of elements in the 1st linked list : \n");
	scanf("%d",&n);
	int p[n];
	printf("enter the number of elements in the 2nd linked list : \n");
	scanf("%d",&m);
	int q[m];
	printf("enter the elements of the first linked list : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("enter the elements of the second linked list : \n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&q[i]);
	}
	list_pointer a,b;
	a=create(p,n);
	b=create(q,m);
	printf("\n the first linked list is : \n");
	display(a);
	printf("\n the second linked list is : \n");
	display(b);
	merge(a,b);
	display(a);
	
	return 0;
}