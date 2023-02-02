#include "lists.h"
/**
 * free_listint2 - function for frrring list
 * @head: struct head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *nextptr;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		nextptr = current->next;
		free(current);
		current = nextptr;
	}
	*head = NULL;
}
