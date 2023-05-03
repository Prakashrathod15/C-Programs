#include<stdio.h>
void main()
{
	int a =10, b= 20;
	swap(&a,&b);
	printf(" \n the value of a is %d ",a);
	printf(" \n the value of b is %d",b);
}
void swap(int* x, int* y)
{
	int temp = *x;
    *x = *y;
    *y = temp;
	
	
}
