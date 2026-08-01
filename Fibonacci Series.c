#include<stdio.h>
#include<conio.h>
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n,i;
	printf("Enter the no. of terms\n");
	scanf("%d",&n);
	printf("\nEnter the terms of series\n");
	for(i=0;i<n;i++)
	{
		printf("%d",fib(i));
		printf("\t");
	}
	return 0;
}
