#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	int *ptra;
	int *ptrb;
	int **p;
	int **q;

	printf("enter 2 numbers :");
	scanf("%d %d",&a,&b);
	ptra=&a;
	ptrb=&b;
	printf("In pointer : a=%d b=%d",*ptra,*ptrb);
	p=&ptra;
	q=&ptrb;
	printf("In pointer to pointer : a=%d b=%d",**p ,**q);

	return 0;
}