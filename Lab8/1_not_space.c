#include <stdio.h>



void main()
{

	// for N lines

	int N;
	printf("Please enter number of lines-- must be less than 11");

	scanf("%d", &N);
	

	// The N + 1 is because the first \n for entering value of N doesn't
	// Satify the loop condition and hence only N - 1 lines would actually
	// be used.
	// To fix, N + 1 is used	


	for (int i = 0; i < N + 1; i += 1)
	{
		
		char sentence[100];

	        scanf("%[^\n]", sentence);
		getchar();	
		
		// if getchar() is not used, the \n for N is stored in buffer
		// Which stops the scanf("%[^\n]")
		// The user isn't prompted to enter lines at all
	
		for (int i = 0; sentence[i] != 0; i += 1)
		{	
			if (sentence[i] != ' ')
				printf("%c", sentence[i]);
		
		}	

		printf(" \n \n");
	}


}
