#include<stdio.h>
void addDigit(); // function declaration.
void addDigit() // function defination.
{
	int n,digit,sum = 0;
	printf("\n enter number ");
	scanf("%d",&n);
	while(n>0)
	{
		digit = n%10;
		sum = sum+digit;
		n = n/10;
	}
	printf("\n the sum is %d ",sum);
}
void main()
{
	addDigit(); // function call
}
