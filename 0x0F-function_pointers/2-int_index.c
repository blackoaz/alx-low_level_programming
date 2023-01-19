#include "functions_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an interger
 * @size: number of elements in an array
 * cmp: pointer to the function to be used to compare values
 * @array: array of elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index == 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (,index < size; index++)
	{
		if (cmp(index[]) != 0)
			return (index);
	}
	return (-1);

}
