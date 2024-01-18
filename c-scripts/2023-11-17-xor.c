
// Open terminal inside Sublime Text : Alt+1
// https://www.geeksforgeeks.org/how-to-use-terminal-in-sublime-text-editor/

#include <stdio.h>
#include <stdint.h>

uint16_t xor(uint16_t aa, uint16_t bb)
{
	uint16_t result;
	if (aa == 0 && bb == 0) { result = 0; };
	if (aa == 0 && bb == 1) { result = 1; };
	if (aa == 1 && bb == 0) { result = 1; };
	if (aa == 1 && bb == 1) { result = 0; };

	return result;
}

void xor_def()
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			printf("%zu %zu %zu\n", i, j, (i|j)&(~(i&j)));
		}
	}
}

int main()
{
	//printf("%d\n", xor(1, 1));
	xor_def();

	return 0;
}