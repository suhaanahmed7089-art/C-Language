#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else 
	return n*fact(n-1);
}
int main()
{
	int n;
	printf("Enter a no.");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
