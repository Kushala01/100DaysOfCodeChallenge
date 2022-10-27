#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a,b;
	int *ptra;
	int *ptrb;
	printf("enter the 2 numbers to swap");
	scanf("%d %d",&a,&b);
	printf("right now : a=%d  \n b=%d",a,b);
	ptra=&a;
	ptrb=&b;
	swap(ptra,ptrb);
	printf("after swap : a=%d  \n b=%d",a,b);
	return 0;
}