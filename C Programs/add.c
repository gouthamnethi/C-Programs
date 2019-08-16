//Sum of the two numbers.
#include<stdio.h> //Header files
int main() // Main Program
{
	int a,b,sum; //Declaring the variables
	printf("Enter the value of a:"); //Printing the matter on the screen which is in quoted 
	scanf("%d",&a); //Reading the value of a from user
	printf("Enter the value of b:"); //Printing the matter entered in the double quotes
	scanf("%d",&b); //Reading the input from user
	sum=a+b; //Adding the value of a and b
	printf("The sum of the %d and %d is %d",a,b,sum); //printing the value of a and b along with the sum on output screen
	return 0;
} //End of the program
