#include<stdio.h>
int armno(int*);
void main()
{
	int armNo,confirm= 0,temp;
	int* ptr ;
	printf("\n Enter number ");
	scanf("%d",&armNo);
	temp = armNo;
	ptr = &armNo;
	confirm = armno(ptr);
	 if(confirm==temp)
	 printf("\n %d is armstrong number ",temp);
	 else
	 printf("\n %d is Not armstrong number ",temp);
	
	
	
}
int armno(int* arm)
{
    
	int digit,temp,sum = 0, armNo = *arm;
	temp = armNo;
	
	while(armNo>0)
	{
		digit = armNo%10;
		sum = sum+digit*digit*digit;
		armNo = armNo/10;
	 } 
	 return sum;
	
}
