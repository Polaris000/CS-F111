#include <stdio.h>

int main()
{	
	int a;
	printf("Please enter a number between 2 and 20");

	scanf("%d", &a);

	for (int i = 1; i <= 10; i += 1)
	{
		printf("%d \n", a * i);
	}

	return 0;
}
