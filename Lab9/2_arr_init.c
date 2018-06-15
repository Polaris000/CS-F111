#include <stdio.h>
int main()
{
  int i = 7;
  int arr[5] = {i, 2*i, 3*i}, *pa, *pb;
  pa = &arr[0];
  pb = arr+4;
  for (i = -4; i <= 0; ++i)
  	printf("%d, ",pb[i]); /* negative array index! */
  putchar('\n');
  
  printf("pb - pa = %ld\n", pb-pa); /* pointer subtraction */
  return 0;
}
