#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("Please enter a b c");
	scanf("%d %d %d", &a, &b, &c);

	float x1, x2;
	
	x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);


	printf("x1 is %f \n x2 is %f", x1, x2);

	
}
