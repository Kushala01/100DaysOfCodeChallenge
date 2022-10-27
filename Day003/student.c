#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char name[50];
	int rollNum;
	double cgpa;
}student;

void read(student *s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n enter the name of the student : \n");
		scanf("%s",s->name);
		printf("\n roll number : \n");
		scanf("%d",&s->rollNum);
		printf("\n enter the cgpa : \n");
		scanf("%lf",&s->cgpa);
		s++;
	}
}	

void display(student *s,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n name : %s \n roll number : %d \n cgpa : %lf \n",s->name,s->rollNum,s->cgpa);
		s++;
	}
}

void sort(student *s,int n)
{
	student temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(s[i].rollNum>s[j].rollNum)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}


int main()
{
	int i,n;
	student *s;
	printf("enter the number of students : \n");
	scanf("%d",&n);
	s=(student *)malloc(n*sizeof(student *));
	read(s,n);
	sort(s,n);
	display(s,n);
	return 0;
}