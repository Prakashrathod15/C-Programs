#include<stdio.h>
void main()
{
	int num , a, b, c ,d , sum ;
	printf("Enter number of three digit");
	scanf("%d",&num);
	a = num/10;
	b = num%10;
	c = a%10;
	d = a/10;
	 
	b = (b*100);
	c = (c*10);
	d = (d*1);
	sum = b+c+d;
	printf(" \n the sum var is = %d",sum);
}
