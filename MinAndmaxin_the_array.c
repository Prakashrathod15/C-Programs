#include<stdio.h>
void main()
{
	int a[5],min,max,i;
	printf("\n enter element in array ");
	
	// Taking input in the array 
	for(i = 0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	// find maximum in the array 
	
	max = -999;
	for(i = 0; i<5; i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	
	printf("\n your maximum number in array is %d ",max);
	
	// finding minmum in the array 
	
	min = 9999;
	for(i= 0; i<5; i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	
	printf("\n your minmum number in the array is %d ",min);
}
