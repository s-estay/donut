
// https://en.cppreference.com/w/c/string/byte/strstr
// https://en.cppreference.com/w/cpp/string/byte/strcspn
// sublime test terminus
// build and run : ./build.sh && ./main.out

#include <stdio.h>
#include <string.h> // strstr strcspn

#define LINE_MAX_LENGTH 100
#define NUMBER_OF_DIGITS 10

int main()
{
	const char *digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	char buffer[LINE_MAX_LENGTH];
	FILE *ptr = fopen("example.txt", "r");

	while (fgets(buffer, LINE_MAX_LENGTH, ptr) != NULL)
	{
		buffer[strcspn(buffer, "\n")] = 0; // remove newline
		printf("%s : ", buffer);

		int position = strlen(buffer);
		int left = 0;

		for (size_t i = 0; i < NUMBER_OF_DIGITS; i++)
		{
			if (strstr(buffer, digits[i]) != NULL)
			{
				printf("%zu at position %ld : ", i, strstr(buffer, digits[i]) - buffer);
				int new_position = strstr(buffer, digits[i]) - buffer;

				if (new_position < position)
				{
					position = new_position;
					left = i;
				}
			}
		}
		printf("left %d\n", left);
	}

	return 0;
}
