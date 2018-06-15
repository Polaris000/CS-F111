#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAnagram3(char *, char *);

int main()
{
  char str1[100], str2[100];
  printf("First string: ");
  scanf("%[^\n]", str1);
  getchar();
  printf("Second string: ");
  scanf("%[^\n]", str2);
  getchar();
  if (isAnagram3(str1,str2)) 
	printf("\nThe strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
  else
	printf("\nThe strings\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
  putchar('\n');
}

int isAnagram3(char *w1, char *w2)
{
  int i, sum_w1 = 0, sum_w2 = 0, no_chars_w1 = 0, no_chars_w2 = 0;
  for (i = 0; w1[i] ; ++i)
  {
    if (isspace(w1[i]))
        /* >>>>> a statement s1 goes here <<<<< */
    no_chars_w1++;
    sum_w1 += /* >>>>> an expression e1 goes here <<<<< */ ;
  }
  for (i = 0; w2[i] ; ++i)
  {
    if (isspace(w2[i]))
        /* >>>>> s2 goes here <<<<< */
    no_chars_w2++;
    sum_w2 += /* >>>>> e2 goes here <<<<< */ ;
  }
  if ( /* >>> e3 here <<< */ && /* >>> e4 here <<< */)
    return 1;
  else
    return 0;
}
