#include<stdio.h>
void main()
{
	// find even or odd element in the array 
	int a[10],i ;
	printf("\n enter element in the array ");
	for(i = 0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
   // check number is even or odd
   for(i = 0; i<10; i++)
   {
   	   if(a[i]%2==0)
   	   printf("\n %d is even number ",a[i]);
   	   else
   	   printf("\n %d is odd number ",a[i]);
   }
   
}

