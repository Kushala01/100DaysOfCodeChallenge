#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define isFull (!(ptr))

typedef struct list_node *list_pointer;
struct list_node
{
	char data[100];
	list_pointer link;
};
int isEmpty(list_pointer first)
{
	return ((first==NULL)?1:0);
}

void displayStr(list_pointer ptr)
{
	while(ptr!=NULL)
	{
		printf("%s",ptr->data);
		ptr=ptr->link;
		printf("\t -> \t");
	}
}

list_pointer insertLastStr(list_pointer top, char item[])
{
    list_pointer temp = (list_pointer)malloc(sizeof(struct list_node));
    strcpy((temp->data),item);
    temp->link=NULL;

    list_pointer p = top;

    if(p==NULL)
        return temp;
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }

        p->link=temp;
    }
    return top;
}

