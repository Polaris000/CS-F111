#include <stdio.h>
#include <stdlib.h>



void main()
{
	char *x = malloc(sizeof(char));

	scanf("%s", x);

	for (int i = 0; i < 5; i ++)
	{
		printf("%c", x[i]);
	}
}
