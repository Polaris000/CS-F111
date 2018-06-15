#include <stdio.h>

#include <stdlib.h>
#include <time.h>


int find_max(int []); /* returns the largest integer of arr */
int find_min(int []); /* returns the smallest integer of arr */

// In the declaration above, name of the array is not required
// A simple [] work just as well

int main()
{

	int seed;
	int a, b;

	int arr[10];

	seed = time(NULL);
	
	srand(seed);
	// Without the above code, each time the same 5 numbers are generated.
	// This ensures that every time a different seq is obtained

	for (int i = 0; i < 10; i += 1)
	{
		int j = 20 + rand() % 20;

		arr[i] = j;	
	}

	a = find_max(arr);
	b = find_min(arr);

	printf("max %d min %d", a, b);

	return 0;
}


int find_max(int arr[])
{

	int max = arr[0];

	 for (int i = 0; i < 10; i += 1)
        {
              if (arr[i] > max)
			max = arr[i];
        }

	

	return max;
}

int find_min(int arr[])
{

        int min = arr[0];

         for (int i = 0; i < 10; i += 1)
        {
              if (arr[i] <  min)
                        min = arr[i];
        }



        return min;
}

