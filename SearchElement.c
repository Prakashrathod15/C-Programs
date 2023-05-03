#include<stdio.h>
void main()
{
	int a[5],val,count,i;
	
	// take input from user 
	printf("\n enter element in the array ");
	for(i = 0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n enter number that you want to search in the array ");
	scanf("%d",&val);
	
	// finding the number in the array 
	count = 1;
	for(i = 0; i<5; i++)
	{
		if(a[i]==val)
		{
			printf("\n the %d is present in the array at index %d of array ",val,i);
			count--;
		}
	}
	
	if(count==1)
	printf("%d is not present in the given array ",val);
	
}
