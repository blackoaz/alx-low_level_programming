#include "lists.h"
/**
 * pop_listint - function for removing head of linked list
 * @head: head of struct
 * Return: returnes the poped data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);
	*head = temp;
	*head = temp->next;
	free(temp);
	return (*head->n);
}
