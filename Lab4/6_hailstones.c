#include <stdio.h>

int main()
{
	printf("Please enter a +ve integer");

	int a, counter = 0;
	scanf("%d", &a);

	if (a > 0) 
	{

		while (a > 1)
		{
			if (a % 2 == 0)
			{	
				a = a / 2;
				printf("%d \n", a);
			}		 

		
			else 
			{
				a = 3*a + 1;
				printf("%d \n", a);
			}
		
			counter += 1;
		}
	

		printf("Number of terms: %d \n", counter);
		return 0;
	}
	
	else 
		printf("Please enter only positive numbers");
}
