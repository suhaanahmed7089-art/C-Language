#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,swap;
	printf("Enter the no. of elements");
	scanf("%d",&n);
	printf("\nEnter the elements of array");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		j=i;
		while(j>0&&a[j]<a[j-1])
		{
			swap=a[j];
			a[j]=a[j-1];
			a[j-1]=swap;
			j--;
		}
	}
	printf("\nThe sorted elements of array are");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\t");
	}
	return 0;
}
