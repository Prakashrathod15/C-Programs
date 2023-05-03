#include<stdio.h>
void main()
{
	int n,sum=0,digit,reverse = 0,no = n;
	printf("\n Enter any number ");
	scanf("%d",&n);
	
	while(n>0)
	{
		digit = n%10;
		sum = sum+digit;
		reverse = reverse*10+digit;
		n = n/10;
	}
	printf("\n the sum is = %d",sum);
	printf("\n the reverse number is = %d",reverse);
	
	if(no=reverse)
	{
		printf("\n palimdrome");
	}
	else
	{
		printf("\n Not palimdrome");
	}
}
