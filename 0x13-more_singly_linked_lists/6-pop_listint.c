#include "lists.h"
/**
 * pop_listint - function for removing head of linked list
 * @head: head of struct
 * Return: returnes the poped data.
 */
int pop_listint(listint_t **head)
{
	int newdata;

	listint_t = *new;

	if (*head == NULL)
		return (0);
	newdata = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (newdata);

}
