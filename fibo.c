#include<stdio.h>
void main()
{
	int no,x=0,y=1,z=0;
	printf("\n enter nth number ");
	scanf("%d",&no);
	
	while(z<=no)
	{
		printf("\n %d",z);
		x = y;
		y = z;
		z = x+y;
	}
}
