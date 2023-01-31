#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function printing all the elements of a list
 * @h: length of the list
 * Return: returns the length of the list
 */
size_t print_list(const list *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("%d %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
