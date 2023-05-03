#include<stdio.h>
void main()
{
	int num,q,r;
	printf("Enter two digit number");
	scanf("%d",&num);
	q = num/10;
	r = num%10;
	if(num>=11&&num<=19)
	{
		if(num==11)
		{
			printf("\n Eleven. ");
		}
		else if(num==12)
		{
		    printf("\n Tweel. ");
		}
		else if(num==13)
		{
			printf("\n Thirteen. ");
		}
		else if(num==14)
		{
			printf("\n Fourteen. ");
		}
		else if(num==15)
		{
			printf("\n Fifteen. ");
		}
		else if(num==16)
		{
			printf("\n Sixteen. ");
		}
		else if(num==17)
		{
			printf("\n Seventeen. ");
		}
		else if(num==18)
		{
			printf("\n Eighteen. ");
		}
		else 
		{
			printf("\n Nineteen. ");
		}
		
	}
	else if(q>=1&&q<=9)
	{
		if(q==1)
		{
			printf("Ten");
		}
		else if(q==2)
		{
			printf("Tweenty");
		}
		else if(q==3)
		{
			printf("Thirty");
		}
		else if(q==4)
		{
			printf("Fourty");
		}
		else if(q==5)
		{
			printf("Fifty");
		}
		else if(q==6)
		{
			printf("Sixty");
		}
		else if(q==7)
		{
			printf("Seventy");
		}
		else if(q==8)
		{
			printf("Eithy");
		}
		else if(q==9)
		{
			printf("Ninety");
		}
	}
	
	if(r>=1&&r<=9)
	{
		if(r==1)
		{
			printf("One.");
		}
		else if(r==2)
		{
			printf("Two.");
		}
		else if(r==3)
		{
			printf("Three");
		}
		else if(r==4)
		{
			printf("Four.");
		}
		else if(r==5)
		{
			printf("Five.");
		}
		else if(r==6)
		{
			printf("Six.");
		}
		else if(r==7)
		{
			printf("Seven.");
		}
		else if(r==8)
		{
			printf("Eight.");
		}
		else if(r==9)
		{
			printf("Nine.");
		}
	}
	
	
	
	
	
	
	
}
