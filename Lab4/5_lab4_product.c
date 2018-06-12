#include <stdio.h>

int main()
{
	float a, b, prod;
	printf("Enter a value a");

	scanf("%f", &a);

	printf("Enter the value b");
	scanf("%f", &b);

	prod = a * b;

	// printf("Product of %f and %f is : %f \n", a, b, prod);

	printf("Product of %.2f and %.2f is : %.4f \n", a, b, prod);
	return 0;
}
