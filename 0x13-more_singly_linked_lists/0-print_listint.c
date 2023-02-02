#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: header
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d", h->n)
		temp = h->next;
		count++;

	}
	return(count)
}
