#include <stdio.h>

int main()
{
	int num_vowel = 0, num_conso = 0;
	char ch;

	while((ch = getchar()) != '\n' && ch != EOF)
	{
		
		if (ch >= 65 && ch <= 122)
		{	
			switch(ch)
			{
				case 'a':
				case 'A': 
			
				case 'e':
				case 'E':

				case 'i':
				case 'I':

				case 'o':
				case 'O':

				case 'u':
				case 'U': num_vowel += 1;
				
					break;

				case ' ':
					break;

				default: num_conso += 1;
			
			}
		}	
	}

	printf("number of vowels: %d, number of consonants: %d", num_vowel, num_conso);

	return 0;
}
