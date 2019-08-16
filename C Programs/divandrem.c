#include<stdio.h>
int main()
{
	int divident,divisor,quotient,remainder;
	printf("Enter the number:");
	scanf("%d",&divident);
	printf("Enter the divider:");
	scanf("%d",&divisor);
	quotient=divident/divisor;
	remainder=divident%divisor;
	printf("Quotient = %d",quotient);
	printf("\nRemainder = %d",remainder);
	return 0;
}
