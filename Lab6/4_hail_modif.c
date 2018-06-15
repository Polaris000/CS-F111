#include <stdio.h>

int main()
{
int val, term, count;
int a, b;

printf("Enter a +ve integer to generate the hailstone sequence: ");
scanf("%d",&val);


printf("Please enter two numbers");
scanf("%d %d", &a, &b);

while (val <= 0) 
{
   	printf("Hailstone sequences only for +ve numbers!\n\n");
	printf("Enter a +ve integer to generate the hailstone sequence: ");
	scanf("%d",&val);

}

count = 1;
	
printf("%d\n", val);

for (term = val; term != 1; )
{
  	 if (term % 2 == 0) 
     		 term = term / 2;
  	 else if (term % 2 != 0)
     		 term = (3 * term) + 1;

	 printf("%d\n", term);
	 count++;

	 if (term >= a && term <= b)
		break;

}; 

printf("Number of terms = %d\n",count);
return 0;
}
