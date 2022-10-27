#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"sllFxnsStr.h"

int palindrome(char p[])
{
    int k,i;
    int n=strlen(p);
    int flag=0;
    for(i=0,k=n-1;i<=k;i++,k--)
    {
        if(p[i]!=p[k])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}

int main()
{
    int n,i;
    char s[50],temp[50];

    printf("Enter size of list : ");
    scanf("%d",&n);

    list_pointer a;

    printf("Enter words : \n");
    for(i=0;i<n;i++)
    {
        scanf(" %s",&s);
        a=insertLastStr(a,s);
    }

    printf("\nList is :\n ");
    displayStr(a);
    printf("\n");

    list_pointer PSLIST,NPSLIST;

    for(i=0;i<n;i++)
    {
        strcpy(temp,a->data);
        if(palindrome(temp))
        {
            PSLIST=insertLastStr(PSLIST,temp);
        }
        else
        {
            NPSLIST=insertLastStr(NPSLIST,temp);
        }
        a=a->link;
    }

    printf("\nPalindrome List : \n");
    displayStr(PSLIST);

    printf("\nNon Palindrome List : \n");
    displayStr(NPSLIST);
    printf("\n");
    return 0;
}