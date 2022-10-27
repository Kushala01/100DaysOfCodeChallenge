#include<stdlib.h>
#include<stdio.h>
#define isFull (!(ptr))

typedef struct list_node *list_pointer;
struct list_node
{
	int data;
	list_pointer link;
};
int isEmpty(list_pointer first)
{
	return ((first==NULL)?1:0);
}

list_pointer insertEnd(list_pointer top, int item)
{
    list_pointer temp = (list_pointer)malloc(sizeof(struct list_node));
    temp->data=item;
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

void display(struct list_node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
        printf(" -> ");
    }
}