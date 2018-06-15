#include <stdio.h>

int main()
{
	char ch;
	int lines = 0, characters = 0;
	
	while ((ch = getchar()) != EOF)
	{
		switch(ch)
		{
			case '\n': lines += 1;
				break;

			default: characters += 1;
			
		}
	}
	
	printf("lines: %d, characters: %d", lines, characters);
	return 0;

}
