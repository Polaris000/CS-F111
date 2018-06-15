#include <stdio.h>

int main()
{
int val, term, count;

printf("Enter a +ve integer to generate the hailstone sequence: ");
scanf("%d",&val);
if (val <= 0) 
{
   printf("Hailstone sequences only for +ve numbers. Bye!\n\n");
   return 0;
}

count = 1;	
printf("%d\n", val);
for (term = val; term != 1; )
{
   if (term % 2 == 0) 
      term = term / 2;
   else 
      term = (3 * term) + 1;
   printf("%d\n", term);
   count++;
}; 

printf("Number of terms = %d\n",count);
return 0;
}
