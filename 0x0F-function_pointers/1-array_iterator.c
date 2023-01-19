#include "function_pointers.h"
/**
 * array_iterator - function that excutes a given function a s a parameter
 *
 * @size: sixe of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
