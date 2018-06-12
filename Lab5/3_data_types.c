#include <stdio.h>

int main()
{
	float f;

	printf("Sizeof (signed char) = %ld bytes\n", sizeof(unsigned char)); // datatype
	printf("Sizeof (short)= %ld bytes\n", sizeof(signed short));
	printf("Sizeof (int)= %ld bytes\n", sizeof(signed int));
	printf("Sizeof (long)= %ld bytes\n", sizeof(signed long));
	printf("Sizeof (float)= %ld bytes\n", sizeof(f)); // variable
	printf("Sizeof (double)= %ld bytes\n", sizeof(long double));
	printf("Sizeof (1.55)= %ld bytes\n", sizeof(1.55)); // constant
	printf("Sizeof (1.55L)= %ld bytes\n", sizeof(1.55L));
	printf("Sizeof (str)= %ld bytes\n", sizeof("Hello")); // string
	return 0;
}
