#include<stdio.h>
void main()
{
	int n,x,y,z;
	x = 0;
	y = 1;
	z = 0;
	printf("\n Enter nth term ");
	scanf("%d",&n);
	
	while(z<=n)
	{
		printf("\n %d",z);
		x = y;
		y = z;
		z = x+y;
	}
	
}
