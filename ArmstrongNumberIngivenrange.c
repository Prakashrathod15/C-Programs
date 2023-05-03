#include<stdio.h>
void main()
{
	int lowerLimit , upperLimit, armNo, digit , sum , temp ;
	printf("\n enter Lower limit ");
	scanf("%d",&lowerLimit);
	printf("\n enter upper limit ");
	scanf("%d",&upperLimit);
	
	while(lowerLimit<=upperLimit)
	{
		sum = 0;
		temp = lowerLimit;
		while(lowerLimit>0)
		{
			digit = lowerLimit%10;
			sum = sum+digit*digit*digit;
			lowerLimit = lowerLimit/10;
		}
		if(temp==sum)
		{
		printf("\n %d is armstrong number ",temp);
	    }

		lowerLimit = temp;
		lowerLimit++;
	}
}
