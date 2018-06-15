#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void file_cp(FILE *f1, FILE *f2)
{
	char ch;

	while ((ch = getc(f1)) != EOF)
	{
		putc(ch, f2);
	}
}



void main(int argc, char *argv[])
{
	if (!(argc - 1))
	{
		file_cp(stdin, stdout);
	}	

	while (argc > 1)
	{
		FILE *fn = fopen(argv[argc - 1], "r");
	
		file_cp(fn, stdout);
		argc --;
	}
}
