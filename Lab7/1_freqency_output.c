#include <stdio.h>


int main()
{
	int N, x;
	printf("Enter N");

	scanf("%d", &N);

	printf("Enter a number to obtain the frequency of ");
	scanf("%d", &x);

	int arr[N];
	int frequency = 0;

	for (int i = 0; i < N; i += 1)
	{
		int j;
		scanf("%d", &j);
		
		arr[i] = j;
		if (j == x)
			frequency += 1;
	}

	printf("frequency: %d ", frequency);

	


	return 0;
}
