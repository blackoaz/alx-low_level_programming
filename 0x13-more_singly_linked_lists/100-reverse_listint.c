#include "lists.h"
/**
 * reverse_listint - function for reversing a list
 * @head: pointer to a header pointer
 * Return: returns pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *current = *head;

	while (current)
	{
		listint_t *next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
