#include<stdio.h>
int Lsearch(int key,int arr[],int n)
{
int x=-1;
for(int i=0;i<n;i++)
{
	if(key==arr[i])
	{
	x=key;
	}
}
return x;
}

int main()
{
int n,key;
printf("enter the lenght of the array :");
scanf("%d",&n);

int arr[n];

printf("enter the elements present in the array :");
for(int i=0;i<n;i++)
{
scanf("%d",arr[i]);
}
printf("enter the elements to be searched");
scanf("%d",&key);
int ans=Lsearch(key,arr[n],n);
printf("%d",ans);
return 0;
}

