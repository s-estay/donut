
// `malloc` is used for dynamic memory allocation in the free store (heap)
// The program accesses the heap via a pointer that `malloc` returns
// When memory is no longer needed, the pointer is passed to `free` which deallocates the memory

// `malloc` allocates the specified number of bytes
// `free` releases the specified block of memory back to the system 

// It is common for `new` and `malloc` to allocate and free storage
// from the same part of the computer's memory.
// In that case, "free store" and "heap" are synonyms.
// Bjarne Stroustrup

// int *array_b = malloc(10 * sizeof(int))
// This computes the number of bytes that ten integers occupy in memory,
// then requests that many bytes from malloc and assigns the result to a pointer named array.
// Pointers and arrays can be used interchangeably in some situations

// return -1
// return 0
// status 0 means the program succeeded
// status different from 0 means the program exited due to error or anomaly

#include <stdio.h>
#include <stdlib.h> // `malloc`

int main()
{
	//int array_a[10]; // static memory allocation
	int *array_b = malloc(10 * sizeof(int)); // dynamic memory allocation

	// good programming practice
	if (array_b == NULL)
	{
		printf("malloc failed\n");
		return -1;
	}

	free(array_b);

	return 0;
}