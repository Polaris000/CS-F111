#include <stdio.h>
#include <stdlib.h>


void ins_sort(int arr[], int num);

void main()
{
	int arr[5] = {8, 5, 3, 9, 4};

	 ins_sort(arr, sizeof(arr) / sizeof(int));
}

void ins_sort(int arr[], int num)
{
	for (int i = 1; i < num; i ++)
	{
		int key = arr[i];
		
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];

			j -= 1;
		}
		
		 arr[j + 1] = key;

	}
	
	for (int i = 0; i < num; i ++)
	{
		printf("%d", arr[i]);
	}

}
