#include <stdio.h>
#include <string.h>
#include <ctype.h>


void convert_lower(char *);
void to_lower_lib(char *);

void main()
{
	char a[] = "Hello MY name IS";

	to_lower_lib(a);
}


void convert_lower(char a[])
{
	for (int i = 0; a[i] != 0; i += 1)
	
	{
		if (a[i] <= 'Z' && a[i] != ' ')
			a[i] += 32;
	} 

	printf("%s", a);
}



void to_lower_lib(char a[])
{
	for (int i = 0; a[i] != 0; i += 1)

        {
                if (a[i] <= 'Z' && a[i] != ' ')
                        a[i] = tolower(a[i]);
        }

        printf("%s", a);
	
}
