#include <stdio.h>
#include <stdlib.h>


void main()
{
	int num_rows;
	
	scanf(" %d", &num_rows);

	printf("%d \n \n", num_rows);

	int *rows[num_rows];

	for (int i = 0; i < num_rows; i++)
	{
		int num_cols;
		scanf(" %d", &num_cols);

		rows[i] = malloc(sizeof(int) * (num_cols + 1));

		rows[i][0] = num_cols;

		printf("%d \t", rows[i][0]);

		for (int j = 1; j <= num_cols; j ++)
		{
			scanf("%d", &rows[i][j]);
			
			printf(" %d \t", rows[i][j]);			
		} 
		
		printf(" \n");
	}
}
