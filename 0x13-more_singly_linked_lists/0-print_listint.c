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
	size_t *temp;

	if (h == NULL)
		return (0);
	temp = head;
	if (temp != NULL)
	{
		temp = temp->next;
		count++;

	}
	return(count)
}
