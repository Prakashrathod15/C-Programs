#include<stdio.h>
void main()
{
	int lower,upper,fact ,sum,i,origional,digit;
	printf("\n enter lower Limit ");
	scanf("%d",&lower);
	printf("\n enter upper Limit ");
	scanf("%d",&upper);
//	int n,fact,sum = 0,i,digit,origionalNo;
while(lower<=upper)
{
	sum = 0;
	origional = lower;
	while(origional>0)
	{
		digit = origional%10;
		fact = 1;
		i =1;
		while(i<=digit)
		{
			fact = fact*i;
			i++;
		}
		sum = sum+fact;
	    origional = origional/10;
	}
	if(sum==lower)
	printf("\n %d is strong  Number ",lower);
	else
	printf("\n %d is Not strong number ",lower);
	lower++;
}
}
