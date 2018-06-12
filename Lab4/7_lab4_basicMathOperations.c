#include <stdio.h>


int main()
{
	float a, b;
	float sum, product, quotient, difference;

	printf("Please enter two numbers a and b with a space\n");
	scanf(" %f %f", &a, &b);

	sum = a + b;
	product =  a * b;
	quotient = a / b;
	difference = a - b;

	printf(" Sum: %f \n", sum);

	printf(" Product: %f \n", product);

	printf(" Quotient: %f \n", quotient);

	printf(" Difference: %f \n", difference);

	return 0;
}
