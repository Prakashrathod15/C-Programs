#include<stdio.h>
int factorial(int n)
{
	int fact = 1 , i = 1;
	while(i<=n)
	{
		fact = fact*i;
	}
	return fact;
}
int perfect(int* p)
{
	int digit, sum = 0 , fact = 0;
	while(*p>0)
	{
		digit = *p%10;
	    // 123 = 
	    fact = factorial(digit);
	    sum = sum+fact;
	    *p= *p/10;
	}
	return sum;
}
void main()
{
	int n,sum,temp;
	printf("\n enter number ");
	scanf("%d",&n);
	temp = n;
	sum = perfect(&n);
	if(sum==temp)
	printf("\n %d is perfect number ",sum);
	else 
	printf("\n %d is not perfect number ",sum);
	
}
