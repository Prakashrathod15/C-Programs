#include<stdio.h>
void main()
{
	// Accept two numbers from user and an operate( + ,- ,* , % ) based on these perform desired operation.
	int num1,num2;
	char ch;
	scanf("%c",&ch);
	printf("\n.The choice is =%c",ch);
	printf("Enter Two Number. ");
	scanf("%d%d",&num1,&num2);
	printf("\n Your Two Number are .%d %d",num1,num2);
	printf("\n .Please enter your choice for operation + ,- ,* , % ");
	scanf("%c",&ch);
	printf("\n.The choice is =%c",ch);
	if(ch=='+')
	{
		printf("\n You choice is addtion");
		printf("\n The addition of %d and %d is = %d ",num1,num2,num1+num2);
	}
	else if(ch=='-')
	{
		printf("\n You choice is Substraction ");
		printf("\n The substraction of %d and %d is = %d ",num1,num2,num1-num2);
	}
	else if(ch=='*')
	{
			printf("\n You choice is Multiplication");
		printf("\n The multiplication of %d and %d is = %d ",num1,num2,num1*num2);
	}
    else if(ch=='%')
	{
			printf("\n You choice is Modulation");
		printf("\n The modulation of %d and %d is = %d ",num1,num2,num1%num2);
	}
}
