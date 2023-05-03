#include<stdio.h>
void main()
{
	int arr[5]={10,20},i;
	int* p = &arr;
	for( i = 0; i<5; i++)
	{
		printf("\n %u",(p+i));
	}
}
