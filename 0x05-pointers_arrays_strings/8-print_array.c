#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * Description: array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; 1 < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n")
}
