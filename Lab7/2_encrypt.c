#include <stdio.h>

int main()
{
	char word[1000];
	
	int encrypt;
	
	printf("Please enter an encryption key");

	scanf("%d", &encrypt);

	while (encrypt % 10 != 0)
	{
		printf("Please enter a value between -9 and 9");
		scanf("%d", &encrypt);
	}

	printf("Enter an english word");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i += 1)
	// word[i] != 0 can also be used
	{
		word[i] += encrypt;
	}

	printf("%s", word);

	return 0;
}
