#include<stdio.h>
void main()
{
	int n, digit, reverse = 0, temp;
	printf("\n enter number ");
	scanf("%d",&n);
	temp = n;
	while(n>0)
	{
		digit = n%10;
		reverse = reverse*10+digit;
		n = n/10;
	}
	if(reverse==temp)
	printf("\n %d is palimdrome number ",temp);
	else
	printf("\n %d is not palimdrome number ",temp);
}
