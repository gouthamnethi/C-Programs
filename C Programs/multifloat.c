#include<stdio.h>
int main()
{
	float a,b,mult;
	printf("Enter a floating point value:");
	scanf("%f",&a);
	printf("Enter a another floating point value:");
	scanf("%f",&b);
	mult=a*b;
	printf("Multiplication value of the %f and %f is %f",a,b,mult);
	return 0;
}
