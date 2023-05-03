#include<stdio.h>
void main()
{
	int percentage , purcase_amount , Totalamount , minus_rate;
	purcase_amount = 1000;
	
	percentage = 20;
	minus_rate = purcase_amount*(0.2);
	Totalamount = (purcase_amount-minus_rate);
	printf("The actual amount is =%d",purcase_amount);
	printf("\n The discount percentage is =%d",percentage);
	printf("\n The total amount is =%d",Totalamount);
	
}
