i#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int n, seed;
	
	seed = time(NULL);
	
	srand(seed);
	// Without the above code, each time the same 5 numbers are generated.
	// This ensures that every time a different seq is obtained

	for (int i = 0; i <= 4; i += 1)
	{
		int j = 20 + rand() % 20 ;
		printf("%d \t", j);
	}

	return 0;
}
