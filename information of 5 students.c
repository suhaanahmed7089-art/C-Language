#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[50];
};
int main()
{
	int i;
	struct student st[5];
	printf("Enter the information of 5 students\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the name of students\n");
		scanf("%s",&st[i].name);
		printf("\nEnter the roll no. of students\n");
		scanf("%d",&st[i].rollno);
	}
	printf("\nStudent information list");
	for(i=0;i<5;i++)
	{
		printf("\nRoll no:%d,Name:%s",st[i].rollno,st[i].name);
	}
	return 0;
}