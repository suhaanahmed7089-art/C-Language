#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20][20],b[20][20],s[20][20],r,c,i,j;
	printf("Enter the no. of rows");
	scanf("%d",&r);
	printf("\nEnter the no. of coloums");
	scanf("%d",&c);
	printf("\nEnter the elements of first matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\nEnter the elements of second matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe sum of the two marix ");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",s[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
