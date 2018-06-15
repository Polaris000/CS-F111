#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void file_disp_in(FILE *f1, FILE *f2)
{
	char ch;

	while ((ch = getc(f1)) != EOF)
	{
		putc(ch, f2);
	}
}

void file_given_num(FILE *f, int num)
{
	for (int i = 0; i < num; i ++)
	{
		char ch;
	
		while ((ch = getc(f)) != '\n' || (ch = getc(f)) != EOF)
		{
			putc(ch, stdout);
		}

		if (ch == EOF)
			break;
	}
}


void main(int argc, char *argv[])
{
	if (argc == 1)
	{
		file_disp_in(stdin, stdout);
	}

	int num_lines = -atoi(argv[1]);

	if (argc == 2)
		file_given_num(stdin, num_lines);

	while (argc > 2)
	{
		FILE *fn = fopen(argv[argc - 1], "r");

		file_given_num(fn, num_lines);
	}		
}
