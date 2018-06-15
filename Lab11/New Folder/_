#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int is_ana_my(char *a, char *b)
{


	if (strlen(a) != strlen(b))
		return 0;

	for (int i = 0; a[i]; i ++)
	{
		if (a[i] != ' ')
		{
			for (int j = 0; b[j]; j ++)
			{
				
				char temp_l = tolower(b[j]), temp_u = toupper(b[j]);

				printf("%c %c \n", temp_l, temp_u);
	
				if (a[i] == temp_l || a[i] == temp_u)
					break;


				if (!b[j + 1])
					return 0;
			}
		
		}	
	}
	
	return 1;
}

void main()
{
	printf(" \n \n \n %d", is_ana_my("hel Lo  P", "H el O    l p"));
}
