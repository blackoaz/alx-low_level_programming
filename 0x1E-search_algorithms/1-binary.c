#include "search_algos.h"

/**
 * binary_search - Function for doing a binary search
 * @array: Pointer to the first element of  the array to search
 * @size: Number of elements in the array
 * @value: Value to search for in the array
 * Return: -1 if number is not present or array is NULL
 * Otherwise, index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, lower_bound, upper_bound;

	if (array == NULL)
		return (-1);

	for (lower_bound = 0, upper_bound = size - 1; upper_bound >= lower_bound;)
	{
		printf("Searching in array: ");
		for (i = lower_bound; i < upper_bound; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = lower_bound + (upper_bound - lower_bound) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			upper_bound = i - 1;
		else
			lower_bound = i + 1;
	}
	return (-1);
}
