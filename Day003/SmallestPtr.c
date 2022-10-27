#include<stdio.h>
#include<stdlib.h>

int smallest(int a[],int l)
{
	int *sm;
	sm=&a[0];
	for(int i=0;i<l;i++)
	{
		if(a[i]<*sm)
		{
			*sm=a[i];
		}
	}
	return *sm;

}

int main()
{
	int k,i,n;
	printf("enter the size of the array :");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("enter the elements present in the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	k=smallest(arr,n);
	printf("the smallest element entered is : %d",k);

	return 0;
}