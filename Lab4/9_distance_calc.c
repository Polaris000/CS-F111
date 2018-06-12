#include <stdio.h>
#include <math.h>

int main()
{
	float u, a, t;
	
	float dist;
	printf("Please enter initial velocity, acceleration and time with spaces");
	scanf("%f %f %f", &u, &a, &t);
	
	dist = (u * t) + 0.5 * (a * pow(t, 2.0));

	printf("%f", dist);
	
	return 0;
}
