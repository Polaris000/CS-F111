#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isAnagram3(char *, char *);


void main()
{
	char *w1 = "Hel lo";
	char *w2 = "hel L  O";

	printf("%d", isAnagram3(w1, w2));
}


int isAnagram3(char *w1, char *w2)
{
	 int i, sum_w1 = 0, sum_w2 = 0, no_chars_w1 = 0, no_chars_w2 = 0;

 	 for (i = 0; w1[i] ; ++i)
 	 {
		if (isspace(w1[i]))
    			/* >>>>> a statement s1 goes here <<<<< */
			no_chars_w1++;
	
		else
			sum_w1 += (int) tolower(w1[i])/* >>>>> an expression e1 goes here <<<<< */ ;
 	 }

	  for (i = 0; w2[i] ; ++i)
	  {
		if (isspace(w2[i]))
    		/* >>>>> s2 goes here <<<<< */
			no_chars_w2++;
		else
			sum_w2 += (int) tolower(w2[i])/* >>>>> e2 goes here <<<<< */ ;
	  }

	printf("%d %d %d %d\n", sum_w1, sum_w2, strlen(w1) - no_chars_w1, strlen(w2) - no_chars_w2);

 	 if ( sum_w1 == sum_w2 && (strlen(w1) - no_chars_w1) == (strlen(w2) - no_chars_w2))
		return 1;
	  else
		return 0;
}


