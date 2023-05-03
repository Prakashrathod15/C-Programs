#include<stdio.h>
void main()
{
	int armNo,temp,sum=0,digit =0 ;
	printf("\n Enter number");
	scanf("%d",&armNo);
	temp = armNo;
	while(armNo>0)
	{
		digit = armNo%10;
		sum = sum+digit*digit*digit;
		armNo = armNo/10;
	}
	
	if(sum==temp)
	printf("\n %d is armstrong number ",temp);
	else 
	printf("\n %d temp is not armstrong number ",temp);
}
