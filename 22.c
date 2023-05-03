#include<stdio.h>
void print(int*);
void main()
{
	int a = 5;
	print(&a);
}
void print(int* ptr)
{
	printf("\n the value is %d ",*(ptr));
}
