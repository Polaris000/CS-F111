#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cp_files(FILE *f1, FILE *f2)
{
	char ch;
	
	while ((ch = getc(f1)) != EOF)
	{
		putc(ch, f2);
		
	}
}


void main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("No arguments");
	}	

	FILE *f1 = fopen(argv[1], "r");
	FILE *f2 = fopen(argv[2], "w");

	cp_files(f1, f2);	
}
