#include<stdio.h>
int quicksort(int a[30],int first,int last)
{
	int i,j,p,swap;
	if(first<last)
	{
	p=first;
	i=first;
	j=last;
	while(i<j)
	{
		while(a[i]<=a[p])
		i++;
		while(a[j]>a[p])
		j--;
		if(i<j)
		{
			swap=a[i];
			a[i]=a[j];
			a[j]=swap;
		}
	}
	swap=a[p];
	a[p]=a[j];
	a[j]=swap;
	quicksort(a,first,j-1);
	quicksort(a,j+1,last);
}
}
int main()
{
	int i,n,a[30];
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("\nEnter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nThe sorted elements of array are\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\t");
	}
	return 0;
}