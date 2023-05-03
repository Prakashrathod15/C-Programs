#include<stdio.h>
void main()
{
	int n, fact , sum = 0,i ;
	printf("\n Enter number ");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++)
	{
		fact = n%i;
	//	printf("\n %d is fact ",fact);
		if(fact==0)
		sum = sum+i;
	//	printf("\n %d is sum ",sum);
	}
	if(sum==n)
	printf("\n %d is perfect number ",n);
	else 
	printf("\n %d is Not perfect number ",n);
}
