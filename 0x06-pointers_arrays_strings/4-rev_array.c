#include "main.h"

/**
 * reverse_array - reversing the content of an array interger
 *
 * @a: arg char
 * @n: arg char
 *
 * Return: number of elements
 *
 */
void reverse_array( int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n -1 - index] = a[index];
		a[index] = tmp
	}
}
