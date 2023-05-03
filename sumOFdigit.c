#include<stdio.h>
void main()
{
	int num , a,b,c,d,e,f,x;
	num = 1234;
	a = num/10;
	b = num%10;
	c = a/10;
	d = a%10;
	e = c%10;
	f = c/10;    
	x = b+d+e+f;
	printf(" x is = %d",x);
}
