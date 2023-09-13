#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as parameter on each element array
 * @array: element to be executed
 * @action: pointer executed
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
