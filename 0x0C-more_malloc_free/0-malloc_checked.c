#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - function that allocate memory through malloc
 * @b:unsigned int
 *
 * Return: return pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
			exit(98);
	return (ptr);

}
