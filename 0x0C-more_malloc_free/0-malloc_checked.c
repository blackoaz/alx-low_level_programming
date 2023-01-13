#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc - function that allocate memory through malloc
 * @b:unsigned int
 *
 * Return: return pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = (int *)malloc(sizeof(int) * b)
		if (ptr == NULL)
			exit(98);
	return (ptr)

}
