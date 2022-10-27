#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int day;
	int month;
	int year;
}dob;

typedef struct 
{
	long hNo;
	int zipCode;
	char state[50];
}addr;

typedef struct
{
	dob d;
	addr a;
	char name[50];
}emp;

void read(emp *e,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("enter the name :\n");
		scanf("%s",e->name);
		printf("day :\n");
		scanf("%d",&e->d.day);
		printf("month :\n");
		scanf("%d",&e->d.month);
		printf("year :\n");
		scanf("%d",&e->d.year);
		printf("house number :\n");
		scanf("%ld",&e->a.hNo);
		printf("zip code:\n");
		scanf("%d",&e->a.zipCode);
		printf("state :\n");
		scanf("%s",e->a.state);
		e++;
	}
}
void display(emp *e,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("details of %d",(i+1));
		printf("name=%s \n dob= %d/%d/%d \n adress \n house number : %ld \n ",e->name,e->d.day,e->d.month,e->d.year,e->a.hNo);
		e++;
	}
}


int main()
{
	emp *e;
	int n;
	printf("enter no of emps : \n");
	scanf("%d",&n);

	e=(emp*)malloc(n*sizeof(emp*));

	read(e,n);
	display(e,n);
	return 0;
}