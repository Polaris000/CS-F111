#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_ana(char *a, char *b)
{
	return strcmp(a, b);
}

// selectiion sort
void *sel_sort(char *a)
{
	int size = strlen(a);
	for (int i = 0; i < size - 1; i ++)
	{
		for (int j = i + 1; j < size; j ++)
		{
			if (a[i] > a[j])
			{	char temp;

				temp =  a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	
	return a;	
}

void main()
{
	char a[] = "he llo";
	char b[] = "hlo le";

	char *x = sel_sort(a);
	char *y = sel_sort(b);
	

	printf("%s %s %d", x, y, is_ana(x, y));
}
