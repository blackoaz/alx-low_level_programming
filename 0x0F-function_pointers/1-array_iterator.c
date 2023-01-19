#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that excutes a given function a s a parameter
 * @array: array to be targeted
 * @size: sixe of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
