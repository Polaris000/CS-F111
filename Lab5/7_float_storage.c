#include <stdio.h>

int main()
{
	float f = 0.1f;
	float sum = 0.0f, product;
	
	int i;
	for (i = 0; i < 10; ++i)
		sum += f;
	
	product = f * 10;
	printf("sum = %1.15f, mul = %1.15f, mul2 = %1.15f\n", sum, product, f * 10);
}
