#include<stdio.h>
void main()
{
	int lowerLimit,upperLimit,fact,sum,i;
	printf("\n Enter lowerlimit ");
	scanf("%d",&lowerLimit);
	printf("\n Enter UpperLimit ");
	scanf("%d",&upperLimit);
	
	while(lowerLimit<=upperLimit)
	{
		sum = 0;
		fact = 0;
	   for(i=1;i<(lowerLimit-1);i++)
	   {
	   	   fact = lowerLimit%i;
	   	   if(fact==0)
	   	   sum = sum+i;
	   }
	   if(sum==lowerLimit)
	   printf("\n %d is perfect number ",sum);
	   lowerLimit++;
	}
}
