#include<stdio.h>
#include"sllFxns.h"
#include<stdlib.h>

int main()
{
	int n,k,i,item;
	rintf("enter the number of elements in the 1st linked list : \n");
	scanf("%d",&n);
	int p[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	a=create(p,n);
	


	return 0;
}