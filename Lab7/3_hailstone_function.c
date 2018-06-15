#include <stdio.h>




int print_hail_limit(int val, int a, int b)
{      
	int term;
	int count = 1;	
	
        printf("%d\n", val);

        for (term = val; term != 1; )
        {
       		 if (term % 2 == 0)
                	 term = term / 2;
  		 else
     	
			 term = (3 * term) + 1;


  		 printf("%d\n", term);
		
        	 count++;
		
		 if (term <= b && term >= a)
			break;
        }

       return count;
}

int main()
{
	int val, count_, a, b;

	printf("Enter a +ve integer to generate the hailstone sequence: ");
	scanf("%d %d %d",&val, &a, &b); // limits
	while  (val <= 0)
	{
  		 printf("Hailstone sequences only for +ve numbers. Bye!\n\n");
  		 scanf("%d", &val);
	}

	count_ = print_hail_limit(val, a, b);
    
	printf("Number of terms = %d\n",count_);

	

	return 0;
}
