#include<stdio.h>
#include<stdlib.h>

void Reverse(int a[],int m)
{
	int *first;
	int *last;
	first=&a[0];
	last=&a[m-1];
	
	for(int i=0;i<m/2;i++)
	{
		int temp;	
		temp=*(first+i);
		*(first+i)=*(last-i);
		*(last-i)=temp;

	}
}

int main()

{
int i,n;
printf("enter the lenght of the array :");
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));
printf("enter the element present in the array :");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
Reverse(arr,n);
printf("the elements after reverse is :");
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
return 0;
}

