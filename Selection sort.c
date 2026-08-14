#include<stdio.h>
int main()
{
	int n,i,j,min,a[30],swap;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		swap=a[min];
		a[min]=a[i];
		a[i]=swap;
	}
	printf("\nThe sorted elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
