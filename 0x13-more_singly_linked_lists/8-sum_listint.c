#include "lists.h"
/**
 * sum_listint - function for getting sum of a list
 * @head: struct
 * Return: returns sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
