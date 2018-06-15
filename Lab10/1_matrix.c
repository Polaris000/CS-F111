#include <stdio.h>
#include <stdlib.h>


void main()
{
	int m, n;

	scanf("%d %d", &m, &n);

	int *rows[m];

	for (int i = 0; i < m; i ++)
	{
		rows[i] = malloc(sizeof(int) * n);
		
		for (int j = 0; j < n; j ++)
		{
			scanf("%d", &rows[i][j]);
			printf("%d \t", rows[i][j]);
		}

		printf(" \n");
	}
}
