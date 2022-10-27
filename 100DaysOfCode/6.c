#include"sllFxns.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,k;

    printf("Enter the number of elements present in the list :\n ");
    scanf("%d",&n);

    list_pointer a = (list_pointer)calloc(n,sizeof(struct list_node));
    a=NULL;

    printf("\nEnter elements present in the list: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        a=insertEnd(a,k);
    }

    printf("\nList: \n");
    display(a);

    list_pointer odd=NULL;
    list_pointer even=NULL;

    for(int i=0;i<n;i++)
    {
        k=a->data;
        k=pow(k,3);
        if(k%2==0)
        {
            even=insertEnd(even,k);
        }
        else
        {
            odd=insertEnd(odd,k);
        }
        a=a->link;
    }

    printf("\nOdd list : \n");
    display(odd);
    printf("\nEven list : \n");
    display(even);
    printf("\n");
}