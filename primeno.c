#include<stdio.h>
void main()
{
	int n ;
	int d =2;
	int count = 1;
	scanf("%d",&n);
	while(d<n)
	{
		if(n%d==0)
		{
			count++;
		}
		d++;
	}
	if(count==1)
	{
		printf("\n It is prime number ");
	}
	else
	{
		printf("\n It is not prime ");
	}
	
	
	
	
	
	
	
	
}
