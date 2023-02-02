#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * @h: header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
