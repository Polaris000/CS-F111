#include <stdio.h>
#include <stdlib.h>



int compute_dep_sum(int [], int);
int max_sum(int [], int);
int max_trans(int [], int);

void main()
{

	int rows, cols;

	scanf("%d %d", &rows, &cols);

	int sums[rows];
	int abs_vals[rows];
	

	int matrix[rows][cols];

	for (int i = 0; i < rows; i += 1)
	{
		for (int j = 0; j < cols; j += 1)
		{
			scanf("%d", &matrix[i][j]);
		}
	
		sums[i] = compute_dep_sum(matrix[i], cols);
		abs_vals[i] = max_trans(matrix[i], cols);

	}	


	int max_sum_branch = max_sum(sums, rows);
	
	int max_abs_branch = max_sum(abs_vals, rows);

	printf(" \n %d\t %d", max_sum_branch, max_abs_branch);


}

int compute_dep_sum(int row[], int size)
{
	int  sum = 0;

	for (int i = 0; i < size; i ++)
	{
		if (row[i] >= 0)
			sum += row[i];
	}

	return sum;
}

int max_sum(int sums[], int size)
{
	int  max = sums[0];
	int branch = 0;

	for (int i = 0; i < size; i += 1)
	{
		if (max < sums[i])
		{	max = sums[i];
			branch = i;
		}
	}
	
	printf("%d \t", max);
	return branch;
}



int max_trans(int row[], int size)
{
	int max = abs(row[0]);
	

	 for (int i = 0; i < size; i += 1)
	 {
                if (max < abs(row[i]))
                {       max = abs(row[i]);
                       
                }
         }

	return max;

}
