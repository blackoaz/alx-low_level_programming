#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: -1 if value is not present or array is NULL
 *Otherwise, the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
