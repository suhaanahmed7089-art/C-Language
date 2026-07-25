#include<stdio.h>
int main()
{
	char operator;
	float a,b,result;
	printf("\nEnter the operator(+,-,*,/):");
	scanf("%c",&operator);
	printf("Enter the value of two no.\n");
	scanf("%f%f",&a,&b);
	switch(operator)
	{
		case'+':
			result=a+b;
			printf("result=%2f",result);
			break;
		case'-':
			result=a-b;
			printf("result=%2f",result);
			break;
		case'*':
			result=a*b;
			printf("result=%2f",result);
			break;
		case'/':
			result=a/b;
			printf("result=%2f",result);
			break;
	}
	return 0;
}
