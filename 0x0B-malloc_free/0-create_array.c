#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * char *create_array - this function create an array of characters
 *
 * @size: the size of array to be initialized
 * @c: initial value of the array
 *
 *Return:Returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *)malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
