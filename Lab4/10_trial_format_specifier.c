#include <stdio.h>

int main()
{
	
	// MINIMUM FIELD WIDTH SPECIFICATIONS

	// - INDICATES LEFT ALIGN,  DEFAULT IS RIGHT ALIGN, + FORCES DISPLAY OF POSITIVE NUM AS +NUM
	int x = 12;
	// printf("%5d", x); // 2 - 5 spaces then x
	// printf("%-5d", x); x then -2 + 5 spaces
	
	
	float y = 234.5678;
	// printf("%-8.2f", y); 	// '234.56  '
	// printf("%+8.2f", y); 	// ' +234.56'
	// printf("%+-8.2f", y); 	// '+234.56  '

	char ch = 'Y';  // double quotes give pointer error
	// printf("%c", ch); 
}	
