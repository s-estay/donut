
#include <stdio.h>

void one_dimension()
{
	int train[] = {1, 2, 3};
	int elements = (sizeof(train) / sizeof(train[0]));
	printf("# %i\n", elements);
	for (size_t i = 0; i < (size_t) elements; i++)
	{
		printf("%i\n", train[i]);
	}
}

void two_dimensions()
{
	int train[][2] = {
		{0, 1},
		{2, 3},
		{4, 5},
		{6, 7},
		{8, 9},
	};
	int elements = (sizeof(train) / sizeof(train[0]));
	printf("# %i\n", elements);
	for (size_t i = 0; i < (size_t) elements; i++)
	{
		printf("%i %i\n", train[i][0], train[i][1]);
	}
}

int main()
{
	//one_dimension();
	two_dimensions();
	return 0;
}