#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - fumction that returns the number of elements
 * @h: struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (count);
}
