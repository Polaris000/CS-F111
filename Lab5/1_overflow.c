#include <stdio.h>

int main()
{
unsigned char count;

for (count=0; count >= 0; count=count+1)
 printf("%d\n",count);

// As unsigned char is always greater than 0, since it stores values from 0 to 2^7 - 1,
// It runs as an infinite loop.

printf("\nValue stored in count after the loop: %d\n",count);
}
