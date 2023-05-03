#include<stdio.h>
void main()
{
	float actual_amount , dis_rate , Gst, total_amount, minus , Gst_plus;
	actual_amount = 1000;
	dis_rate = 20;
	Gst = 15;
	Gst_plus = actual_amount*(Gst/100);
	actual_amount = actual_amount+Gst_plus;
	minus = actual_amount*(dis_rate/100);
	total_amount = actual_amount-minus;
	printf("The actual Price is =%f",actual_amount);
	printf("\n The Gst is =%f%%",Gst);
	printf("\n The Discont percentage is = %f%%",dis_rate);
	printf("\n The Payable amount is = %f",total_amount);
	
}
