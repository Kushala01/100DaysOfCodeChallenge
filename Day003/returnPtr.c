#include<stdio.h>
#include<stdlib.h>

int largest(int a,int b)
{
	int *x;
	int*y;
	x=&a;
	y=&b;
	if(*x>*y)
	{
		return *x;
	}
	else 
	{
		return *y;
	}

}

int main()
{
	int a,b,k;
	printf("enter 2 numbers to find out the lrgrst of the 2 : \n");
	scanf("%d %d",&a,&b);
	k=largest(a,b);
	printf("the largest out of the 2 is : %d \n",k);
	return 0;
}