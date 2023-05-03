#include<stdio.h>
void main()
{
	int n,count,i,temp,digit,sum;
	printf("\n Enter number ");
	scanf("%d",&n);
	temp=n;
	count = 0;
	while(n>0)
	{
		digit = n%10;
	    count++;
	    n = n/10;
	}
	printf("\n value of count is %d ",count);
	i = 0;
	sum = 0;
	count = count-1;
	while(temp>0)
	{
		digit = temp%10;
		if(i==0||i==count)
		 sum = sum+digit;
		 
		 temp = temp/10;
		 i++;
	}
//	printf("\n value of i is %d ",i);
	
	printf("\n sum of first and last digit is =%d ",sum);
}
