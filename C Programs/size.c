#include<stdio.h>
int main()
{
	int integertype;
	float floattype;
	char chartype;
	double doubletype;
	printf("Size of the int is %ld\n",sizeof(integertype));
	printf("Size of the float is %ld\n",sizeof(floattype));
	printf("Size of the double is %ld\n",sizeof(doubletype));
	printf("Size of the char is %ld\n",sizeof(chartype));
	return 0;
}
