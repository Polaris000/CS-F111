#include <stdio.h>

void foo(int arr[], int mat[][2])
{


	// prints 8 and 8 as it uses pointer-- passed by reference

  printf("Sizeof(arr) = %lu; sizeof (mat) = %lu\n", sizeof(arr), sizeof(mat));
}

int main()
{
  int arr[] = {10,20,45,67,68};
  int mat[][2] = {{10,20}, {30,40}, {50,60}};
  printf("Sizeof(arr) = %lu; sizeof (mat) = %lu\n", sizeof(arr), sizeof(mat));
  foo(arr,mat);
}
