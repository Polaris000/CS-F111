#include <stdio.h>


void main()
{
	char c = 'c';

	char *pc = &c;

	int a = 4;
	int *pa = &a;

	float d = 2.34;

	printf("%p \n", pc + pa );
	printf("%p \n", pc * pa);
	printf("%f", pa + d);

	
	
}
