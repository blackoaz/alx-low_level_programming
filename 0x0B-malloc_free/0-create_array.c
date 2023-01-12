#include "main.h"
/**
 * char *create_array - this function create an array of characters
 * @size: the size of array to be initialized
 * @c: initial value of the array
 *
 * return: returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr;
	int i;

	arr = (char*)malloc(sizeof(char) * size);
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[0] = c;
	}
	return (arr);
}
