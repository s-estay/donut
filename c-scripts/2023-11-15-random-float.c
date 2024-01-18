
#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>

float rand_float()
{
	return (float) rand() / (float) RAND_MAX;
}

int main()
{
	srand(time(0));
	float w = rand_float();
	printf("%f\n", w);
	
	return 0;
}