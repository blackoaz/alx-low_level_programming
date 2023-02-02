#include "lists.h"
/**
 * sum_listint - function for getting sum of a list
 * @head: struct
 * Return: returns sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0, count = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum + = temp->n;
		temp = temp->next;

	}
	return (sum);
}
