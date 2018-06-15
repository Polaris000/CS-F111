#include <stdio.h>
#include <string.h>

int my_strlen(char *);

void main()
{

	char p[] = "Hello";
	
	// type int actually
	printf("%d", my_strlen(p));

}


int my_strlen(char p[])
{
	return strlen(p);
	
}
